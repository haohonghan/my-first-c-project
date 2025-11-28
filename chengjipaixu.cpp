#include<stdio.h>
struct stu{
	char ming[100];
	int fen;
};
int main(){
	int n;
	stu a[50];
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++){
		scanf("%s %d",&a[i].ming,&a[i].fen);
	}
	for(k=0;k<n;k++){
		for(j=0;j<n-k-1;j++){
			if(a[j].fen<a[j+1].fen){
				stu t;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%15s %5d\n",a[i].ming,a[i].fen);
	}
	return 0;
}
