#include <stdio.h>

int main() {
    char word[] = "yellow";
    char result[4];  
    int start = 3;   
    int end = 6;     
    int j = 0;

    for (int i = start; i < end; i++) {
        result[j++] = word[i];
    }
    result[j] = '\0';  

    printf("Подстрока: %s\n", result);

    return 0;
}
