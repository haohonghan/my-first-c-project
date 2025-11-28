#include<stdio.h>
struct time{
	int hour;
	int min;
	int s;
}; 
int main(){
	time t;
	scanf("%d:%d:%d",&t.hour,&t.min,&t.s);
	int n;
	scanf("%d",&n);
	if(t.s+n<60){
		printf("%d:%d:%d",t.hour,t.min,t.s+n);
	}else{
		t.s=t.s+n-60;
		if(t.min+1<60){
			printf("%d:%d:%d",t.hour,t.min+1,t.s);
		}else{
			t.min=0;
			if(t.hour+1<24){
				printf("%d:%d:%d",t.hour+1,t.min,t.s);
			}else{
				t.hour=0;
				printf("%d:%d:%d",t.hour,t.min,t.s);
			}
		}
	}
	return 0;
}
