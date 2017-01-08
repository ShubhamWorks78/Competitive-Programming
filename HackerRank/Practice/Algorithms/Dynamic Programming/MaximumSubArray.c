#include<stdio.h>
#include<stdio.h>
int greatest(int a[],int n)
{
    int max = a[0],i;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max = a[i];
    }
    return max;
}
int check(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            return 0;
        }
    }
    return 1;
}
int findMax(int a[],int n)
{
    int i;
    int max_here = 0,max_so_far = 0;
    if(check(a,n))
    {
        max_so_far = greatest(a,n);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            max_here = max_here+a[i];
            if(max_here<0)
                max_here = 0;
            if(max_here>max_so_far)
                max_so_far = max_here;
        }
    }
    return max_so_far;
}
int findNon(int a[],int n)
{
    int i,max_here = 0;
    if(check(a,n))
    {
        max_here = greatest(a,n);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>=0)
                max_here += a[i];
        }
    }
    return max_here;
}
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t>0)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int max = findMax(a,n);
        int max_ca = findNon(a,n);
        printf("%d %d\n",max,max_ca);
        t--;
    }
}

