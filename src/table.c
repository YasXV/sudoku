#include <stdio.h>
#include <stdlib.h>
#include "table.h"


//initialisation
a_table init_table(){
	
	//creation of the table and memory allocation
	a_table my_table = (a_table)malloc(sizeof(*my_table));
	
	//checking
	if (my_table == NULL) {
        fprintf(stderr,"fail to allocate memory to a table");
        return NULL;
    	}

    //init of dimension
    my_table->dimension=3;    
    int n = my_table->dimension;
     
    //init of matrix
    my_table->matrix = (int**)malloc(n*sizeof(int*));
    for(int i=0; i<n; i++){
    	(my_table->matrix)[i] = (int*)malloc(n*sizeof(int));
    }
    
    //checking if the matrix is allocated safely
	if (my_table->matrix == NULL) {
        fprintf(stderr,"fail to allocate memory to the matrix of a table");
        return NULL;
    	}
    	
    //filled with '0' for initialisation
    for(int i=0; i<n; i++){
    	for(int j=0; j<n; j++){
    		my_table->matrix[i][j]=0;
    	}
	}   
    //return the table
    return my_table;
}


void display_line(a_table table, int i){
	for(int j=0; j<table->dimension; j++){
		if(j==0){printf("|");}
			printf(" %i |",table->matrix[i][j]);
	}
}

//display
void display(a_table table){
	for(int i=0; i<table->dimension;i++){
		//for the first line
		if(i==0){
			for(int l=0;l<(4*table->dimension)+1;l++){
				printf("-");
			}
			printf("\n");
		}
		for(int j = 0; j< table->dimension; j++){
			//for the first column
			if(j==0){printf("|");}
			printf(" %i |",table->matrix[i][j]);
		}
		printf("\n");
		for(int l=0;l<(4*table->dimension)+1;l++){
			printf("-");
		}
		printf("\n");	
	}
}

//niveau -> paramétre , efface x % en fonction de la diifculté
