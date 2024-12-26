#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);



int main(void) {

    string text = get_string("text: ");
    int letters = count_letters(text);
    int sentences = count_sentences(text);
    int words = count_words(text);

float letters2 =letters / words * 100;
float sentences2 =sentences / words * 100;

    float index = 0.0588 * letters2 - 0.296 * sentences2 - 15.8;
    int grade = round(index);

    printf("%i words, %i letters, %i sentences \n", words, letters, sentences);
    printf("%i Grade. \n", grade);

}

int count_letters(string text) {
    int count = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            count++;
        }
    }
    return count;
}

int count_words(string text) {
    int count = 0;
    bool in_word = false;
    for (int i = 0; text[i] != '\0'; i++) {
        if (isspace(text[i])) {
            if (in_word) {
                count++;
                in_word = false;
            }
        } else {
            in_word = true;
        }
    }
    if (in_word) {
        count++;
    }
    return count;
}

int count_sentences(string text) {
    int count = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            count++;
        }
    }
    return count;
}
