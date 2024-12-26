#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int points [] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
string word1 = get_string("Player 1: ");
string word2 = get_string ("Player 2: ");

int score1 = compute_score(word1);
int score2 = compute_score(word2);

printf("Player 1 score: %d\n", score1);
printf("Player 2 score: %d\n", score2);

//determinando o vencedor
if (score1 > score2) {
  printf("Player 1 wins! \n");
 }
else if (score2 > score1) {
  printf("Player 2 wins! \n");
 }
else {
  printf("Tie!");
 }
}

int compute_score(string word) {
  int score = 0;

  for (int i = 0, n = strlen(word); i < n; i++) {
    char c = word[i];
    if (isalpha(c)) {
      c = tolower(c);
      score +=points[c -'a'];
    }
  }

  return score;
}