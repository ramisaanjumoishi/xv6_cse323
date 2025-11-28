#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  printf(1, "cpuhog started - PID %d eating CPU forever...\n", getpid());

  // Infinite loop to burn CPU
  while(1) {
    // Do nothing, just waste CPU cycles
  }

  exit();
}
