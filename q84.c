#include <stdio.h>

// Structure to store book information
struct Book {
    char title[100];
    char author[100];
    int year;
    float price;
};

// Function to read book information
void readBookInfo(struct Book *book) {
    printf("Enter the title of the book: ");
    fgets(book->title, sizeof(book->title), stdin);
    
    printf("Enter the author of the book: ");
    fgets(book->author, sizeof(book->author), stdin);

    printf("Enter the year of publication: ");
    scanf("%d", &book->year);

    printf("Enter the price of the book: ");
    scanf("%f", &book->price);
}

// Function to display book information
void displayBookInfo(const struct Book *book) {
    printf("\nBook Information:\n");
    printf("Title: %s\n", book->title);
    printf("Author: %s\n", book->author);
    printf("Year of Publication: %d\n", book->year);
    printf("Price: %.2f\n", book->price);
}

int main() {
    struct Book myBook; // Declare a variable of type Book

    // Read book information
    readBookInfo(&myBook);

    // Display book information
    displayBookInfo(&myBook);

    return 0;
}