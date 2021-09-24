#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

  srand(time(0));

  int top = 100;
  int down = 0;
  int computer = 0;
  int random = rand() % 100 + 1;
  int counter = 1;


  printf("Random: %d\n", random);

  while (computer != random) {

    computer = ((top - down)/2 + down);
    printf("%d\n", computer);

    if (random > computer) {
      down = computer + 1;
      counter++;
    }

    else if (random < computer) {
      top = computer - 1;
      counter++;
    }

    else {
      printf("You got it!\n");
      printf("Count of attemps: %d\n", counter);
    }

  }

  return 0;

}
