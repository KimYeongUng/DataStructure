#include<stdio.h>
#include"DBLinkedList.h"

int main(void){

	List list;
	int data;
	ListInit(&list);

	// Data Insert
	LInsert(&list,1); LInsert(&list,2);
	LInsert(&list,3); LInsert(&list,4);
	LInsert(&list,5); LInsert(&list,6);

	// Print Data
	if(LFirst(&list,&data)){
		printf("%d ",data);

		while(LNext(&list,&data)){
			printf("%d ",data);
		}

		while(LPrevious(&list,&data)){
			printf("%d ",data);
		}

		puts("\n");
	}

	return 0;
}
