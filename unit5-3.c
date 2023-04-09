void print_student_by_roll_number(struct student students[], int num_students, int roll_number) {
    for (int i = 0; i < num_students; i++) {
        if (students[i].roll_number == roll_number) {
            printf("Roll Number: %d\n", students[i].roll_number);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].year_of_joining);
            return;
        }
    }
    printf("Student not found with roll number %d\n", roll_number);
}

