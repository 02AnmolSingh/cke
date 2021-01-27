//pp004: Write a program to input a number and check it to be even or odd without using any arithmetic, relational, logical or bitwise operator.
#include<stdio.h>
struct Check{
	unsigned num:1;
};
main(){
	unsigned num;
	struct Check c;
	printf("Enter a number: "); scanf("%d",&num);
	c.num=num;
	if(c.num)
	   printf("%d is Odd",num);
	else
	   printf("%d is even",num);
}

/*Enter a number: 27
27 is Odd*/
