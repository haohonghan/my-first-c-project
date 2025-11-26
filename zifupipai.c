#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char mainStr[1000];
	char subStr[100];
	scanf("%s",mainStr);
	scanf("%s",subStr);
	int mainlen=strlen(mainStr);
	int sublen=strlen(subStr);
	if(sublen>mainlen){
		printf("-1\n");
		return 0;
	}
	int found =0;
	int first =1;
	int i,j;
	for(i=0;i<=mainlen-sublen;i++){
		int match=1;
		for(j=0;j<sublen;j++){
			if(tolower(mainStr[i+j])!=tolower(subStr[j])){
				match=0;
				break;
			}
		}
		if(match){
			printf("%d ",i+1);
			found=1;	
		}
	}
	if(!found){
		printf("-1");
	}
	printf("\n");
}
