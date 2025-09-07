#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main() {
    int lower = 0, upper = 0, digit = 0;
    char *text = (char*) malloc((101)*sizeof(char));
 
    scanf(" %[^\n]", text);
 
    char *text_end = text;
    while(*text_end != '\0'){
        text_end++;
    }
 
    char *ptr = text;
    while(ptr < text_end) {
        if (isdigit(*ptr)) {
            digit++;
        }
        else if (isupper(*ptr)) {
            upper++;
        }
        else if (islower(*ptr)) {
            lower++;
        }
        ptr++;
    }
 
    free(text);
    printf("Lowercase letters: %d\n", lower);
    printf("Uppercase letters: %d\n", upper);
    printf("Digits: %d", digit);
    return 0;
}