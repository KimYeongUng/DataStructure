#include<stdio.h>
#include "ArrayList.h"

int main(){
	List list;
	int i;
	int data;
	int sum=0;
	ListInit(&list);

	// Data Insert
	for(i=1;i<=9;i++){
		LInsert(&list,i);
	}

	// Summation
	if(LFirst(&list,&data)){
		sum+=data;
		
		while(LNext(&list,&data)){
			sum+=data;
		}
	}
	
	printf("Summation:%d\n",sum);

	// Data Remove only multiple 2 and 3
	if(LFirst(&list,&data)){
		if(data%2==0||data%3==0){
			LRemove(&list);
		}

		while(LNext(&list,&data)){
			if(data%2==0||data%3==0){
				LRemove(&list);
			}
		}
	}
	
	printf("Remove Data multiple of 2 and 3\n");
	// Print Remain Datas
	if(LFirst(&list,&data)){
		printf("%d ",data);
	
		while(LNext(&list,&data)){
			printf("%d ",data);
		}
	}
	puts("\n");
	return 0;
}







