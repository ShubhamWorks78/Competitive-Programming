#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
   int app,ban,per;
   scanf("%d %d %d",&app,&ban,&per);
   int aapp,aban,aper;
   scanf("%d %d %d",&aapp,&aban,&aper);
	int i,j,k;
	int price,ans;
	scanf("%d",&price);
	for(i=0;i<=aapp;i++){
		for(j=0;j<=aban;j++){
			for(k=0;k<=aper;k++){
				if(i*app+j*ban+k*per<=price){
					ans = i+j+k;	
				}
			}
		}
	}
	printf("%d",ans);
    return 0;
}

