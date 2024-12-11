#include <stdio.h>
#include <string.h>

int main() {
    char str[100]="huy dao";  
    int leng;
    leng = strlen(str);
    printf("Chuoi dao nguoc: ");
    for (int i = leng ; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
