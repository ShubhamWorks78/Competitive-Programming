#include<stdio.h>
int main(){
	int n;
	int a[5];
	int i,m=1;
	for(i=0;i<5;i++){
		a[i] = 1;
	}
	scanf("%d",&n);
	while(n--){
		int t;
		scanf("%d",&t);
		char ch[7];
		scanf("%s",ch);
		int b[t];
		for(i=0;i<t;i++){
			int k;
			scanf("%d",&k);
			if(a[k-1]==m){
				a[k-1] = m+1;
			}
		}
		m += 1;
	}
	for(i=0;i<5;i++){
		if(a[i]==m){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}
