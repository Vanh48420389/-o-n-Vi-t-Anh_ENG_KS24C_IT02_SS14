#include <stdio.h>
#include <string.h>

int main(){
	char word[]="hello iem iuu";

	for(int i;word[i]!='\0';i++){
		printf("%c\t",word[i]);
	} 
	return 0;
} 
