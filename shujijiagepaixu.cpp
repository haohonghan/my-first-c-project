#include<stdio.h>
struct shu{
	char ming[1000];
	double jia;
};
int main(){
	shu a[10];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %lf",&a[i].ming,&a[i].jia);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j].jia>a[j+1].jia){
				shu t;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%s %.2lf\n",a[i].ming,a[i].jia);
	}
	return 0;
}
