#include<stdio.h>
struct peng{
	char s[1000];
	int sheng;
	char dian[1000];
};
int main(){
	printf("Input n:");
	int n;
	scanf("%d",&n);
	struct peng a[10];
	int i,j;
	for(i=0;i<n;i++){
		printf("Input the name,birthday,number of the %d friend:",i+1);
		scanf("%s %d %s",a[i].s,&a[i].sheng,&a[i].dian);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j].sheng>a[j+1].sheng){
				struct peng t;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s %d %s",a[i].s,a[i].sheng,a[i].dian);
		if(i!=n-1)printf("\n");
	}
	return 0;
}
