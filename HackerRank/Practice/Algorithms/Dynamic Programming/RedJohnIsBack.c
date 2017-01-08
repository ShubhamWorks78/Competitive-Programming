#include<stdio.h>
int no_of_prime(int n)
{
    int b[n+1],i,j;
    for(i=0;i<=n;i++)
        b[i] = 1;
    for(i=2;i<=n;i++)
    {
        if(b[i])
        {
            for(j=2*i;j<=n;j+=i)
            {
                b[j] = 0;
            }
        }
    }
    int ans = 0;
    for(i=2;i<=n;i++)
    {
        if(b[i]!=0)
            ans += 1;
    }
    return ans;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n;
        scanf("%d",&n);
        int a[n+1],i;
        for(i=0;i<=n;i++)
        {
            if(i<4)
                a[i] = 1;
            else
                a[i] = a[i-4]+a[i-1];
        }
        int p = a[n];
        int no = no_of_prime(p);
        printf("%d\n",no);
        t--;
    }
    return 0;
}

