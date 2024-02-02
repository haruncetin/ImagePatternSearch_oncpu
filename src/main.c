#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
#include <stdint.h>
#include "include/img_util.h"
#include "include/psearch.h"

int main(int argc, char *argv[]) {
  clock_t start, end;
  double cpu_time_used;

  unsigned int I_width, I_height, P_width, P_height;
  uint16_t **I, **P;

  if (argc != 3) {
    printf("Usage: %s original.png pattern.png\n", argv[0]);
    exit(0);
  }

  printf("Reading images...\n");
  
  I = read_png(argv[1], &I_width, &I_height);
  printf("I_width: %d, I_height: %d\n", I_width, I_height);
  P = read_png(argv[2], &P_width, &P_height);
  printf("P_width: %d, P_height: %d\n", P_width, P_height);

  if (I == 0 || P == 0) {
    printf("Error: Failed to read the image.\n");
    exit(1);
  }

  if (I_width < P_width || I_height < P_height) {
    fprintf(stderr, "Error: The pattern cannot be larger than the picture\n");
    exit(EXIT_FAILURE);
  }

  printf("\nSearching for the pattern without Parallelization...\n");
  start = clock ();
  p_search(I, I_width, P, P_width);
  end = clock ();
  cpu_time_used = ((double) (end - start));
  printf ("The code took %.8f milliseconds.\n", cpu_time_used);
  printf("\n");

  free(I);
  free(P);
  return 0;
}
