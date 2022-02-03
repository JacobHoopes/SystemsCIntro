#include "SystemsCIntro.h"

int main() {
    int length;
    printf("Enter the length of the list: ");
    scanf("%d", &length);
    if (length < 0) {
        printf("This only accepts non-negative numbers.\n");
        return 0;
    }
    int seed;
    printf("Enter the seed for the pseudorandom number generation: ");
    scanf("%d", &seed);
    srand(seed);
    int running_sum = 0;
    for(int i = 0; i < length; i++) {
        int new = rand() % 100;
        running_sum += new;
        printf("%d", new);
        if (i < length - 1) { 
            printf(", ");
        } else {
            printf(".\n");
        }
    }
    double mean;
    mean = (double) running_sum / length;
    printf("The mean of this list is %.2f.\n", mean);
}
