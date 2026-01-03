#include <stdlib.h>
#include <stdio.h>
#include "grid.h"
#include "table.h"
#include <time.h>



a_grid init_grid(){
//creation of the sudoku grid and memory allocation
	a_grid my_grid = (a_grid)malloc(sizeof(*my_grid));
	
	//checking
	if (my_grid == NULL) {
        fprintf(stderr,"fail to allocate memory to a sudoku grid");
        return NULL;
    	}
     
    //init of dimension
    my_grid->dimension=3;    
    int n = my_grid->dimension;
    
    //init of matrix
    my_grid->matrix = malloc(n*sizeof(a_table*));
    //checking if the matrix is allocated safely
	if (my_grid->matrix == NULL) {
        fprintf(stderr,"fail to allocate memory to the matrix of a sudoku grid");
        return NULL;
    	}
    	for(int i=0; i<n; i++){
    		(my_grid->matrix)[i] = malloc(n*sizeof(*my_grid->matrix[i]));
    	}
    
    //checking if the matrix is allocated safely
	if (my_grid->matrix == NULL) {
        fprintf(stderr,"fail to allocate memory to the matrix of a sudoku grid");
        return NULL;
    	}
    	
	// initialisation of each table of the grid
	for(int i =0; i<n; i++ ){
		for(int j = 0; j<n; j++){
			a_table ze_table = init_table();
			my_grid->matrix[i][j]=ze_table;
		}
	}
	
	//return the result
	return my_grid;
    }
    
//=============================================================================================    
void display_grid(a_grid my_grid){
	for(int i = 0; i < my_grid->dimension; i++){
		if(i==0){
				for(int l=0;l<3*((4*my_grid->dimension)+1);l++){
					printf("-");
				}
				printf("\n");
			}
		for(int g = 0; g < my_grid->dimension; g++){		
			for(int j =0; j<my_grid->dimension; j++){
				display_line(my_grid->matrix[i][j], g);
				}
			printf("\n");
			for(int l=0;l<3*((4*my_grid->dimension)+1);l++){
					printf("-");
				}
				printf("\n");	
		}
		/*if(i!=my_grid->dimension-1){
			for(int l=0;l<3*((4*my_grid->dimension)+1);l++){
						printf("-");
					}
			printf("\n");
		}*/
	}
}

//=============================================================================================
/*void fill_grid(a_grid grid){
	




}*/
