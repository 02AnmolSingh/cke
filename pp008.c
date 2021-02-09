// Write a program to input few numbers from command line and print all even numbers from given set of numbers.
#include<stdio.h>
#include<stdlib.h>
main(int argc,char *argv[])

{   if(argc==1)
    {
    printf("syntax is pp008 <numbers>");
    exit(1);
}
    
	int i;
	for(i=1;i<argc;i++)
	   {
	   	if(atoi(argv[i])%2==0)
		    printf("%d ",atoi(argv[i]));
	   }
}
