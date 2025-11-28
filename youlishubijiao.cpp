#include<stdio.h>
struct bijiao{
	int fenzi;
	int fenmu;
	double zhi;
};
    struct bijiao a;
	struct bijiao b;
int CompareRational(struct bijiao a,struct bijiao b);
int main(){
	scanf("%d/%d %d/%d",&a.fenzi,&a.fenmu,&b.fenzi,&b.fenmu);
	a.zhi=(double)a.fenzi/a.fenmu;
	b.zhi=(double)b.fenzi/b.fenmu;
	CompareRational(a,b);
	return 0;
}
int CompareRational(struct bijiao a,struct bijiao b){
	if(a.zhi==b.zhi)printf("%d/%d=%d/%d",a.fenzi,a.fenmu,b.fenzi,b.fenmu);
	if(a.zhi<b.zhi)printf("%d/%d<%d/%d",a.fenzi,a.fenmu,b.fenzi,b.fenmu);
	if(a.zhi>b.zhi)printf("%d/%d>%d/%d",a.fenzi,a.fenmu,b.fenzi,b.fenmu);
	return 0;
}
