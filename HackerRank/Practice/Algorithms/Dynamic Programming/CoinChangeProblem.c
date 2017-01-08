#include<stdio.h>
unsigned long long int count(int s[],int m,int n)
{
    unsigned long long int tab[n+1][m+1];
    int i,j;
    unsigned long long int x,y;
    tab[0][0] = 0;
    for(i=1;i<=m;i++)
        tab[0][i] = 1;
    for(i=1;i<=n;i++)
        tab[i][0] = 0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if((i-s[j-1])>=0)
                x = tab[i-s[j-1]][j];
            else
                x = 0;
            if(j>=2)
                y = tab[i][j-1];
            else
                y = 0;
            tab[i][j] = x+y;
        }
    }
    return tab[n][m];
}
void swap(int *a,int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int partition(int s[],int l,int h)
{
    int i = l-1;
    int j;
    int pivot = s[h];
    for(j=l;j<h;j++)
    {
        if(s[j]<pivot)
        {
            i++;
            swap(&s[i],&s[j]);
        }
    }
    swap(&s[i+1],&s[h]);
    return i+1;
}
void quickSort(int s[],int l,int h)
{
    if(l<h)
    {
        int p = partition(s,l,h);
        quickSort(s,l,p-1);
        quickSort(s,p+1,h);
    }
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int i,s[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&s[i]);
    }
    quickSort(s,0,m-1);
    unsigned long long int ans = count(s,m,n);
    printf("%llu",ans);
}

