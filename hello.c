#include<stdio.h>


void f()
{
	printf("%s\n", "func");
	printf("%s\n", "func");
}

int main()
{

	int d;
	scanf("%d",&d);
	//hello world bla
	/*
	printf("%s\n", "hello");
	printf("%s\n", "hello");
	printf("%s\n", "hello");
	printf("%s\n", "hello");
	*/
	f();
	printf("%s\n %d", "hello", d);
	return 0;
}


