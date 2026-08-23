#!/usr/bin/env python3
"""
Replace single-line '/** ... */' comments with '// ...' in source files.
Runs recursively from repository root. Backs up modified files with .bak extension.
"""
import re
import sys
from pathlib import Path

EXTS = {'.h', '.hpp', '.c', '.cpp', '.cc', '.S', '.asm', '.ino'}

def process_file(p: Path):
    text = p.read_text(encoding='utf-8')
    changed = False
    out_lines = []
    for line in text.splitlines(True):
        new_line = ''
        i = 0
        L = len(line)
        while i < L:
            s = line.find('/**', i)
            if s == -1:
                new_line += line[i:]
                break
            e = line.find('*/', s+3)
            if e == -1:
                # no closing on same line -> leave as-is and stop searching
                new_line += line[i:]
                break
            # ensure it's a single-line block comment (closing on same line)
            inner = line[s+3:e].strip()
            # replace with '//' preserving preceding whitespace
            # if inner starts with '@' or '*', keep it
            replacement = '// ' + inner if inner else '//'
            new_line += line[i:s] + replacement
            i = e+2
            changed = True
        out_lines.append(new_line)
    if changed:
        bkp = p.with_suffix(p.suffix + '.bak')
        p.rename(bkp)
        p.write_text(''.join(out_lines), encoding='utf-8')
        print(f'Updated: {p}  (backup: {bkp})')
    return changed

if __name__ == '__main__':
    root = Path('.').resolve()
    updated = 0
    for p in root.rglob('*'):
        if p.is_file() and p.suffix.lower() in EXTS:
            try:
                if process_file(p):
                    updated += 1
            except Exception as ex:
                print(f'Error processing {p}: {ex}', file=sys.stderr)
    print(f'Done. Files updated: {updated}')
