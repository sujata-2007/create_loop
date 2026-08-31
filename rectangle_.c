#include<stdio.h>
int main()
{
    int i,j,rows,columns;
    printf("enter the rows:");
    scanf("%d",&rows);
    printf("enter the columns:");
    scanf("%d",&columns);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=columns ; j++)
    {
    printf("*");
    }
    printf("\n");
    }
  return 0;  
}
