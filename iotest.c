#include "types.h"
#include "stat.h"
#include "user.h"

int main() {
    printf(1, "I/O sleep test pid=%d\n", getpid());
    while(1) {
        sleep(5); // artificially I/O-bound
    }
    exit();
}






