#include<stdio.h>
#include<stdlib.h>

// A valid solution encoded in base64:  JTQyYyVuXG4K

static void usage(const char *path) {
  fprintf(stderr, "%s formatstring\n", path);
  exit(1);
}

int main(int args, char *argv[]) {
  int target = 0;
  
  if(args != 2) usage(argv[0]);
  printf(argv[1], &target);

  if(target==42) puts("\nYOU WIN!");
}
