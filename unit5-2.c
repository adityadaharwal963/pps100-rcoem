void print_students_by_year(struct student students[], int num_students, int year) {
    for (int i = 0; i < num_students; i++) {
        if (students[i].year_of_joining == year) {
            printf("%s\n", students[i].name);
        }
    }
}
