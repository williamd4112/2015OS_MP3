/* add.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a add syscall that adds two values and returns the result.
 *
 */

#include "syscall.h"

int
main()
{
    int result = 0;
    int i;
    
    while(result < 10)
        result++;
    PrintInt(result);

    // Halt();
    /* not reached */
}
