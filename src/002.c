#include <stdio.h>

int main(void) {
    unsigned long p = 1;
    unsigned long n = 1;
    unsigned long o = 0;
    unsigned long s = 0;

    while (n < 4000000) {
        o = n;
        n += p;
        p = o;
        if (0 == n%2) {
            s += n;
        }
    }

    printf("%d\n", s);

    return 0;
}

