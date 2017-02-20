#include<stdio.h>
#include<stdlib.h>
#include"ArrayBaseStack.h"

void StackInit(Stack *pstack){
	pstack->topIndex = -1;
}

int SIsEmpty(Stack *pstack){
	if(pstack->topIndex == -1){
		return TRUE;
	}else{
		return FALSE;
	}
}

void SPush(Stack *pstack,Data data){

	(pstack->topIndex)++;
	pstack->StackArr[pstack->topIndex] = data;
}

Data SPop(Stack *pstack){
	
	Data rIdx;

	if(SIsEmpty(pstack)){
		puts("Stack Memory Error:Data Not Exist\n");
		exit(-1);
	}

	rIdx = pstack->StackArr[pstack->topIndex];
	(pstack->topIndex)--;
	return rIdx;
}

Data SPeek(Stack *pstack){

	if(SIsEmpty(pstack)){
		puts("Stack Memory Error:Data Not Exist\n");
		exit(-1);
	}

	return pstack->StackArr[pstack->topIndex];
}








