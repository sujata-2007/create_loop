#include<stdio.h>
int main()
{
  int i,j,a,num=1;
  
  printf("enter the rows:");
  scanf("%d",&a);
  
   for(i=1; i<=a; i++)
   {
       for(j=1; j<=i; j++)
       {
           printf("%d",i);
           num++;
       }
       printf("\n");
   }
   return 0;
}
