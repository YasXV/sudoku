#ifndef UTILS_H
#define UTILS_H


//pick a random number among a int*
typedef struct s_list{
	int size;
	int* content;
	int* picked;
}sudoku_list

typedef sudoku_list* a_list;

//init of the lists, memory assignement
a_list init_list(int n);

//picks a random number in the list. Deletes the number in the list and puts it in the picked list so that we can a history of the numbers picked 
int pick_random(a_list ze_list);





#endif
