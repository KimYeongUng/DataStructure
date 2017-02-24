#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include"ListBaseStack.h"

int GetOpPrec(char op){
	
	switch(op){
		case '*':
		case '/':
			return 5;
		case '+':
		case '-':
			return 3;
		case '(':
			return 1;
	}
		
	return -1;
}

int WhoPrecOp(char op1,char op2){
	
	int op1Prec = GetOpPrec(op1);
	int op2Prec = GetOpPrec(op2);

	if(op1Prec > op2Prec){

		return 1;

	}else if(op1Prec < op2Prec){

		return -1;

	}else{

		return 0;

	}
}

void ConvToRPNExp(char exp[]){
	
	Stack stack;
	int expLen = strlen(exp);
	printf("%d\n",expLen);
	char *convExp = (char*)malloc(expLen+1); // memory that  contain after convert

	int i,idx=0;
	char tok,popOp;

	memset(convExp,0,sizeof(char)*expLen+1); // initialize convExp 0
	StackInit(&stack);

	for(i=0;i<expLen;i++){

		tok = exp[i]; // save exp[i] to tok
		
		if(isdigit(tok)){ // if tok is digit
			
			convExp[idx++] = tok; // save to convExp
		}else{ // if tok is not a digit

			switch(tok){
				
				case '(': // if '(' token
					SPush(&stack,tok); // save '('  to stack
					break;

				case ')': // if ')' token 
					while(1){
						printf("Spop in case ) in whileLoop\n"); 
						popOp = SPop(&stack); // Pop

						if(popOp == '(') // if opoOp is '('
							break;
						convExp[idx++] = popOp; // save '(' to convExp
					}
					break;

				case '+': case '-':
				case '*': case '/':
					while(!SIsEmpty(&stack) && WhoPrecOp(Speek(&stack),tok) >= 0){
						printf("Spop in case +-*/ in whileLoop\n");
						convExp[idx++] = SPop(&stack);
					}
			
					SPush(&stack,tok);
					break;				
			}

		}	
	}
	
	// move data from stack to convExp 
	while(!SIsEmpty(&stack))
		convExp[idx++] = SPop(&stack);

	strcpy(exp,convExp); // copy convExp to exp
	free(convExp); // terminate convExp
	
}











