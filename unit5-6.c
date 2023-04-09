#include <stdio.h>

struct student {
    int rollno;
    char name[50];
    int marks[3];
    float percentage;
};

int main() {
    struct student s[80];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Read information for n students
    for (i = 0; i < n; i++) {
        printf("Enter information for student %d:\n", i + 1);
        printf("  Roll No: ");
        scanf("%d", &s[i].rollno);
        printf("  Name: ");
        scanf("%s", s[i].name);
        printf("  Marks of Subject 1: ");
        scanf("%d", &s[i].marks[0]);
        printf("  Marks of Subject 2: ");
        scanf("%d", &s[i].marks[1]);
        printf("  Marks of Subject 3: ");
        scanf("%d", &s[i].marks[2]);

        // Calculate percentage
        s[i].percentage = (s[i].marks[0] + s[i].marks[1] + s[i].marks[2]) / 3.0;
    }

    // Print the information for all students
    printf("\nRoll No\tName\tSubject 1\tSubject 2\tSubject 3\tPercentage\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t\t%d\t\t%d\t\t%.2f\n", s[i].rollno, s[i].name, s[i].marks[0], s[i].marks[1], s[i].marks[2], s[i].percentage);
    }

    return 0;
}
