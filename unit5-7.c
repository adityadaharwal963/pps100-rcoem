#include <stdio.h>
#include <stdlib.h>
#define MAX 10

// Define the structure for cricketer
struct cricketer {
    char name[30];
    int age;
    int test_match_played;
    int runs_in_test_match;
    int odi_match_played;
    int runs_in_odi;
};

int main() {
    FILE *fp; // File pointer
    struct cricketer player[MAX]; // Array of structures
    int i;

    // Open file for writing
    fp = fopen("CRICK_FL", "wb");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error opening file!");
        exit(1);
    }

    // Get data for 10 cricketers
    printf("Enter data for 10 cricketers:\n");
    for (i = 0; i < MAX; i++) {
        printf("Cricketer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", player[i].name);
        printf("Age: ");
        scanf("%d", &player[i].age);
        printf("Test match played: ");
        scanf("%d", &player[i].test_match_played);
        printf("Runs in test match: ");
        scanf("%d", &player[i].runs_in_test_match);
        printf("ODI match played: ");
        scanf("%d", &player[i].odi_match_played);
        printf("Runs in ODI: ");
        scanf("%d", &player[i].runs_in_odi);
        printf("\n");

        // Write the data to file
        fwrite(&player[i], sizeof(struct cricketer), 1, fp);
    }

    // Close the file
    fclose(fp);

    // Reopen file for reading
    fp = fopen("CRICK_FL", "rb");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error opening file!");
        exit(1);
    }

    // Print the contents of file
    printf("\nContents of CRICK_FL file:\n");
    for (i = 0; i < MAX; i++) {
        fread(&player[i], sizeof(struct cricketer), 1, fp);
        printf("Cricketer %d:\n", i + 1);
        printf("Name: %s\n", player[i].name);
        printf("Age: %d\n", player[i].age);
        printf("Test match played: %d\n", player[i].test_match_played);
        printf("Runs in test match: %d\n", player[i].runs_in_test_match);
        printf("ODI match played: %d\n", player[i].odi_match_played);
        printf("Runs in ODI: %d\n", player[i].runs_in_odi);
        printf("\n");
    }

    // Close the file
    fclose(fp);

    return 0;
}
