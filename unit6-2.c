#include <stdio.h>

int main() {
    FILE *fp1, *fp2, *fp3;
    char ch;

    fp1 = fopen("file1.txt", "r");
    if (fp1 == NULL) {
        printf("Unable to open file1.txt");
        return 0;
    }

    fp2 = fopen("file2.txt", "r");
    if (fp2 == NULL) {
        printf("Unable to open file2.txt");
        fclose(fp1);
        return 0;
    }

    // Open new file for writing
    fp3 = fopen("merged_file.txt", "w");
    if (fp3 == NULL) {
        printf("Unable to create merged_file.txt");
        fclose(fp1);
        fclose(fp2);
        return 0;
    }

    // Copy content of first file to merged_file.txt
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp3);
    }

    // Copy content of second file to merged_file.txt
    while ((ch = fgetc(fp2)) != EOF) {
        fputc(ch, fp3);
    }

    // Close files
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Files merged successfully.");

    return 0;
}
