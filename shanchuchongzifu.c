#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int com(const void *a, const void *b){
	return(*(char*)a-*(char*)b);
}
int main(){
	char s[1000];
	scanf("%s",s);
	int len=strlen(s);
	qsort(s,len,sizeof(char),com);
	int i;
	int found=0;
	for(i=0;i<len;i++){
		if(s[i]==s[i+1]){
			found=1;
		}
		if(found==1&&s[i]!=s[i+1]){
			found=0;
		}
		if(!found){
			printf("%c",s[i]);
		}
	}
	return 0; 
}
