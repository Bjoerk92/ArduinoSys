/**
 * @file main.c
 * @author Anders Bjørk (anders.bjoerk.unf@gmail.com)
 * @brief Main file for testing the timer functionality of the AVR microcontroller. 
 *        This file initializes the timer and runs a test to verify its operation.
 *
 * @version 0.1
 * @date 2026-04-02
 * 
 * @copyright Copyright (c) 2026
 * 
 */

static void Timers_Test(TIMER_ID_E timer_id)
{
    // This function should contain the logic to test the timer functionality.
    // For example, it could start the timer, wait for a certain period, and then check if the timer has elapsed.
    // The actual implementation will depend on the specific requirements of the test and the capabilities of the timer.
}


#include "AVR_Driver.h"
int main(void)
{
    // Initialize the AVR driver
    Driver_Init();

    // Initialize the timer
    Timers_Init(TIMER_ID_0);

    while (1)
    {
        // Run the timer test
        Timers_Test(TIMER_ID_0);
    }

    return 0;

}