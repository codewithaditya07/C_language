// Basic C Program for Fibonacci Series

// #include <stdio.h>
// int main() {
// int n, i;
// int first = 0, second = 1, next;

// printf("Enter the number of terms: ");

// scanf("%d", &n);
// printf("Fibonacci Series: ");

// for (i = 1; i <= n; i++) {
// if (i == 1) {
// printf("%d ", first);
// continue;
// }

// if (i == 2) {
// printf("%d ", second);
// continue;
// }

// next = first + second;
// first = second;
// second = next;
// printf("%d ", next);
// }

// printf("\n");
// return 0;
// }

/* atm.c
   Simple ATM transaction simulator (beginner-friendly)
   Demonstrates nested if conditions.
*/

#include <stdio.h>

int main() {
    int pin = 1234;             // initial PIN (default)
    int entered_pin;
    int attempts = 0;
    double balance = 1000.0;    // starting balance
    int choice;
    double amount;
    int keep_running = 1;       // <-- FIXED: start with 1

    printf("Welcome to Simple ATM Simulator\n");

    // Allow up to 3 PIN attempts using nested ifs
    while (attempts < 3) {
        printf("\nEnter your 4-digit PIN: ");
        scanf("%d", &entered_pin);

        if (entered_pin == pin) {
            // PIN correct -> enter main menu loop
            printf("PIN accepted. Access granted.\n");

            while (keep_running) {
                printf("\n--- ATM Menu ---\n");
                printf("1. Withdraw\n");
                printf("2. Deposit\n");
                printf("3. Check Balance\n");
                printf("4. Change PIN\n");
                printf("5. Exit\n");
                printf("Choose an option (1-5): ");
                scanf("%d", &choice);

                if (choice == 1) {
                    // Withdraw option
                    printf("Enter amount to withdraw: ");
                    scanf("%lf", &amount);

                    if (amount <= 0) {
                        printf("Invalid amount. Must be greater than 0.\n");
                    } else if (amount <= balance) {
                        balance -= amount;
                        printf("Please collect your cash: %.2f\n", amount);
                        printf("Remaining balance: %.2f\n", balance);
                    } else {
                        printf("Insufficient funds. Your balance is: %.2f\n", balance);
                    }

                } else if (choice == 2) {
                    // Deposit option
                    printf("Enter amount to deposit: ");
                    scanf("%lf", &amount);

                    if (amount <= 100) {
                        printf("Invalid deposit amount.\n");
                    } else {
                        balance += amount;
                        printf("Amount deposited: %.2f\n", amount);
                        printf("New balance: %.2f\n", balance);
                    }

                } else if (choice == 3) {
                    printf("Your current balance is: %.2f\n", balance);

                } else if (choice == 4) {
                    int old_pin, new_pin;
                    printf("Enter current PIN to change: ");
                    scanf("%d", &old_pin);

                    if (old_pin == pin) {
                        printf("Enter new 4-digit PIN: ");
                        scanf("%d", &new_pin);

                        if (new_pin >= 1000 && new_pin <= 9999) {
                            pin = new_pin;
                            printf("PIN changed successfully.\n");
                        } else {
                            printf("Invalid new PIN. Must be a 4-digit number.\n");
                        }
                    } else {
                        printf("Current PIN incorrect. PIN not changed.\n");
                    }

                } else if (choice == 5) {
                    printf("Thank you for using Simple ATM. Goodbye!\n");
                    keep_running = 0;

                } else {
                    printf("Invalid option. Please select 1-5.\n");
                }
            } // end menu loop

            break; // exit PIN attempts loop because user logged in

        } else {
            attempts++;
            if (attempts < 3) {
                printf("Incorrect PIN. Try again. (%d attempts left)\n", 3 - attempts);
            } else {
                printf("Incorrect PIN entered 3 times. Card locked. Please contact bank.\n");
            }
        }
    } // end PIN attempts

    return 0;
}
