#include<stdio.h>
#include "PostCalculator.h"

int main(){

	char PostExp[] = "42*8+";
	char PostExp1[] = "123+*4/";

	printf("%s = %d\n",PostExp,EvalRPNExp(PostExp));
	printf("%s = %d\n",PostExp1,EvalRPNExp(PostExp1));

	return 0;

}
