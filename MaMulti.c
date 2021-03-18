//write the program to find the multiplication of two matrix
#include<stdio.h>
int main()
{
    int a[10][10] , b[10][10], row1 , col1, row2, col2 , c[10][10];
    printf("enter the row and column of 1stmatrix = ");
    scanf("%d %d",&row1 ,&col1);
    for(int i =0;i<row1;i++)
    {
        for(int j = 0; j<col1;j++)
        {
            printf("enter the element of 1st matrix a%d%d = ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter the row and column of 2ndmatrix = ");
    scanf("%d %d",&row2 ,&col2);

    for( int i =0;i<row2;i++)
    {
        for(int j = 0; j<col2;j++)
        {
            printf("enter the element of 2nd matrix a%d%d = ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
     for( int i =0;i<row1;i++)
    {
        for(int j = 0; j<col1;j++)
        {
            printf(" a%d%d = %d",i+1,j+1,a[i][j]);
            
        }
        printf("\n");
    }
    printf("2nd matrix\n");
      for( int i =0;i<row2;i++)
    {
        for(int j = 0; j<col2;j++)
        {
         printf(" b%d%d = %d",i+1,j+1,b[i][j]);
            
        }
        printf("\n");
    }

    if(col1==row2)
    {
      for( int i =0;i<row1;i++)
    {
        for(int j = 0; j<col2;j++)
        {
         c[i][j]=0;   
            for(int k=0; k<row2;k++)
            {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];

             }
             printf("c%d%d = %d\n",i+1,j+1,c[i][j]);
        }
        //printf("\n");
    }
    
    }
    else {
        printf("mutiplication operation cannot occur on the given matrices");
    }
return 0;
}
