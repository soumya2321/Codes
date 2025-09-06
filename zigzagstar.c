#include <stdio.h>
int main()
{
int n,r,k,j,i,repeat,star=5;
scanf("%d",&n);
scanf("%d",&repeat);
for(r=1;r<=repeat;r++)
{
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=i;j++)
      {
        printf(" ");
      }
       for(k=1;k<=star;k++)
       {
        printf("*");
       }
      printf("\n");
    }
    
    for(i=n;i>=1;i--)
    {
      for(j=1;j<=i;j++)
      {
        printf(" ");
      }
       for(k=1;k<=star;k++)
       {
        printf("*");
       }
      printf("\n");
    }
}
return 0;
}

