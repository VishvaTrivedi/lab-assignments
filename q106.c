#include <stdio.h>
#include <string.h>

// Define the structure named Item
struct Item {
    char item_name[100];
    int quantity;
    float price;
    float amount;
};

// Function to read item details and calculate the amount
void readItem(struct Item *item) {
    // Read the item name from user input
    printf("Enter item name: ");
    fgets(item->item_name, sizeof(item->item_name), stdin);

    // Remove newline character if present
    size_t len = strlen(item->item_name);
    if (len > 0 && item->item_name[len - 1] == '\n') {
        item->item_name[len - 1] = '\0';
    }

    // Read the quantity from user input
    printf("Enter quantity: ");
    scanf("%d", &item->quantity);

 // Read the price from user input
    printf("Enter price: ");
    scanf("%f", &item->price);

    // Calculate the amount
    item->amount = item->quantity * item->price;

    // Clear the input buffer
    while (getchar() != '\n');
}

// Function to print the item details
void printItem(const struct Item *item) {
    printf("\nItem Details:\n");
    printf("Item Name: %s\n", item->item_name);
    printf("Quantity: %d\n", item->quantity);
    printf("Price: %.2f\n", item->price);
    printf("Amount: %.2f\n", item->amount);
}


int main() {
    // Create an instance of Item structure
    struct Item myItem;

    // Read item details
    readItem(&myItem);

    // Print item details
    printItem(&myItem);

    return 0;
}