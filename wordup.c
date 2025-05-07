/*Orrin Drescher
05/07/2025
Project-10*/

#include <stdio.h>

void gameRules();
void gameGuess(int yes, int r, char guess[][], char word[]);

int main(){

   char guess[5][6], word[5];
   int yes, r;
   
   gameRules();
   
   for(r = 0; r <= 6; r++){
      gameGuess(yes, r, guess[r], word);
      }
      
   if(yes == 1){
      printf("Congrats, you got it, your word is %s.", word);
   }
   else if(yes == 0 || r >= 6){
      printf("Looks like you couldn't figure out my word, oh well, better luck next time.\n");
   }

   return 0;
}

void gameRules(){
   
   printf("Welcome to Wordup!\n");
   printf("You have 6 guesses to find the 5 letter word I am thinking of!\n");
   printf("*yes, it's basically wordle*\tnow guess away!\n");
   
}

void gameGuess(int yes, int r, char guess[][], char word[]){

      printf("Word guess #%d:", r);
      for(int c = 0; c <= 5; c++){
      scanf("%c", guess[r][c]);
      }
      if(guess[r] == word){
         yes = 1;
      }
   
}
