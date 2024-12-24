#include <stdio.h>

int main() {
    char chuoi[100];
    printf("Nhap bat ki: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    FILE *file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("loi.\n");
        return 1; 
    }
    fprintf(file, "%s", chuoi);
    fclose(file);

    printf("all best to you\n");
    return 0;
}
