//pp001: Write a program to input a number and check it to be even or odd using if statement.
#include<stdio.h>
main(){
	int n;
	printf("Enter a number: "); scanf("%d",&n);
	if(n%2==0)
	   printf("%d is even",n);
	else
	   printf("%d is odd",n);
}

/*Enter a number: 28
28 is even*/
