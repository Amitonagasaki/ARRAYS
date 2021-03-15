// write the algorithm to add or subtract two matrices 
int main()
{
    int i , j ,row1 , row2, col1,col2 , a[10][10],b[10][10],c[10][10]; // for arithmetic add and subtract operation we need 3  2D ARRAYS
    printf("enter rows and colunm of 1st matrix=  ");
    scanf("%d %d", &row1, &col1);
for (i = 0; i<row1;i++)
{
   for(j=0;j<col1;j++)
   {
      printf("enter the element of a%d%d = ", i+1,j+1);
      scanf("%d",&a[i][j]);
   }
}

 printf("enter rows and colunm of 2nd matrix=  ");
    scanf("%d %d", &row2, &col2);

for (i = 0; i<row2;i++)
{
   for(j=0;j<col2;j++)
   {
      printf("enter the element of a%d%d = ", i+1,j+1);
      scanf("%d",&b[i][j]);
   }
}
printf("the elements of matrices A IS =\n");
for (i = 0; i<row1;i++)
{
   for(j=0;j<col1;j++)
   {
      printf(" %d", a[i][j]);
      
   }
   printf("\n");
}

printf("the elements of matrices B IS =\n");
for (i = 0; i<row2;i++)
{
   for(j=0;j<col2;j++)
   {
      printf(" %d", b[i][j]);
      
   }
   printf("\n");
}

printf("the addtion of two matrix a and b = \n");
for (i = 0; i<row1;i++)
{
   for(j=0;j<col1;j++)
   {  

      c[i][j] = a[i][j]+b[i][j];
      printf("%d ",c[i][j]);
   }
   printf("\n");
}

return 0;
}
