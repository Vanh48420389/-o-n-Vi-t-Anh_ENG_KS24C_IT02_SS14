#include <stdio.h>

int main() {
    char chuoi[] = "hello world";
    int i = 0;
    int dau_tu = 1; 
    while (chuoi[i] != '\0') {
        if (chuoi[i] >= 'a' && chuoi[i] <= 'z') {
            if (dau_tu == 1) {
                chuoi[i] = chuoi[i] - ('a' - 'A');
            }
            dau_tu = 0;
        } else if (chuoi[i] == ' ') {
            dau_tu = 1;
        }

        i++;
    }
    printf("Chuoi sau khi viet hoa: %s\n", chuoi);

    return 0;
}

