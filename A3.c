//write the program to find the trace of matrix 
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10][10] , row1 , col1 , tr=0;
printf("enter the row and column =  ");
scanf("%d %d",&row1,&col1);
for(int i = 0;i<row1;i++)
{
    for(int j = 0;j<col1;j++)
    {
        printf("enter the element of the matrix a%d%d =",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
}

for(int i = 0;i<row1;i++)
{
    for(int j = 0;j<col1;j++)
    {
        printf(" a%d%d =%d ",i+1,j+1,a[i][j]);

    }
    printf("\n");

}

for(int i = 0;i<row1;i++)
{
    for(int j = 0;j<col1;j++)
    {
        if(i==j)
        {
            tr+=a[i][j];
        }
    }
}
printf("the trace of matrix a = %d",tr);
return 0;
}
