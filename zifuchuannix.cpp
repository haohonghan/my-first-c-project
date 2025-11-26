#include<stdio.h>
//void f(char *p){
//	char *a=p;
//	int i=0;
//	while(a[i]!='\0'){
//		i++;
//	}
//	for(int j=0;j<i/2;j++){
//		b[j]=a[i-j];
//	}
//}
int main(){
	int *p;

    int st[20];
    p=st;
//    scanf("%s",st);
//    f(st);
    printf("%p\n",st+1);    
    printf("%p",p); 
}
