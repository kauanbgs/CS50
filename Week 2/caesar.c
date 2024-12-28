#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

void cesarCipher (string text, int key) {
  for (int i = 0; i < strlen(text); i++) {
    if (isalpha(text[i])) {
      if (isupper(text[i])) {
        printf("%c", (((text[i] - 65) + key) %26 + 65));
      } else { 
        printf("%c", (((text[i] - 97) + key) %26 + 97));
      }
    }
  }
}

int main (void) {
    string text = get_string("Text: ");
    int key = get_int("Key: ");
    cesarCipher(text, key);

    return 0;
}