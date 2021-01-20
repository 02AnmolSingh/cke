//1.5. Write a program to input an octal number and print into decimal, octal and hexa decimal
#include<stdio.h>
main(){
	int n;
	printf("Enter a number: "); scanf("%o",&n);
	printf("The number in decimal is %d",n);
	printf("\nThe number in octal is %o",n);
	printf("\nThe number in hexadecimal is %x",n);
}
/*Enter a number: 55
The number in decimal is 45
The number in octal is 55
The number in hexadecimal is 2d*/
