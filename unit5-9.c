#include <stdio.h>

// Structure to store customer details
struct customer {
    char name[50];
    int account_num;
    float balance;
};

// Function to print customers with balance less than $200
void print_low_balance_customers(struct customer c[], int n) {
    printf("Customers with balance less than $200:\n");
    for(int i=0; i<n; i++) {
        if(c[i].balance < 200.0) {
            printf("%s\n", c[i].name);
        }
    }
}

// Function to add $100 to balance of customers with more than $1000 balance
void add_hundred_to_balance(struct customer c[], int n) {
    printf("\nIncremented balances of customers with balance more than $1000:\n");
    for(int i=0; i<n; i++) {
        if(c[i].balance > 1000.0) {
            c[i].balance += 100.0;
            printf("%s: $%.2f\n", c[i].name, c[i].balance);
        }
    }
}

int main() {
    // Create array of structures to store customer details
    struct customer c[10] = {
        {"John", 1234, 500.0},
        {"Mary", 5678, 1000.0},
        {"Bob", 9012, 1500.0},
        {"Alice", 3456, 200.0},
        {"Tom", 7890, 800.0},
        {"Kate", 2345, 1200.0},
        {"Jim", 6789, 300.0},
        {"Sara", 1235, 900.0},
        {"Mike", 6780, 700.0},
        {"Lisa", 9011, 1100.0}
    };

    // Call function to print customers with low balance
    print_low_balance_customers(c, 10);

    // Call function to add $100 to balance of customers with more than $1000 balance
    add_hundred_to_balance(c, 10);

    return 0;
}
