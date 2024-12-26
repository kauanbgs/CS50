#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void) {

  double cent1 = 0.01;
  double cent2 = 0.05;
  double cent3 = 0.10;
  double cent4 = 0.25;
   
  double change = get_float("Change: ");
  int numCoins = 0;
  int changeInCents = (int)round(change * 100);

  numCoins += changeInCents / 25;
  changeInCents %= 25;

  numCoins += changeInCents / 10;
  changeInCents %= 10;

  numCoins += changeInCents / 5;
  changeInCents %= 5;

   numCoins += changeInCents / 1;
  changeInCents %= 1;

  printf("Coins used: %d \n", numCoins);
  
}