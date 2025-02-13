#include <stdio.h>

void madifyArray(int arr[], int size);

int main() {
    int arr[] = {1, 3, 5, 7, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    madifyArray(arr, size);

    for (int i = 0; i < size; i++)
        printf("%d\n", arr[i]);

    return 0;
}

void madifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        arr[i] *= 2;
}