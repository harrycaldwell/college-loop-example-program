/*
Title: Loop Example
Date: 03-Dec-2021
Author: harry caldwell
Description: For loop example
*/

#include <stdio.h>

//For Loop procedure
int ForLoop(){
	//Define an integer
	int i=0;
	
	//For loop - Increments at the start
	for (i=1;i<5;++i)
	{
		printf("%d ",i);
		printf("Hello World!\n");
}
	}

//While loop procedure
int WhileLoop(){
	int i=0;
		
	//Condition is checked at the begining
	while (i<5){
		printf("%d ",i);
		printf("Hello World!!\n");
		++i;
		}
	}

//Do While Loop Procedure
int DoWhile(){
	int i=0;
	
	do{
		printf("%d ",i);
		printf("Hello World!\n");
		++i;
		}
	//Condition is checked at the end
	while(i<5);
	}
char menu_option;
int main(void){
	//menu section
	printf("welcome to the loop example\n");
	printf("what loop would you like to see? (use A,B,C as the inputs)\n");
	printf("a. For loop\n");
	printf("b. While loop\n");
	printf("c. Do While\n");
	scanf("%c",&menu_option);
	
	switch(menu_option){

    case 'a':
		printf("For loop\n");
        ForLoop();
        break;
		
    case 'b':
		printf("while loop\n");
        WhileLoop();
        break;
		
    case'c':
        printf("Do while\n");
        DoWhile();
        break;
}

	
	//Call procedure to do a for loop
	//ForLoop();
	//WhileLoop();
	//DoWhile();
	return 0;
}