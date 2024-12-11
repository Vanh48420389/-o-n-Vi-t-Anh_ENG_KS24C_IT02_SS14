#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (){
	char chuoi[100];
	int dem;
	printf("nhap chuoi :");
	fgets(chuoi,100,stdin);
	for(int i=0;chuoi[i]!=0;i++){
		if(isalpha(chuoi[i])){
			dem++;
		}
	
	}
	printf("ky tu la chu cai trong chuoi la :%d",dem );
	return 0;
}
