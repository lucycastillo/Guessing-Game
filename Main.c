
//Author: Luciana Castillo

#include <stdio.h>
#include <stdlib.h>


int main() {
  //variables
int min;
int max;
int n;
int guess;


printf("Enter a min, followed by a max number, separated by a space: \n");

scanf("%d %d", &min, &max);

//check if inputs follow conditions and if so, printf "Generating random number"

if ((min > 0) && (max> 0) && (max-min >= 30) && (max-min <=1000)){
  printf("Generating random number...\n");
}


else {
  printf("Invalid entry!!\n");
  return 1;
}

// n = random number within range

n = (rand() % (max - min + 1)) + min;


// loop until user guesses right or quits

while (1)

    {
      printf("Guess random number within %d and %d . Your guess: \n", min, max);
      scanf("%d", &guess);

//if guess = randomly chosen number within range
    if (guess == n){
        printf("Winner!");
        return 1;
      }

// if guess is = -1 ot less than 0, quit program.

    if ((guess == -1) && (guess <= 0)){
      printf("Quitter.\n");
      return 1;

      }

      //if guess is higher than n

    else if (n-guess >= 20 ){
        printf("A lot higher!\n");
      }

    else if ((n-guess >= 10) && (n-guess <= 20)){
        printf("Higher!\n");
      }

    else if (n-guess <= 10){
        printf("A little higher!!\n");
      }

      //if guess is lower than n

    else if (guess-n >=20){
        printf("A lot lower..\n");
      }

    else if  ((guess-n >=10) && (guess- n<= 20)){
        printf("Lower");
      }

    else if (guess-n <= 10){
        printf("A little lower!!\n");
      }

    }


  return 0;
}
