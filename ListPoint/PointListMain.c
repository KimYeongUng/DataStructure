#include<stdio.h>
#include<stdlib.h>
#include "ArrayList.h"
#include "Point.h"

int main(){

	List list;
	Point compos;
	Point *ppos;

	ListInit(&list);

	// Save 4 Datas 
	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos,2,1);
	LInsert(&list,ppos);
	
	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos,2,2);
	LInsert(&list,ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos,3,1);
	LInsert(&list,ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos,3,2);
	LInsert(&list,ppos);

	printf("current number of Datas:%d\n",LCount(&list));

	if(LFirst(&list,&ppos)){
		ShowPointPos(ppos);
		
		while(LNext(&list,&ppos)){
			ShowPointPos(ppos);
		}
	}

	// Remove all datas that have xpos is 2
	compos.xpos = 2;
	compos.ypos = 0;

	if(LFirst(&list,&ppos)){
		if(PointComp(ppos,&compos) == 1){
			ppos = LRemove(&list);
			free(ppos);
		}
	
		while(LNext(&list,&ppos)){
			if(PointComp(ppos,&compos) ==1){
				ppos = LRemove(&list);
				free(ppos);
			}
		}
	}

	
	printf("Print Datas after Remove xpos 2\n");

	if(LFirst(&list,&ppos)){
		ShowPointPos(ppos);
		
		while(LNext(&list,&ppos)){
			ShowPointPos(ppos);
		}
	}

	return 0;
}













