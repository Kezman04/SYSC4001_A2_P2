#include <stdio.h>
#include <unistd.h>

int main() {
    int currentVal = 0;
    while (1) {
        currentVal--;
        printf("Child: %d\n", currentVal);
        usleep(400000);
    }
}