#include<stdio.h>
#include<string.h>
int main(){
	char a[1000],b[1000],c[1000],d[1000],e[1000];
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
	scanf("%s",d);
	scanf("%s",e);
	int alen=strlen(a);
	int blen=strlen(b);
	int clen=strlen(c);
	int dlen=strlen(d);
	int elen=strlen(e);
	int x[]={alen,blen,clen,dlen,elen};
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<=4-i;j++){
			if(x[j]<x[j+1]){
				int t;
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
	if(x[0]==alen)printf("%s",a);
	if(x[0]==blen)printf("%s",b);
	if(x[0]==clen)printf("%s",c);
	if(x[0]==dlen)printf("%s",d);
	if(x[0]==elen)printf("%s",e);
	return 0;
}
