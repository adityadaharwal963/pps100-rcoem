#include <stdio.h>

void sort(int *arr, int size, int (*cmp)(int, int));

int ascending(int a, int b) {
    return (a < b);
}

int descending(int a, int b) {
    return (a > b);
}

int main() {
    int arr[100], n, i, choice;
    int (*cmp)(int, int);
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter 1 to sort in ascending order, or 2 to sort in descending order: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        cmp = ascending;
    } else {
        cmp = descending;
    }
    
    sort(arr, n, cmp);
    
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

void sort(int *arr, int size, int (*cmp)(int, int)) {
    int i, j, temp;
    
    for (i = 0; i < size-1; i++) {
        for (j = i+1; j < size; j++) {
            if (cmp(arr[i], arr[j])) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
