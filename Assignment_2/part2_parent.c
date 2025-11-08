#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();
    if (pid < 0) return 1;
    if (pid == 0) {
        execl("./part2_child", "part2_child", NULL);
        return 1;
    }
    int count = 0;
    long loop = 0;
    while (1) {
        if (count % 3 == 0) printf("Cycle %ld: %d is a multiple of 3\n", loop, count);
        else            printf("Cycle %ld\n", loop);
        count++;
        loop++;
        usleep(300000);
    }
}