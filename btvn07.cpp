#include <stdio.h>
#include <string.h>
int main() {
	char str1[100],str2[100];
	printf("Nhap chuoi A: ");
	fgets(str1,100,stdin);
	if (str1[strlen(str1)-1]=='\n')
        str1[strlen(str1)-1]='\0';
	printf("Nhap chuoi B: ");
	if (str2[strlen(str2)-1]=='\n')
        str2[strlen(str2)-1]='\0';
	fgets(str2,100,stdin);
	if(strstr(str1,str2)!=NULL)
	printf("co\n");
	else
	printf("khong\n");
}
