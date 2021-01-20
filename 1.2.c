//1.2. Write a program to input a floating number and show without decimal point
#include<stdio.h>
main(){
	float n;
	printf("enter number: "); scanf("%f",&n);
	printf("The number is %.0f",n);
}
/*enter number: 122.6543
The number is 123*/
