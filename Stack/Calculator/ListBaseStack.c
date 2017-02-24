#include<stdio.h>
#include<stdlib.h>
#include"ListBaseStack.h"

void StackInit(Stack *pstack){
	pstack->head = NULL;
}

int SIsEmpty(Stack *pstack){

	if(pstack->head == NULL){
		return TRUE;
	}else{
		return FALSE;
	}
}

void SPush(Stack *pstack,Data data){
	
	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	
	newNode->next = pstack->head;

	pstack->head = newNode;
	
}

Data SPop(Stack *pstack){
	
	if(SIsEmpty(pstack)){
		puts("Stack Memory Error:Stack Empty-in location SPop\n");
		exit(-1);
	}

	Data rdata;
	Node *rnode;

	rdata = pstack->head->data;
	rnode = pstack->head;

	pstack->head = pstack->head->next;
	free(rnode);

	return rdata;
}

Data Speek(Stack *pstack){
	
	if(SIsEmpty(pstack)){
		puts("Stack Error in location Speek\n");
		exit(-1);
	}

	return pstack->head->data;
}





