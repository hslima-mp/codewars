#include "checking.h"

// Basic Check 
// PASSED = 1
// UNFINISHED = 0
// checks only if all cells are set in range [1, 4]
int bcheck(int *cells)
{
    for(int k = 0; k < 16; k++)
        if(cells[k] < 1 || cells[k] > 4) return 0;

    return 1;
}
