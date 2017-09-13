#include <stdio.h>
#include "pdiagram.h"

// print Block 4x4
void pb4(int *clues, int *cells)
{
    int a = 0;

    printf("\n\n\n------------------------------\n", clues);
    printf("\n\t      %d  %d  %d  %d", clues[0], clues[1], clues[2], clues[3]);

    printf("\n\t    --------------");
    printf("\n\t %d |  %d  %d  %d  %d  | %d", clues[15],  cells[0],  cells[1],  cells[2],  cells[3], clues[4]);
    printf("\n\t %d |  %d  %d  %d  %d  | %d", clues[14],  cells[4],  cells[5],  cells[6],  cells[7], clues[5]);
    printf("\n\t %d |  %d  %d  %d  %d  | %d", clues[13],  cells[8],  cells[9], cells[10], cells[11], clues[6]);
    printf("\n\t %d |  %d  %d  %d  %d  | %d", clues[12], cells[12], cells[13], cells[14], cells[15], clues[7]);
    printf("\n\t    --------------");

    printf("\n\t      %d  %d  %d  %d", clues[11], clues[10], clues[9], clues[8]);
    printf("\n\n------------------------------\n", clues);
}

// print options for each cell
void popt(int opt[][4])
{
    printf("\n================================================");

    for(int i = 0; i < 16; i++)
    {
        if(i%4 == 0) printf("\n\t");
        for(int j = 0; j < 4; j++)
            printf(" %d", opt[i][j]);

        printf("  ");
    }

    printf("\n================================================\n\n");
}

