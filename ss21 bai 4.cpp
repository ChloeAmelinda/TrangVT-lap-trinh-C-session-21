#include <stdio.h>

int main() {
    FILE *file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("do not open\n");
        return 1; 
    }
    char dong[100]; 
    if (fgets(dong, sizeof(dong), file) != NULL) {
        printf("dong dau la : %s", dong);
    } else {
        printf("ko co gi\n");
    }
    fclose(file);
    return 0;
}
