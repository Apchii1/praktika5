 #include <stdio.h>

int main() {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char letter;
    int index = -1;

    printf("Введите букву: ");
    scanf(" %c", &letter);  

    for (int i = 0; alphabet[i] != '\0'; i++) {
        if (alphabet[i] == letter) {
            index = i + 1;  
            break;
        }
    }

    if (index != -1) {
        printf("Позиция буквы '%c' в алфавите: %d\n", letter, index);
    } else {
        printf("Буква '%c' не найдена в алфавите.\n", letter);
    }

    return 0;
}
