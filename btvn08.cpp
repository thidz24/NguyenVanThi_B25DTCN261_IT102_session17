#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
   char password[100];
   int Upper=0,Lower=0,digits=0,special=0;
   fgets(password,sizeof(password), stdin);
   
   for(int i=0;i < strlen(password);i++){
   	if(isupper(password[i])){
   		Upper=1;	
	   } else if(islower(password[i])){
	   	Lower=1;
	   } else if(isdigit(password[i])){
	   	digits =1;
	   }else {
	   	special=1;
	   }
   }
   if(password>=8&&Upper&&Lower&&digits&&special){
   	printf("Hop le\n");
   } else
   printf("khong hop le");
   return 0;	
}  
