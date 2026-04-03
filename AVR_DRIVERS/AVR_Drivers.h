/**
 * @file AVR_Drivers.h
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Interface for AVR drivers.
 * @version 0.1
 * @date 2026-04-03
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#pragma once

typedef enum DRV_STATUS_Etag
{
    DRV_STATUS_OK           = 0,
    DRV_STATUS_ERROR        = 1,
    DRV_STATUS_PARAM_ERROR  = 2,
    DRV_STATUS_BUSY         = 3,
} DRV_STATUS_E;

