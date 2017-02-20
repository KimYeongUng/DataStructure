#ifndef __NAMECARD_H__
#define __NAMECARD_H__

#define NAME_LEN 30
#define PHONE_LEN 30

typedef struct __namecard{
	char Name[NAME_LEN];
	char Phone[PHONE_LEN];
} NameCard;

NameCard * MakeNameCard(char *name,char *phone);
void ShowNameCardInfo(NameCard *pcard);
int NameCompare(NameCard *pcard,char *name);
void ChangePhoneNum(NameCard *pcard,char *phone);

#endif
