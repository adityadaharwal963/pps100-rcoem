#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num);

int main() {
    FILE *input_file, *even_file, *odd_file, *prime_file;
    int num;

    // Open input file for reading
    input_file = fopen("input_file.txt", "r");
    if (input_file == NULL) {
        printf("Unable to open input_file.txt.\n");
        return 0;
    }

    // Open even file for writing
    even_file = fopen("even_file.txt", "w");
    if (even_file == NULL) {
        printf("Unable to create even_file.txt.\n");
        fclose(input_file);
        return 0;
    }

    // Open odd file for writing
    odd_file = fopen("odd_file.txt", "w");
    if (odd_file == NULL) {
        printf("Unable to create odd_file.txt.\n");
        fclose(input_file);
        fclose(even_file);
        return 0;
    }

    // Open prime file for writing
    prime_file = fopen("prime_file.txt", "w");
    if (prime_file == NULL) {
        printf("Unable to create prime_file.txt.\n");
        fclose(input_file);
        fclose(even_file);
        fclose(odd_file);
        return 0;
    }

    // Read numbers from input file and write to appropriate file
    while (fscanf(input_file, "%d", &num) == 1) {
        if (num % 2 == 0) {
            fprintf(even_file, "%d\n", num);
        } else {
            fprintf(odd_file, "%d\n", num);
        }
        if (is_prime(num)) {
            fprintf(prime_file, "%d\n", num);
        }
    }

    // Close files
    fclose(input_file);
    fclose(even_file);
    fclose(odd_file);
    fclose(prime_file);

    printf("Numbers classified and written to files successfully.");

    return 0;
}

bool is_prime(int num) {
    int i;

    if (num <= 1) {
        return false;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}
