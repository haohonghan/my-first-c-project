#include<stdio.h>
void delchar(char s[],char c);
int main(){
	printf("Input a string:");
	char s[1000];
	char c;
	gets(s);
	printf("Input a char:");
	c=getchar();
	delchar(s,c);
	printf("After deleted,the string is:%s",s);
	return 0;
}
void delchar(char s[],char c){
	int i,j;
	i=0,j=0;
	while(s[i]!='\0'){
		if(s[i]!=c){
			s[j++]=s[i];
		}
		i++;
	}
	s[j]='\0';
}
