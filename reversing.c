#include <stdio.h>
#include <stdlib.h>
 
int main() {
    char *str = (char*) malloc(101*sizeof(char));
    scanf("%[^\n]s", str);
 
    char *ptr = str;
    while(*ptr != '\0') {
        ptr++;
    }
 
    ptr--;
    while(ptr >= str) {
        printf("%c", *ptr--);
    }
 
    free(str);
    return 0;
}