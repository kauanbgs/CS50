#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

void contar(void);

int main(void){
    contar();
    printf("contar()");


}


void contar(void){
    string player1 = get_string("Player 1:  ");
    string player2 = get_string("Player 2:  ");
    int score1 = 0;
    int score2 = 0;
    int values[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    for(int i = 0; i < strlen(player1); i++){
        char letter = tolower(player1[i]);
        if (letter >= 'a' && letter <= 'z'){
            int index = letter - 'a';
            score1 += values[index];
        }
    }

    for(int i = 0; i < strlen(player2); i++){
        char letter = tolower(player2[i]);
        if (letter >= 'a' && letter <= 'z'){
            int index = letter - 'a';
            score2 += values[index];
        }
    }

    printf("Player 1: %i\n", score1);
    printf("Player 2: %i\n", score2);

    if (score1 > score2) {
        printf("Player 1 vence!\n");
    } else if (score2 > score1) {
        printf("Player 2 vence!\n");
    } else {
        printf("Empate!\n");
    }
}

