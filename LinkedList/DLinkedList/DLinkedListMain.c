#include<stdio.h>
#include"DLinkedList.h"

int WhoIsPrecede(int d1,int d2){
	
	if(d1<d2){
		return 0;	
	}else{
		return 1;
	}
}

int main(){

	List list;
	int data;
	ListInit(&list);

	SetSortRule(&list,WhoIsPrecede);

	LInsert(&list,11); LInsert(&list,22); LInsert(&list,33);
	LInsert(&list,44); LInsert(&list,55);

	printf("Current List Status-Number Of Data:%d\n",LCount(&list));

	if(LFirst(&list,&data)){
		printf("%d ",data);
		
		while(LNext(&list,&data)){
			printf("%d ",data);
		}
	}

	puts("\n\n");

	// Search number 22 and remove 
	if(LFirst(&list,&data)){
		if(data == 22){
			LRemove(&list);
		}

		while(LNext(&list,&data)){
			if(data == 22){
				LRemove(&list);	
			}
		}
	}


	// Print after Remove data 22
	printf("Print Data after remove data 22\n");
	
	if(LFirst(&list,&data)){
		printf("%d ",data);
	
		while(LNext(&list,&data)){
			printf("%d ",data);
		}
	
	}	
	
	puts("\n");	

	return 0;	
}
