#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    // Open file for writing
    fp = fopen("myfile.txt", "w");
    if (fp == NULL) {
        printf("Unable to create file.");
        return 0;
    }

    printf("Enter data to write into file: ");
    fgets(data, sizeof(data), stdin);//fgets

    // Write data to file
    fputs(data, fp);

    // Close file
    fclose(fp);

    printf("Data written to file successfully.");

    return 0;
}
