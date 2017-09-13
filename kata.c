//# codewars
//Codewars kata sources

//------------------------------------------------
//dnf install xclip
//eval "$(ssh-agent -s)"
//ssh-add /home/xtemp/.ssh/id_rsa
//xclip -sel clip < /home/xtemp/.ssh/id_rsa.pub

//------------------------------------------------
//git clone git@github.com:hslima-mp/codewars.git




#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

void pblock(int *clues)
{
    printf("\n", clues);
}


int** SolvePuzzle(int *clues)
{

    return 0;
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



    return 0;
}



int equal(int **puzzle, int expected[4][4])
{
    if(!puzzle || !expected) return 0;
    
    for(int i = 0; i < 4; ++i)
        if(memcmp (puzzle[i], expected[i], 4*sizeof (int))) return 0;

    return 1;
}

Test(_4_by_4_skyscrapers, should_pass_all_the_tests_provided)
{
    cr_assert (equal (SolvePuzzle (clues[0]), outcomes[0]));
    cr_assert (equal (SolvePuzzle (clues[1]), outcomes[1]));
}
