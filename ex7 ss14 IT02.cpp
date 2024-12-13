#include <stdio.h>

int main() {
    
    char chuoi[] = "Hello my gmail is test123@gmail.com";
    int chuCai = 0, chuSo = 0, kyTuDacBiet = 0;
    int i = 0;

    
    while (chuoi[i] != '\0') { 
        if ((chuoi[i] >= 'A' && chuoi[i] <= 'Z') || (chuoi[i] >= 'a' && chuoi[i] <= 'z')) {
            chuCai++;
        }
        else if (chuoi[i] >= '0' && chuoi[i] <= '9') {
            chuSo++;
        }
        
        else if (chuoi[i] != ' ') {
            kyTuDacBiet++;
        }
        i++;
    }

    printf("So ky tu la chu cai: %d\n", chuCai);
    printf("So ky tu la chu so: %d\n", chuSo);
    printf("So ky tu dac biet: %d\n", kyTuDacBiet);

    return 0;
}

