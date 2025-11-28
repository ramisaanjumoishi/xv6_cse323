#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
    while(1){
        sleep(10);                         // valid syscall
        printf(1, "I/O behavior\n");       // xv6 printf requires fd=1
    }

    exit();
}

