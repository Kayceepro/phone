#include <stdio.h>

//function declaration
void func(void);
static int count = 5;	//global variable
int main()
{
while(count--)
	{
		func();
	}
return 0;
}
void func(void)
{
	static int i = 5;
	i++;
	printf("while i is %d count is %d \n ", i, count);
}
