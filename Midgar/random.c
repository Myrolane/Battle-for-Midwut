#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "prototype.h"
#include "structure.h"

int	random()
{
  int random;
  
  srand(time (NULL));
  random = rand() % 2;
  return (random);
}
