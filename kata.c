//# codewars
//Codewars kata sources

//------------------------------------------------
//dnf install xclip
//eval "$(ssh-agent -s)"
//ssh-add /home/xtemp/.ssh/id_rsa
//xclip -sel clip < /home/xtemp/.ssh/id_rsa.pub

//------------------------------------------------
//git clone git@github.com:hslima-mp/codewars.git


#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#include "pdiagram.h"
#include "checking.h"
#include "runcell.h"
//#include "updopt.h"


int** SolvePuzzle(int *clues)
{

    return 0;
}

int equal(int **puzzle, int expected[4][4])
{
    if(!puzzle || !expected) return 0;

    for(int i = 0; i < 4; ++i)
        if(memcmp (puzzle[i], expected[i], 4*sizeof (int))) return 0;

    return 1;
}


int main()
{
    static int clues[][16] =
    {
        { 2, 2, 1, 3, 2, 2, 3, 1, 1, 2, 2, 3, 3, 2, 1, 3 },
        { 0, 0, 1, 2, 0, 2, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0 }
    };

    int outcomes[][4][4] =
    {
        { { 1, 3, 4, 2 }, { 4, 2, 1, 3 }, { 3, 4, 2, 1 }, { 2, 1, 3, 4 } },
        { { 2, 1, 4, 3 }, { 3, 4, 1, 2 }, { 4, 2, 3, 1 }, { 1, 3, 2, 4 } }
    };

    int cells[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    int opt[][4] = 
    {
        { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 },
        { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 },
        { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 },
        { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 },
        { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 },
        { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 },
        { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 },
        { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 },
        { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 },
        { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 },
        { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 },
        { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 },
        { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 },
        { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 },
        { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 },
        { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 }
    };

    pb4(clues[0], cells);
    printf("+equal: %d\t bcheck: %d\n", equal(SolvePuzzle(clues[0]), outcomes[0]), bcheck(cells));
    printf("------------------------------\n\n");

    rcOne(clues[0], cells, opt);
    rcFour(clues[0], cells);
    pb4(clues[0], cells);
    printf("+equal: %d\t bcheck: %d\n", equal(SolvePuzzle(clues[0]), outcomes[0]), bcheck(cells));
    printf("------------------------------\n\n");

    popt(opt);

    //pb4(clues[1], cells);
    //printf("+S1: %d\n------------------------------\n\n", equal(SolvePuzzle(clues[1]), outcomes[1]));


    return 0;
}
