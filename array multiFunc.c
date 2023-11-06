#include <stdio.h>


int multiplyArray(int arr[], int size) {
    int result = 1;

    for (int i = 0; i < size; i++) {
        result =result* arr[i];
    }

    return result;
}

int main() {
    int size;

    printf("Enter the size of Array: ");
    scanf("%d", &size);



    int array[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int result = multiplyArray(array, size);

    printf("Result of multiplying array is: %d\n", result);

    return 0;
}
