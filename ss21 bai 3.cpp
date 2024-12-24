#include <stdio.h>

int main() {
    char chuoi[100];
    printf("Nhap chuoi bat ki: ");
    fgets(chuoi, sizeof(chuoi), stdin); 
    FILE *file = fopen("bt01.txt", "a"); 
    if (file == NULL) {
        printf("do not open\n");
        return 1; 
    }

    fprintf(file, "%s", chuoi);
    fclose(file);

    printf("all the best to you\n");
    return 0;
}
