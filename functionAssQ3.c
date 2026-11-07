
#include <stdio.h>
#include <stdlib.h>

#define SIZE 8
#define LOW_LIMIT 5


void inputStock(int arr[], int size);
int  totalStock(int arr[], int size);
void findLowStock(int arr[], int size);
void sortStock(int arr[], int size);
void updateStock(int *item);


int  countLowStock(int arr[], int size);
int  readInt(int *value);
void displayStock(int arr[], int size);


int readInt(int *value)
{
    int c;
    if (scanf("%d", value) == 1)
        return 1;

    if (feof(stdin)) {
        printf("\nInput ended unexpectedly. Exiting.\n");
        exit(1);
    }
    
    while ((c = getchar()) != '\n' && c != EOF)
        ;
    return 0;
}

/* Input stock for each product; negative or non-numeric values are rejected */
void inputStock(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf("Enter stock for product %d: ", i + 1);
        if (!readInt(&arr[i])) {
            printf("  Invalid input. Please enter a whole number.\n");
            i--;
        } else if (arr[i] < 0) {
            printf("  Stock cannot be negative. Try again.\n");
            i--;
        }
    }
}

/* Sum of all stock quantities */
int totalStock(int arr[], int size)
{
    int i, total = 0;
    for (i = 0; i < size; i++)
        total += arr[i];
    return total;
}


int countLowStock(int arr[], int size)
{
    int i, count = 0;
    for (i = 0; i < size; i++)
        if (arr[i] < LOW_LIMIT)
            count++;
    return count;
}


void findLowStock(int arr[], int size)
{
    int i;
    int low = countLowStock(arr, size);

    if (low == size) {
        printf("All products are low in stock.\n");
    } else if (low == 0) {
        printf("No low-stock products.\n");
    } else {
        printf("Low-stock items (stock < %d):\n", LOW_LIMIT);
        for (i = 0; i < size; i++)
            if (arr[i] < LOW_LIMIT)
                printf("  Position %d -> stock %d\n", i + 1, arr[i]);
    }
}


void sortStock(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void updateStock(int *item)
{
    int newValue;
    printf("Current stock: %d\n", *item);
    while (1) {
        printf("Enter new stock quantity: ");
        if (!readInt(&newValue)) {
            printf("  Invalid input. Please enter a whole number.\n");
        } else if (newValue < 0) {
            printf("  Stock cannot be negative. Try again.\n");
        } else {
            *item = newValue;
            return;
        }
    }
}

void displayStock(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(void)
{
    int stock[SIZE];
    int choice;

    printf("=== Warehouse Inventory Management ===\n");
    inputStock(stock, SIZE);

    printf("\nInitial stock: ");
    displayStock(stock, SIZE);
    printf("Total stock: %d\n", totalStock(stock, SIZE));
    findLowStock(stock, SIZE);

    
    while (1) {
        printf("\nChoose a product index to update (1-%d): ", SIZE);
        if (!readInt(&choice)) {
            printf("  Invalid input. Please enter a number.\n");
        } else if (choice < 1 || choice > SIZE) {
            printf("  Invalid product index. Must be between 1 and %d.\n", SIZE);
        } else {
            break;
        }
    }

    updateStock(&stock[choice - 1]);

    sortStock(stock, SIZE);

    printf("\n=== After Update ===\n");
    printf("Updated stock list (sorted ascending): ");
    displayStock(stock, SIZE);
    printf("Total stock: %d\n", totalStock(stock, SIZE));
    printf("Number of low-stock items: %d\n", countLowStock(stock, SIZE));
    findLowStock(stock, SIZE);

    return 0;
}