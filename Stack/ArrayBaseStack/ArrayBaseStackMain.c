#include<stdio.h>
#include"ArrayBaseStack.h"

int main(void){

	Data data;
	Stack stack;
	StackInit(&stack);

	SPush(&stack,1);
	SPush(&stack,2);
	SPush(&stack,3);
	SPush(&stack,4);

	while(!SIsEmpty(&stack)){
		printf("%d ",SPop(&stack));
	}
	puts("\n");	

	return 0;
}
