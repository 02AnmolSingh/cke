//Write a program to input numbers from user till 0 is pressed and check every given number to be even or odd.
#include<stdio.h>
main()
{
	int n;
	
	for(;;)
	{
		printf("Enter the number : ");
		scanf("%d",&n);
		if(n!=0)
	    	n%2?printf("%d is odd\n",n):printf("%d is even\n",n);
                else break;	
		
}
}
