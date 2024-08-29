#include <stdio.h>
#include <stdlib.h>

#define MOVE_CURSOR_LEFT(n)       printf("\033[%dD", (n))
#define OVERWRITE_WITH_SPACES(n)  printf("\033[%dX", (n));


void usage(char *path) {
  fprintf(stderr, "%s: UINT UINT\n", path);
  exit(1);
}

void clear_line(int len) {
  MOVE_CURSOR_LEFT(len);
  OVERWRITE_WITH_SPACES(len);
  MOVE_CURSOR_LEFT(len);
}

int add(int a, int b) {
  int c;
  printf("%*x%*x%n",a, 0, b, 0, &c);
  clear_line(c);
  return c;
}

int main(int args, char *argv[]) {
  if(args != 3) usage(argv[0]);

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  if(a<0 || b < 0) usage(argv[0]);
  int r =  add(a, b);
  printf("%d\n", r);
}
                       
