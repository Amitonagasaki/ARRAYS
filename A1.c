//write the program to find sum of N natural number
int main ()
{
    int i , n , a[200], sum=0;
    printf("please type upper limit of n  = ");
    scanf("%d", &n);
    for (i=0;i<n;i++) //using loop to storing data in array a 
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("the sum of first %d natural number =%d",n,sum);
    return 0;
}
