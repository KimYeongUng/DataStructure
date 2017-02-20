#include<stdio.h>
#include"ListBaseStack.h"

int main(void){

	Stack stack;
	StackInit(&stack);

	// Data Insert
	SPush(&stack,1); SPush(&stack,2); SPush(&stack,3); 
	SPush(&stack,4); SPush(&stack,5);

	// Pop
	while(!SIsEmpty(&stack)){
		printf("%d ",SPop(&stack));
	}

	puts("\n");

	return 0;
}
