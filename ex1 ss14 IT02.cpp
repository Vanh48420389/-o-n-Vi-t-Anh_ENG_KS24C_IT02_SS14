#include <stdio.h>
#include <string.h>

int main(){
	char word[100];
	printf("Moi ban nhap chuoi :");
	fgets(word,100,stdin);
	fputs(word,stdout);
	printf("so luong ki tu vua nhap la :%d", strlen(word)); 
	return 0;
} 
