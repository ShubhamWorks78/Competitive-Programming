#include<stdio.h>
int val[1000][1000];
void initialise(int al,int bl){
    int i,j;
    for(i=0;i<al;i++)
        {
        for(j=0;j<bl;j++){
            val[i][j] = -1;
        }
    }
}
int ans(char a[],char b[],int al,int bl){
    if(val[al-1][bl-1]==-1){
	if(al==0 && bl!=0){
		val[al-1][bl-1] = 0;
	}
	else if(bl==0){
		while(al>0){
			if(a[al-1]<=95){
				val[al-1][bl-1] = 0;
			}
			al--;
		}
		val[al-1][bl-1] = 1;
	}
	else if(a[al-1]<95 && !(a[al-1]==b[bl-1] || a[al-1]-32==b[bl-1])){
		val[al-1][bl-1] = 0;
	}
	else if(a[al-1]==b[bl-1] || a[al-1]-32==b[bl-1]){
		val[al-1][bl-1] = ans(a,b,al-1,bl-1) || ans(a,b,al-1,bl);
	}
	else{
		val[al-1][bl-1] = ans(a,b,al-1,bl);
	}
    }
    return val[al-1][bl-1];
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char a[1000];
		char b[1000];
		scanf("%s",a);
		scanf("%s",b);
		int al = strlen(a);
		int bl = strlen(b);
        initialise(al,bl);
		int find = ans(a,b,al,bl);
		if(find==1){
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}
