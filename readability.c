#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    string name = get_string("Qual seu nome? ");
    printf("Hello, %s!\n", name);
}