/*
odd numbers
#include<stdio.h>
int main()
{
	int i=0;
	for(i++;i<10;i++){

	printf("%d ",i);
	i++;
}
}
*/

/*
even numbers
#include<stdio.h>
int main()
{
	int i=0;
	for(i=i*3;i<10;i++){

	printf("%d ",i);
	i++;
}
}
*/

/*sumof all odd numbers and sum of all even */


/*
#include<stdio.h>
int main()
{
	int i;
	int evensum=0;
	int oddsum=0;
	for(i=0;i<=10;i++)
	{
		if(i%2==0)
		{
			evensum+=i;
			printf("sum of even numbers= %d\n",evensum);
		
		}
		else {
		oddsum+=i;
		printf("\nsum of odd numbers= %d\n",oddsum);
	}
}
	printf("total sum of even numbers= %d\n ",evensum);
	printf("total sum of odd numbers= %d\n",oddsum);
}
*/


/*
3
6
9
12
15
18
21
24
27
30
multiple of 3
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
*/
/*
square of 3
enter number30
9
36
81
144
225
324
441
576
729
900

#include<stdio.h>
int main()
{
	int i,n;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0)
		{
			printf("%d\n",i*i);
		}
	}
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			printf("5 x %d = %d \n",i,5* i);
	}
	return 0;
}
*/
/*
02 x 01 = 002
02 x 02 = 004
02 x 03 = 006
02 x 04 = 008
02 x 05 = 010
02 x 06 = 012
02 x 07 = 014
02 x 08 = 016
02 x 09 = 018
02 x 10 = 020
02 x 11 = 022
02 x 12 = 024
02 x 13 = 026
02 x 14 = 028
02 x 15 = 030
02 x 16 = 032
02 x 17 = 034
02 x 18 = 036
02 x 19 = 038
02 x 20 = 040

#include<stdio.h>
int main()
{
	int i,n=2;
	for(i=1;i<=20;i++)
	{
		printf("%02d x %02d = %03d\n",n,i,n*i);
	}
}
*/
/*
4
24
#include<stdio.h>
int main()
{ 
	int i,n,fact=1;
	scanf("%d",&n);
	if(n==1 && n==0)
	{
		return 1;
	}
	else{
	for(i=1;i<=n;i++)
	{
		fact= fact*i;
	}
}
	printf("%d\n",fact);
}
*/
#include<stdio.h>
int main()
{
	int n,num;
	int sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
		num = n%10;
		printf("%d\n",num);
		n = n/10;
	}
	return 0;
}










