#include <stdio.h>

int main(void) {
  int filler = '#'; /* setfill('#') */
  int width = 10;   /* setw(10)     */
  int target = 5;   /* 5            */

  /* ******** */
  int s = snprintf(NULL, 0, "%d", target);
  for (int i = 0; i < width - s; i++) {
    putchar(filler);
  }
  printf("%d\n", target);
  /* ******** */

  return 0;
}
