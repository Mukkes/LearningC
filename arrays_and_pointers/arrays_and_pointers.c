#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j;
  int **pnumbers;

  pnumbers = (int **)malloc(3 * sizeof(int *));

  for (i = 0; i < 3; i++) {
    pnumbers[i] = (int *)malloc((i + 1) * sizeof(int));
  }

  pnumbers[0][0] = 1;
  pnumbers[1][0] = 1;
  pnumbers[1][1] = 1;
  pnumbers[2][0] = 1;
  pnumbers[2][1] = 2;
  pnumbers[2][2] = 1;

  for (i = 0; i < 3; i++) {
    for (j = 0; j <= i; j++) {
      printf("%d", pnumbers[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < 3; i++) {
    free(pnumbers[i]);
  }
  free(pnumbers);

  return 0;
}
