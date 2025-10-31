// Write a C program that uses scanf() to take a user's name and age as input and then displays them using printf().
#include <stdio.h>
int main()
{
	// Setting Variables
	char name[50];
	int age;
	
	// Taking inputs
	printf("Please enter your name: ");
	scanf("%s",name);
	printf("Please Enter your age: ");
	scanf("%d",&age);
	
	// Printing
	printf("%s\n",name);
	printf("%d",age);
}
