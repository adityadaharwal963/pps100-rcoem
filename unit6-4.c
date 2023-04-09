#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    // Open source file for reading
    fp1 = fopen("source_file.txt", "r");
    if (fp1 == NULL) {
        printf("Unable to open source_file.txt.");
        return 0;
    }

    // Open destination file for writing
    fp2 = fopen("destination_file.txt", "w");
    if (fp2 == NULL) {
        printf("Unable to create destination_file.txt.");
        fclose(fp1);
        return 0;
    }

    // Copy content character by character
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    // Close files
    fclose(fp1);
    fclose(fp2);

    printf("File contents copied successfully.");

    return 0;
}
