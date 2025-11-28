#include<stdio.h>
struct shu{
	char name[1000];
	double jia;
};
int main(){
	int n;
	scanf("%d",&n);
	struct shu a[10];
	for(int i=0;i<n;i++){
		scanf("%s %lf",a[i].name,&a[i].jia);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j].jia>a[j+1].jia){
				struct shu t;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("%.2lf,%s\n",a[0].jia,a[0].name);
	printf("%.2lf,%s",a[n-1].jia,a[n-1].name);
	return 0;
}
