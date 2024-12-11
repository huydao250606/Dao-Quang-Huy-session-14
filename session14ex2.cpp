#include <stdio.h>
#include<string.h>
int main(){
    char c[1000]="huy dao";
    for (int i = 0; i < strlen(c); i++)
    {
        printf("%c\t",c[i]);
    }
    

    return 0;
}
