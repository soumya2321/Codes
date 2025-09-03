#include <stdio.h>
int main()
{
   int j,i;
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=5;j++)
       {
           //if(i==1 || j==1 || i==5 || j==5) print O
           //if(i==1 || j==1 || i==5) prints C
           //if(i==1 || j==1)prints 1row and column
           //if(i==1 || j==1 || i==5 || i==3) prints E
           //if(i==1 || j==1 || j==5) prints n
           //if(i==1 || j==1 || j==5 || i==3) prints A
           //if( j==1 || j==5 || i==3)prints H
           //if(i==1 || i==j || i==5)prints z mirror image
           // if(i==j  || i+j ==6 ) prints x
           //if(i==j && i<=3||i+j==6)prints y
           //if(i==j && i<=3||i+j==6 && i<=3||j==3 && i>=3)prints Y
           //if(i==1 || j==1 || i==5 || j==5 ||i==4&&j==3||i==5&&j==5)prints Q
           //if(i==1 ||j==1 ||i==3||j==5&&i<=3||i==4&&j==3||i==5&&j==5)prints R
           //if (i == 1 || i == 3 || i == 5 || (i < 3 && j ==1) || (i > 3 && j == 5))prints S
           //if(j==1 || i==5  || j==5)prints U 
           //if (j == 1 || j == 5 || (i == j && i <= 3) || (i + j == 5 && i <= 3))prints M
           
           {
           printf("*");
           }
           else printf(" ");
       }
       printf("\n");
   }

    return 0;
}
