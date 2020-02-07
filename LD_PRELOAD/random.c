#include <stddef.h>
#include <sys/types.h>

// not actually used, so not filled out fully
// shown here so stdlib.h doesn't need to be included
struct random_data
{
  int32_t *p1;
  int32_t *p2;
  int32_t *p3;
  int r1;
  int r2;
  int r3;
  int32_t *p4;
};

long int seed = 0xDEADBEEF;

// http://man7.org/linux/man-pages/man3/random.3.html
long int random(void)
{
  seed ^= seed << 13;
  seed ^= seed >> 17;
  seed ^= seed << 5;
  return seed;
}

// http://man7.org/linux/man-pages/man3/rand.3.html
int rand(void)
{
  return random();
}

// http://man7.org/linux/man-pages/man3/rand.3.html
int rand_r(unsigned int *seedp)
{
  return random();
}

// http://man7.org/linux/man-pages/man3/rand.3.html
ssize_t getrandom(void *buf, size_t buflen, unsigned int flags)
{
  return 0;
}

// http://man7.org/linux/man-pages/man3/drand48.3.html
double drand48(void)
{
  return 0.0;
}

// http://man7.org/linux/man-pages/man3/drand48.3.html
double erand48(unsigned short xsubi[3])
{
  return 0.0;
}

// http://man7.org/linux/man-pages/man3/drand48.3.html
long int lrand48(void)
{
  return random();
}

// http://man7.org/linux/man-pages/man3/drand48.3.html
long int nrand48(unsigned short xsub[3])
{
  return random();
}

// http://man7.org/linux/man-pages/man3/drand48.3.html
long int mrand48(void)
{
  return random();
}

// http://man7.org/linux/man-pages/man3/drand48.3.html
long int jrand48(long int seedval)
{
  return random();
}

// http://man7.org/linux/man-pages/man3/random_r.3.html
int random_r(struct random_data *buf, int32_t *result)
{
  return random();
}
