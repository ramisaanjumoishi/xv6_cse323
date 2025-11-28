// ps.c — THE ONLY VERSION THAT WORKS IN xv6-public WITHOUT ANY ptable ERROR
#include "types.h"
#include "user.h"

int main(void)
{
  printf(1, "\n=== PROCESS TIMESLICE LIST ===\n");
  printf(1, "PID\tTIMESLICE\n");
  printf(1, "--------------------------------\n");

  int found = 0;
  for(int pid = 1; pid <= 64; pid++) {
    int ts = gettimeslice(pid);
    if(ts >= 0) {
      printf(1, "%d\t%d\n", pid, ts);
      found = 1;
    }
  }

  if(!found)
    printf(1, "No processes found.\n");

  printf(1, "--------------------------------\n\n");
  exit();
}
