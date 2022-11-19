#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  
  int number;
  int upper = 10, lower = 1;
  
  srand(time(NULL));
  number = (rand() % (upper-lower+1)) + lower;
  
  int answer;
  printf("I am number between 1 and 10.\nGuess what number I am: ");
  scanf("%d", answer);

  for (int i=0; i<5; i++) {
	  if (answer == number) {

		  printf("You have guessed my number correctly!);
		  break;
	  }
	  else {
		  printf("Try again: );
		  scanf("%d", &answer);
	  }

  }

  return 0;
}
