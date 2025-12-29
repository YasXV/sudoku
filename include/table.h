#ifndef TABLE_H
#define TABLE_H


//the table structure 
typedef struct s_table {
	int **matrix;
	int dimension;
}table;


//defines a pointer to a table 
typedef table* a_table;

//initialisation (always between 1 and 9 the numbers on a table , so matrix  3x3
a_table init_table();

//fill the table with random numbers beetween 1 and 9
void fill(a_table table); 

//display th table on the terminal
void display(a_table table);


#endif
