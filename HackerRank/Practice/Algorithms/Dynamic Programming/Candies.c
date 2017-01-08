#include<stdio.h>
void candies(int a[],int n)
{
    int b[n];
    b[0] = 1;
    long long int i,min = 1,ans = 0;
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            min += 1;
            b[i] = min;
        }
        else
        {
            min = 1;
            b[i] = min;
        }
    }
    int c[n];
    c[n-1] = 1;
    for(i=n-2;i>=0;i--)
    {
        if(a[i]>a[i+1])
        {
            min += 1;
            c[i] = min;
        }
        else
        {
            min = 1;
            c[i] = min;
        }
    }
    for(i=0;i<n;i++)
    {
        if(b[i]<c[i])
            ans += c[i];
        else
            ans += b[i];
    }
    printf("%llu\n",ans);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    candies(a,n);
}

