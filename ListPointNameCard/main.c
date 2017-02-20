#include<stdio.h>
#include<stdlib.h>
#include "ArrayList.h"
#include "NameCard.h"

int main(){

	List list;
	NameCard *pCard;
	ListInit(&list);
	
	// Insert Datas
	pCard = MakeNameCard("Kim","010-2204-3200");
	LInsert(&list,pCard);

	pCard = MakeNameCard("Koh","010-9797-9737");
	LInsert(&list,pCard);

	pCard = MakeNameCard("Lee","010-8831-5678");
	LInsert(&list,pCard);
	
	// print Person's Info
	printf("Number of People:%d\n",LCount(&list));
	
	if(LFirst(&list,&pCard)){
		ShowNameCardInfo(pCard);
		
		while(LNext(&list,&pCard)){
			ShowNameCardInfo(pCard);
		}
	} 

	puts("\n");

	// Remove Koh's Data
	printf("Remove Koh's Data\n\n");
	if(LFirst(&list,&pCard)){
		if(!NameCompare(pCard,"Koh")){
			pCard = LRemove(&list);
			free(pCard);
			
		}else{
			while(LNext(&list,&pCard)){
				if(!NameCompare(pCard,"Koh")){
					pCard = LRemove(&list);
					free(pCard);
					break;
				}
			}
		}
	}

	// Change Kim's Phone Number
	printf("Change Kim's Phone Number\n\n");
	if(LFirst(&list,&pCard)){
		if(!NameCompare(pCard,"Kim")){
			ChangePhoneNum(pCard,"010-9870-6027");
		}else{
			while(LNext(&list,&pCard)){
				if(!NameCompare(pCard,"Kim")){
					ChangePhoneNum(pCard,"010-9870-6027");
					break;	
				}
			}
		}
	}

	// print Datas
	printf("Current Status of Number of People:%d\n",LCount(&list));
	if(LFirst(&list,&pCard)){
		ShowNameCardInfo(pCard);	
		
		while(LNext(&list,&pCard)){
			ShowNameCardInfo(pCard);
		}
	}

	return 0;
}








