#include <stdio.h>

int numberOfSteps(int num) {
    int steps = 0;

    while (num != 0) {
        if (num % 2 == 0) { num = num / 2; }
        else { num--; }

        steps++;
    }

    return steps;
}

int main() {
    int n = 100;

    int result = numberOfSteps(n);

    printf("%d\n", result);

    return 0;
}
