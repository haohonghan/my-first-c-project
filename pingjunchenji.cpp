#include<stdio.h>
struct stu{
	int id;
	char name[1000];
	int fen;
};
int main(){
	int n;
	struct stu a[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %s %d",&a[i].id,a[i].name,&a[i].fen);
	}
	double sum=0.0;
	for(int i=0;i<n;i++){
		sum=sum+(double)a[i].fen;
	}
	printf("%.2lf",sum/n);
	return 0;
}
