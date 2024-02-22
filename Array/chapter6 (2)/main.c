#include <stdio.h>

#define MAX_RECORDS 5

// Define a structure for the records
struct Record {
    int id;
    // Add more fields as needed
};

// Function to swap two records
void swap(struct Record *a, struct Record *b) {
    struct Record temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort on the array of records based on the 'id' field
void bubbleSort(struct Record records[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (records[j].id > records[j + 1].id) {
                swap(&records[j], &records[j + 1]);
            }
        }
    }
}

int main() {
    struct Record records[MAX_RECORDS] = {
        {5}, // Add more records with different 'id' values
        {2},
        {4},
        {1},
        {3}
    };

    printf("Original Records:\n");
    for (int i = 0; i < MAX_RECORDS; i++) {
        printf("Record %d: %d\n", i + 1, records[i].id);
    }

    // Sort the array of records based on the 'id' field
    bubbleSort(records, MAX_RECORDS);

    printf("\nSorted Records based on 'id':\n");
    for (int i = 0; i < MAX_RECORDS; i++) {
        printf("Record %d: %d\n", i + 1, records[i].id);
    }

    return 0;
}
