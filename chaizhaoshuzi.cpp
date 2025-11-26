#include<stdio.h>
void printArray(int a[],int n){
    for(int i=0;i<n;i++)
        printf("%2d ",a[i]);
    printf("\n");
}
void setArray(int a[],int n){
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int search(int a[],int n,int x){
	int found=0;
	int i;
	for(i=0;i<n;i++){
		if(a[i]==x){
			found=1;
			break;
		}
	}
	if(!found){
		return -1;
	}else{
		return i;
	}
}
int main(){
    int a[10],n,r,x;
    scanf("%d",&n);
    setArray(a,n);
    scanf("%d",&x);
    r=search(a,n,x);
    if(r>=0)
        printf("%d\n",r);
    else
        printf("Not found\n");    
}
