#include "updopt.h"

//updOptCell
void updOptCell(int cell[][4], int p, int v0, int v1, int v2, int v3)
{
    cell[p][0] = v0;
    cell[p][1] = v1;
    cell[p][2] = v2;
    cell[p][3] = v3;
}

