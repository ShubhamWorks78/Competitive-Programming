#include <stdio.h>
int BinarySearch(int a[],int st,int en,int ch){
	while(st<=en){
		int mid = st+(en-st)/2;
		if(a[mid]>ch){
			en = mid-1;
		}
		else if(a[mid]<ch){
			st = mid+1;
		}
		else
		{
			return mid+1;
		}
	}
	return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
    }
    int m;
    while(m--){
    	int k;
    	scanf("%d",&k);
    	int rnk = BinarySearch(a,0,n-1,k);
    	printf("%d\n",rnk);
    }
    return 0;
}

