#include <stdio.h>
#include <stdlib.h>
#include "Information.h"

int main(){

	Person person;
	printf("please input your name: ");
	scanf_s("%s", &person.name, 8);

	printf("please input your gender<0 for woman, 1 for man>: " );
	scanf_s("%d", &person.gender);

	printf("please input your age: ");
	scanf_s("%d", &person.age);

	printf("Hi %s\n ", person.name);

	if (person.gender == 0)
		printf("You are %d-year-old woman.\n ", person.age);
	else
		printf("You are %d-year-old man.\n ", person.age);
	system("pause");
	

}