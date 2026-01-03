#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <table.h>
#include <grid.h>


int main(){
	srand(time(NULL));
	printf("teeeeeeeeeeeeeest");
	a_table un_test = init_table();
	a_grid one_grid = init_grid();
	printf("\n");
	display_grid(one_grid);
	return 0;

}
