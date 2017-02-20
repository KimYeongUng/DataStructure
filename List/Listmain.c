#include<stdio.h>
#include "ArrayList.h"


int main(void){

	List list;
	int data;
	ListInit(&list);
	
	// insert Data
	LInsert(&list,11);
	LInsert(&list,11);
	LInsert(&list,22);
	LInsert(&list,22);
	LInsert(&list,33);
	
	// print current status: Number of Data
	printf("Data Status-Number of Data:%d\n",LCount(&list));
	
	// print datas out of List
	if(LFirst(&list,&data)){
		printf("%d ",data);

		while(LNext(&list,&data)){
			printf("%d ",data);
		}
	}

	puts("\n");

	printf("Remove Data 22\n");	
	if(LFirst(&list,&data)){
		if(data == 22) LRemove(&list);
	

	while(LNext(&list,&data)){
		if(data == 22) LRemove(&list);
	}
  }

	printf("Current Number of Data:%d\n",LCount(&list));
	

	if(LFirst(&list,&data)){
		printf("%d ",data);
		while(LNext(&list,&data)){
			printf("%d ",data);
		}
	}

	puts("\n");	
	return 0;	
}









