#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char** argv)
{
  srandom(time(0));
  printf("random() - %i\n", random());
}
