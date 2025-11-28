#include<stdio.h>
#include<string.h>
struct yong{
	char ming[1000];
	char dian[1000];
};
int main(){
	int n;
	scanf("%d",&n);
	struct yong a[50];
	int i,j;
	for(i=0;i<n;i++){
		char b[1000],c[1000];
		scanf("%s %s",b,c);
		int blen=strlen(b);
		int clen=strlen(c);
		if(blen<=10){
			strcpy(a[i].ming,b);
	    }else{
	    	strncpy(a[i].ming,b,10);
	    	a[i].ming[10]='\0';
		}
		if(clen<=10){
			strcpy(a[i].dian,c);
	    }else{
	    	strncpy(a[i].dian,c,10);
	    	a[i].dian[10]='\0';
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(strcmp(a[j].ming,a[j+1].ming)>0){
				struct yong t;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%12s %11s",a[i].ming,a[i].dian);
		if(i != n - 1) printf("\n");
	}
	return 0;
}
