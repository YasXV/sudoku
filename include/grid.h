#ifndef GRID_H
#define GRID_H
#include "table.h"


typedef struct s_grid{
	a_table **matrix;
	int dimension;
}grid;

typedef grid* a_grid;

//init of a grid
a_grid init_grid();


//display_sudoku
void display_grid(a_grid my_grid);

//fill a grid
void fill_grid(a_grid grid);
#endif
