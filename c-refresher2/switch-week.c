#include <stdio.h>
#include <stdlib.h>

enum weekday {
  MON,
  TUE,
  WED,
  THU,
  FRI
};

void display_inspirational_message(enum weekday d) {
  switch (d) {
    case MON:
      printf("Too much Monday, not enough coffee :(\n");
      break;
    case TUE:
      printf("Mmm, taco Tuesday\n");
      break;
    case WED:
      printf("Whoa-oh, we're halfway there...\n");
      break;
    case THU:
      printf("Almost the weekend\n");
      break;
    case FRI:
      printf("TGIF\n");
      break;
    default:
      fprintf(stderr, "AWOOOGAH! ABORT! ABORT!\n");
      abort();
  }
}

int main() {
//   for (enum weekday d = MON; d <= FRI; d++) {
//     printf("%d: ", d);
//     display_inspirational_message(d);
//   }
display_inspirational_message(3);
    printf("%ld\n", sizeof(char));
    printf("%ld\n", sizeof(long));

}