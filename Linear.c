//write the program to search the an element in array  i.e Linear search 
#include<stdio.h>
int main (){
    int a[20] , g , b;
    printf("enter the range of the array = ");
    scanf("%d",&g);
    for(int i =0;i<g;i++){
        printf("enter the %d element of array = ",i);
        scanf("%d",&a[i]);
    }
     for(int i =0;i<g;i++){
        printf(" %d =%d\n",i,a[i]);
    }
    printf("enter the element that you want find = ");
    scanf("%d",&b);
     for(int i =0;i<g;i++){
        if(b==a[i])
        {
            printf("the required elemnet found in %d = %d",i,b);
        }
    }
    
return 0;
}
