#include <stdio.h>

int main() {
    int arr[5] = {0, 1, 2, 3, 4}; // Array of 5 integers

    // Print the addresses of all elements in the array
    for(int i = 0; i < 5; i++) {
        printf("Address of arr[%d]: %p\n", i, (void*)&arr[i]);
    }

    return 0;
}
