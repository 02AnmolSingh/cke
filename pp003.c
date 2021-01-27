//pp003: Write a program to input a number and check it to be even or odd using bitwise operator.
#include<stdio.h>
main(){
	int n;
    printf("Enter a number: "); scanf("%d",&n);
    if (n&1==1)
       printf("%d is Odd",n);
    else
       printf("%d is Even",n);
}
/*Enter a number: 46
46 is Even*/
