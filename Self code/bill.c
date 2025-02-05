// generate a bill for a stationery shop. 
#include <stdio.h>

#define MAX_ITEMS 10

struct Item {
    char name[50];
    float price;
    int quantity;
};

void displayBill(struct Item items[], int count, float totalAmount) {
    printf("\n\n------ BILL ------\n");
    printf("Item\t\tPrice\tQuantity\tTotal\n");
    printf("------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%s\t\t%.2f\t%d\t\t%.2f\n", items[i].name, items[i].price, items[i].quantity, items[i].price * items[i].quantity);
    }

    printf("------------------------------------------\n");
    printf("Total Amount: %.2f\n", totalAmount);
    printf("\nThank you for shopping with us!\n");
}

int main() {
    struct Item items[MAX_ITEMS];
    int itemCount = 0;
    float totalAmount = 0;
    int choice;

    printf("Welcome to the Stationery Shop!\n");

    do {
        
        printf("\nEnter item %d details:\n", itemCount + 1);
        printf("Enter item name: ");
        scanf(" %[^\n]s", items[itemCount].name); 

        printf("Enter item price: ");
        scanf("%f", &items[itemCount].price);

        printf("Enter item quantity: ");
        scanf("%d", &items[itemCount].quantity);

       
        totalAmount += items[itemCount].price * items[itemCount].quantity;

        itemCount++;

        
        printf("\nDo you want to add more items? (1 for yes, 0 for no): ");
        scanf("%d", &choice);

    } while (choice == 1 && itemCount < MAX_ITEMS);

    
    displayBill(items, itemCount, totalAmount);

    return 0;
}
