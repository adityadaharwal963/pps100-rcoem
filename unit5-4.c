#include <stdio.h>
#include <string.h>

struct cricketer {
    char name[50];
    int age;
    int num_tests;
    float avg_runs;
};

void sort_cricketers_by_avg_runs(struct cricketer players[], int num_players) {
    int i, j;
    struct cricketer temp;
    for (i = 0; i < num_players-1; i++) {
        for (j = 0; j < num_players-i-1; j++) {
            if (players[j].avg_runs > players[j+1].avg_runs) {
                // swap the two cricketers
                temp = players[j];
                players[j] = players[j+1];
                players[j+1] = temp;
            }
        }
    }
}

int main() {
    struct cricketer players[20];
    int i, j;

    // read data for each cricketer
    for (i = 0; i < 20; i++) {
        printf("Enter data for cricketer %d:\n", i+1);
        printf("Name: ");
        fgets(players[i].name, 50, stdin);
        players[i].name[strlen(players[i].name)-1] = '\0'; // remove newline character
        printf("Age: ");
        scanf("%d", &players[i].age);
        printf("Number of tests played: ");
        scanf("%d", &players[i].num_tests);
        printf("Average runs per test: ");
        scanf("%f", &players[i].avg_runs);
        getchar(); // consume newline character
    }

    // sort the cricketers by average runs
    sort_cricketers_by_avg_runs(players, 20);

    // print the sorted list of cricketers
    printf("\nCricketers sorted by average runs:\n");
    for (i = 0; i < 20; i++) {
        printf("%d. %s (%d years old, %d tests played, %.2f average runs per test)\n",
               i+1, players[i].name, players[i].age, players[i].num_tests, players[i].avg_runs);
    }

    return 0;
}
