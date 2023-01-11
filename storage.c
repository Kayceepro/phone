#include <stdio.h>

//function declaration
void func(void);
void nest(void);
static int count = 5;	//global variable
int main()
{
while(count--)
	{
		func();
	}

int a = 21;
int b = 10;
int c;

if (a == b)
	printf("a is eqaul to b\n");
	else
		printf("a is not equal to b \n");

	for(int a = 0; a < 10; a++)
	printf("the value of a is: %d \n", a);

	int d = 10;
	do
	{
	
	printf("the value of d is: %d \n", d);
	d++;

	}while(d < 10);

	int i,j;
	/*
	for(i=2; i<=100; i++)
	{
	for (j=2; j<=(i/j); j++)
	if(!(i%j)) break;
	if(j > (i/j)) printf("%d is a prime \n", i);
	return 0;
	}
	*/

return 0;

}

void func(void)
{
	static int i = 5;
	i++;
	printf("while i is %d count is %d \n ", i, count);


}

