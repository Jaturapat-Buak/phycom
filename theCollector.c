#include <stdio.h>
#include <stdlib.h>

int main() {
    char *arr = NULL;
    int size = 0; 
    int capacity = 0;
    char text;

    arr = (char*) malloc(capacity*sizeof(char));
    while(1) {
        scanf("%c", &text);
        if (text == '\n') continue;
        if (text == '-') {
            break;
        }
        if (text == ' ') {
            capacity += 1;
            char *temp = (char*) realloc(arr, (capacity + 1)*sizeof(char));
            arr = temp;
            *(arr + size++) = ' ';
        }
        else {
            capacity += 1;
            char *temp = (char*) realloc(arr, (capacity + 1)*sizeof(char));
            arr = temp;
            *(arr + size++) = text;
        }

    }
    *(arr + size++) = '\0';

    char *ptr = arr;
    while (*ptr != '\0') {
        printf("%c", *ptr++);
    }
    printf("\n");
    ptr--;
    while (ptr >= arr) {
        printf("%c", *ptr--);
    }
    free(arr);
    return 0;
}