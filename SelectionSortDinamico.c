#include <stdio.h>
#include <stdlib.h>
#include "filaEncadeada.h"
int changes = 0;

void enqueue(int info){
	TQueue * new = new();
	new->data = info;
}

void list(){
	printf("\n\nListando valores:\n");
	last = first;
	while (last != NULL){
		printf("%d ",last->data);
		last = last->next;
	}
}
                        
void selectionSort(TQueue * first){
	int i, temp, j;
	TQueue * current;
	TQueue * next;
	for (current = first; current->next != NULL; current = current->next){       
		for (next = current->next; next != NULL; next = next->next){ 
			if (current->data > next->data){
				changes++;
				temp = current->data;
				current->data = next->data;
				next->data = temp;
			}	
		}
	}
}



int main(int argc, char **argv){
	
	enqueue(5);
	enqueue(4);
	enqueue(3);
	enqueue(2);
	enqueue(1);
	list();
	selectionSort(first);
	list();


	return 0;
}

