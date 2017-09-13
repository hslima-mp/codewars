#include "runcell.h"
#include "updopt.h"

void rcOne(int *clues, int *cells, int opt[][4])
{
    if(clues[0] == 1)
    {
        cells[0] = 4;
        updOptCell(opt, 0, 0, 0, 0, 0);
    }


    if( clues[1] == 1)  cells[1] = 4;
    if( clues[2] == 1)  cells[2] = 4;
    if( clues[3] == 1)  cells[3] = 4;
    if( clues[4] == 1)  cells[3] = 4;
    if( clues[5] == 1)  cells[7] = 4;
    if( clues[6] == 1) cells[11] = 4;
    if( clues[7] == 1) cells[15] = 4;
    if( clues[8] == 1) cells[15] = 4;
    if( clues[9] == 1) cells[14] = 4;
    if(clues[10] == 1) cells[13] = 4;
    if(clues[11] == 1) cells[12] = 4;
    if(clues[12] == 1) cells[12] = 4;
    if(clues[13] == 1)  cells[8] = 4;
    if(clues[14] == 1)  cells[4] = 4;
    if(clues[15] == 1)  cells[0] = 4;
}

void rcFour(int *clues, int *cells)
{
    if( clues[0] == 4)
    {
        cells[0] = 1;
        cells[4] = 2;
        cells[8] = 3;
        cells[12] = 4;
    }

    if( clues[1] == 4)
    {
        cells[1] = 1;
        cells[5] = 2;
        cells[9] = 3;
        cells[13] = 4;
    }

    if( clues[2] == 4)
    {
        cells[2] = 1;
        cells[6] = 2;
        cells[10] = 3;
        cells[14] = 4;
    }

    if( clues[3] == 4)
    {
        cells[3] = 1;
        cells[7] = 2;
        cells[11] = 3;
        cells[15] = 4;
    }

    if( clues[4] == 4)
    {
        cells[3] = 1;
        cells[2] = 2;
        cells[1] = 3;
        cells[0] = 4;
    }

    if( clues[5] == 4)
    {
        cells[7] = 1;
        cells[6] = 2;
        cells[5] = 3;
        cells[4] = 4;
    }

    if( clues[6] == 4)
    {
        cells[11] = 1;
        cells[10] = 2;
        cells[9] = 3;
        cells[8] = 4;
    }

    if( clues[7] == 4)
    {
        cells[15] = 1;
        cells[14] = 2;
        cells[13] = 3;
        cells[12] = 4;
    }

    if( clues[8] == 4)
    {
        cells[15] = 1;
        cells[11] = 2;
        cells[7] = 3;
        cells[3] = 4;
    }

    if( clues[9] == 4)
    {
        cells[14] = 1;
        cells[10] = 2;
        cells[6] = 3;
        cells[2] = 4;
    }

    if( clues[10] == 4)
    {
        cells[13] = 1;
        cells[9] = 2;
        cells[5] = 3;
        cells[1] = 4;
    }

    if( clues[11] == 4)
    {
        cells[12] = 1;
        cells[8] = 2;
        cells[4] = 3;
        cells[0] = 4;
    }

    if( clues[12] == 4)
    {
        cells[12] = 1;
        cells[13] = 2;
        cells[14] = 3;
        cells[15] = 4;
    }

    if( clues[13] == 4)
    {
        cells[8] = 1;
        cells[9] = 2;
        cells[10] = 3;
        cells[11] = 4;
    }

    if( clues[14] == 4)
    {
        cells[4] = 1;
        cells[5] = 2;
        cells[6] = 3;
        cells[7] = 4;
    }

    if( clues[15] == 4)
    {
        cells[0] = 1;
        cells[1] = 2;
        cells[2] = 3;
        cells[3] = 4;
    }
}


