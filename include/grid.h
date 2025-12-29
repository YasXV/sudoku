#ifndef GRID_H
#define GRID_H
#include "table.h"


typedef struct s_grid{
	a_table* matrix;
	int dimension;
}grid;

typedef grid* a_grid;

//init of a grid
a_grid init_grid();

#endif
