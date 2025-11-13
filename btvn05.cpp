#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
	char str1[100],str2[100];
	printf("Nhap chuoi thu nhat: ");
	fgets(str1,100,stdin);
	printf("Nhap chuoi thu hai: ");
	fgets(str2,100,stdin);
	if(sizeof(str1)!=sizeof(str2)){
		printf("Hai chuoi khac nhau");
		return 0; 
	} 
	int flag =1; 
	for(int i=0;i<strlen(str1);i++){
		if(toupper(str1[i])!=toupper(str2[i])) {
			printf("Hai chuoi khac nhau"); 
			flag =0; 
			return 0; 
		}
	} 
	if(flag==1) 
	printf("Day la hai chuoi giong nhau");
	return 0; 
} 
