#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    FILE *file;
    int number, i;
    if (argc != 2) {
        printf("Usage: %s <file>\n", argv[0]);
        return 1;
    }
    file = fopen(argv[1], "r");
    if (!file) {
        printf("Error: Cannot open file %s\n", argv[1]);
        return 1;
    }
    while (fscanf(file, "%d", &number) == 1) {
        printf("%d=", number);
        for (i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                printf("%d*%d\n", i, number/i);
                break;
            }
        }
        if (i > sqrt(number)) {
            printf("%d\n", number);
        }
    }
    fclose(file);
    return 0;
}
