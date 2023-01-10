#include <stdio.h>


//declaring variables
extern int a, b;
extern int c;
extern float f;
int func();


int main ()
{
	/*print hello world*/
	printf("hello world\n");
	
	/*define a variable and print*/
	int age = 21;
	

	/*print out*/
	printf("my name is Kelechi and i am %d", age);
	printf("years old\n");

	printf("storage size for int: %d \n", sizeof(int));


	//variable definitions
	int a, b;
	int c;
	float f;

	//actual initialization
	a = 10;
	b = 2;
	c = a + b;
	f = 4.10 + 3.70;
	
	//print
	printf("the value of c : %d \n", c);
	printf("the value of f : %.2f \n", f);
	
	//function call
	int i = func();
	
	return 0;
}

//function definition
int func()
{
	
	return 0;
}
