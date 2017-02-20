#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "NameCard.h"

NameCard * MakeNameCard(char *name,char *phone){
	NameCard *newCard;
	newCard = (NameCard*)malloc(sizeof(NameCard));
	strcpy(newCard->Name,name);
	strcpy(newCard->Phone,phone);
	return newCard;
}

void ShowNameCardInfo(NameCard *pcard){
	printf("Name:%s PhoneNumber:%s\n",pcard->Name,pcard->Phone);
}

int NameCompare(NameCard *pcard,char *name){
	return strcmp(pcard->Name,name);
}

void ChangePhoneNum(NameCard *pcard,char *phone){
	strcpy(pcard->Phone,phone);
}
