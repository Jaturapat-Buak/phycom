#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int size, jump;
 
    scanf("%d %d", &size, &jump);
 
    char *text = (char*) malloc((size+1)*sizeof(char));
 
    scanf(" %[^\n]", text);
 
    char *text_end = text;
    while(*text_end != '\0'){
        text_end++;
    }
 
    char *ptr = text;
    while(ptr < text_end) {
        printf("%c", *ptr);
        ptr += jump;
    }
 
    free(text);
    printf("\n");
    return 0;
}