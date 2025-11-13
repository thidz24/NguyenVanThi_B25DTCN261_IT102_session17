#include <stdio.h>
#include <string.h>
int main() {
	char str[100],n;
	printf("Nhap chuoi: ");
	fgets(str,100,stdin);
	printf("Nhap ky tu muon xoa: ");
	scanf("%c",&n);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==n){
			for(int j=i;str[j]!='\0';j++){
				str[j] = str[j+1]; 
			} 
			i--; 
		} 
	} 
	printf("chuoi sau khi xoa la: %s\n",str); 
	return 0; 
} 
