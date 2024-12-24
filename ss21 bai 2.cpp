#include <stdio.h>

int main() {
    FILE *file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("do not open\n");
        return 1; 
    }
    char kyTu;
    if ((kyTu = fgetc(file)) != EOF) {
        printf("ki tu dau tien la: '%c'\n", kyTu);
    } else {
        printf("khong co gi .\n");
    }
    fclose(file);
    return 0;
}
