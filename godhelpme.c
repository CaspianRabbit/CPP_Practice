#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n, middles, lines, redge, ledge, midcount, edges;
    scanf("%d", &n);
    middles = n;
    lines = (middles * 2) - 1;
    midcount = lines;
    edges = lines;

    for (int i = 0; i < lines / 2; ++i) {
        // loop for left edge. must not run for first and last line
        ledge = n;
        for (int j = 0; j < edges - lines; j++) {
            printf("%d ", ledge);
            ledge--;
        }

        // loop for middle numbers, generating outwards
        for (int k = 0; k < midcount; k++) {
            printf("%d ", middles);
        }

        // loop for right edge. must not run for first and last line
        redge = middles + 1;
        for (int k = 0; k < edges - lines; k++) {
            printf("%d ", redge);
            redge++;
        }

        middles--;
        midcount -= 2;
        edges++;

        printf("\n");
    }

    for (int i = 0; i <= lines / 2; ++i) {
        // loop for left edge. must not run for first and last line
        ledge = n;
        for (int j = 0; j < edges - lines; j++) {
            printf("%d ", ledge);
            ledge--;
        }

        // loop for middle numbers, generating outwards
        for (int k = 0; k < midcount; k++) {
            printf("%d ", middles);
        }

        // loop for right edge. must not run for first and last line
        redge = middles + 1;
        for (int k = 0; k < edges - lines; k++) {
            printf("%d ", redge);
            redge++;
        }

        middles++;
        midcount += 2;
        edges--;

        printf("\n");
    }

    return 0;
}