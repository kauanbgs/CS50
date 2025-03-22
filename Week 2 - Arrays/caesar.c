#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>

bool is_number(string text)

int main(int argc, string argv[]){

    if (argc != 2 || !is_number(argv[1])) {
        printf("Uso: %s <key>\n", argv[0]);
        return 1;
    }

    int key = atoi(argv[1]);
    string text = get_string("Plaintext: ");

    int len = strlen(text);

    for (int i = 0; text[i] != '\0'; i++) {
        text[i] += key;
        printf("%c", toupper(text[i]));
    }
    printf("\n");
    return 0;
}


bool is_number(string text){
    for (int i = 0; text[i] != '\0'; i++) {
        if (!isdigit(text[i])) {
            return false; // Retorna falso se encontrar um caractere não numérico
        }
    }
    return true; // Retorna verdadeiro se todos os caracteres forem dígitos
}
