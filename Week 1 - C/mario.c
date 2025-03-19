#include <cs50.h>
#include <stdio.h>

void mario(int x);
void verification(void);

int main(void) {
    verification();
}



void verification(void){
    while (true) {
        int x = get_int("x: ");
        if (x > 1 && x <= 8){
        mario(x);
        break;
        }
        }
}

void mario(int x){
    for(int i = 0; i < x; i++) {
        for (int j = x; j > i; j--){
            printf(" ");
        }
        for (int k = -1; k < i; k++){
            printf("#");
        }
        printf("  ");
        for (int m = -1; m < i; m++){
            printf("#");
        }

        for (int l = x; l > i; l--){
            printf(" ");
        }

        printf("\n");
    }
}
