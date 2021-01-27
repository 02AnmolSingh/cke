//pp005: Write a program to input two numbers and print all even numbers in given range.
#include<stdio.h>
main(){
	int a,b,i;
	printf("Enter the lower limit: "); scanf("%d",&a);
	printf("Enter the upper limit: "); scanf("%d",&b);
	printf("Even numbers in thegiven range are: \n");
	for(i=a;i<=b;i++){
		if(i%2==0)
		   printf("%d\n",i);
	}
}

/*Enter the lower limit: 2
Enter the upper limit: 28
Even numbers in thegiven range are:
2
4
6
8
10
12
14
16
18
20
22
24
26
28*/
