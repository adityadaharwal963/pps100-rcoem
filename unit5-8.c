#include <stdio.h>

#define MAX_STUDENTS 50
#define MAX_SUBJECTS 3

struct student {
    int roll_no;
    char name[50];
    int marks[MAX_SUBJECTS];
    int total;
};

int main() {
    struct student s[MAX_STUDENTS];
    int i, j;

    // Reading student data
    printf("Enter details of %d students:\n", MAX_STUDENTS);
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Roll No.: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf("%s", s[i].name);
        s[i].total = 0;
        for (j = 0; j < MAX_SUBJECTS; j++) {
            printf("Marks in Subject %d: ", j+1);
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
    }

    // Calculating and displaying student-wise total
    printf("\nStudent-wise total:\n");
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("%d. %s (Roll No.: %d) - Total: %d\n", i+1, s[i].name, s[i].roll_no, s[i].total);
    }

    // Finding student with highest total
    int highest_total = s[0].total;
    int highest_total_student_index = 0;
    for (i = 1; i < MAX_STUDENTS; i++) {
        if (s[i].total > highest_total) {
            highest_total = s[i].total;
            highest_total_student_index = i;
        }
    }

    // Displaying student with highest total
    printf("\nStudent with highest total:\n");
    printf("%d. %s (Roll No.: %d) - Total: %d\n", highest_total_student_index+1, s[highest_total_student_index].name, s[highest_total_student_index].roll_no, s[highest_total_student_index].total);

    return 0;
}
