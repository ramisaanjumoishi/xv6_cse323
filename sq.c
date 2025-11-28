#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  if(argc != 3){
    printf(2, "Usage: sq <pid> <quantum>\n");
    printf(2, "Example: sq 7 50   (set PID 7 to 50 ticks)\n");
    exit();
  }

  int pid = atoi(argv[1]);
  int q = atoi(argv[2]);

  if(q < 1 || q > 100){
    printf(2, "Quantum must be 1-100\n");
    exit();
  }

  if(setquantum_pid(pid, q) < 0){
    printf(2, "Failed! PID %d not found or invalid\n", pid);
  } else {
    printf(1, "PID %d timeslice set to %d\n", pid, q);
  }
  exit();
}
