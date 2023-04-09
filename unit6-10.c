#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    float expenses[4], total_expenses = 0, avg_expenses;
    int i;

    // Open Expenses.txt file for writing
    fp1 = fopen("Expenses.txt", "w");
    if (fp1 == NULL) {
        printf("Unable to create Expenses.txt.\n");
        return 0;
    }

    // Write expenses to file
    for (i = 0; i < 4; i++) {
        printf("Enter expenses for game %d: ", i+1);
        scanf("%f", &expenses[i]);
        fprintf(fp1, "%.2f\n", expenses[i]);
        total_expenses += expenses[i];
    }

    // Calculate average expenses
    avg_expenses = total_expenses / 4;

    // Categorize expenses and write to file
    fp2 = fopen("Expenses2.txt", "w");
    if (fp2 == NULL) {
        printf("Unable to create Expenses2.txt.\n");
        fclose(fp1);
        return 0;
    }

    if (avg_expenses > 80) {
        fprintf(fp2, "Very Expensive\n");
        printf("Very Expensive\n");
    } else if (avg_expenses > 60 && avg_expenses <= 80) {
        fprintf(fp2, "Expensive\n");
        printf("Expensive\n");
    } else if (avg_expenses > 50 && avg_expenses <= 60) {
        fprintf(fp2, "Less Expensive\n");
        printf("Less Expensive\n");
    } else if (avg_expenses > 40 && avg_expenses <= 50) {
        fprintf(fp2, "Most Costly\n");
        printf("Most Costly\n");
    } else {
        fprintf(fp2, "Best\n");
        printf("Best\n");
    }

    // Close files
    fclose(fp1);
    fclose(fp2);

    return 0;
}
