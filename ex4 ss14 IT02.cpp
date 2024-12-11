#include <stdio.h>
#include <string.h>

int main(){
	char word[]="Buon ngu qua ";
	char kiTu;
	printf("Moi ban nhap ki tu :");
	scanf("%c",&kiTu);
	int count;
	for(int i=0;word[i]!='\0';i++){
		if(word[i]==kiTu){
			count++;
		}
	}
	printf("Ky tu %c xuat hien %d lan ",kiTu,count);
	
	
	return 0;
}
