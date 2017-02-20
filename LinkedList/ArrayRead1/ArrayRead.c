#include<stdio.h>
#include<stdlib.h>

typedef struct _node {
	int data;
	struct _node * next;
} Node;

int main(){

	Node * head = NULL;
	Node * tail = NULL;
	Node * cur = NULL;

	Node *newNode = NULL;
	int readData;
	
	// Data Insert
	while(1){
		printf("Input Number: ");
		scanf("%d",&readData);
		
		if(readData<1) break;
		
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;
		
		if(head == NULL){
			head = newNode;
		}else{
			tail->next = newNode;
		}
		
		tail = newNode;

	}
	
	// Print Data
	printf("Print All Datas\n");
	if(head == NULL){
		printf("Data Not Exists\n");
	}else{
		cur = head;
		printf("%d ",cur->data);

		while(cur->next!=NULL){
			cur = cur->next;
			printf("%d ",cur->data);
		}
	}
	
	puts("\n");

	// Free(Delete) Data
	printf("Remove all Datas\n");
	if(head == NULL){
		printf("Data Not Exists!\n");
		return 0;
	}else{
		Node *delNode;
		Node *delNextNode;
		
		delNode = head;
		delNextNode = head->next;
		
		printf("Remove %d Data\n",head->data);
		free(delNode);

		while(delNextNode !=NULL){
			delNode = delNextNode;
			delNextNode = delNextNode->next;
		
			printf("Remove %d Data\n",delNode->data);
			free(delNode);
		}
	}

	return 0;
	
}













