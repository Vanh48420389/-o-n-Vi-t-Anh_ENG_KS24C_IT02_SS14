#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];
    int i, dem = 0;

    printf("nhap chuoi : ");
    fgets(chuoi, sizeof(chuoi), stdin);  

   
    chuoi[strcspn(chuoi, "\n")] = 0;

    
    for(i = 0; chuoi[i] != '\0'; i++) {
        
        if ((i == 0 && chuoi[i] != ' ') || (chuoi[i] != ' ' && chuoi[i-1] == ' ')) {
            dem++;
        }
    }

    printf("%d\n", dem);

    return 0;
}

