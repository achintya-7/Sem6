#include <stdio.h>
#include <stdbool.h>

bool testCheckFunc(int arr[], int lb, int ub, int size) {
    int flag = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] >= lb && arr[i] <= ub) {
            flag++;
            printf("Test Case %d passed \n", i+1);
            continue;
        } else {
            printf("Test Case %d failed with num %d \n", i+1, arr[i]);
        }
    }

    return flag > 0 ? false : true;
}

int main() {

    // * array of numbers lets say age
    int arr[] = {34, 32, 12, 43, 56, 32, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    // * 2 boundary conditions
    int lb = 18;
    int ub = 35;

    // * test function 
    bool a = testCheckFunc(arr, lb, ub, size);
    if (a == true) {
        printf("All Tests Pass");
    } else {
        printf("Some Tests Failed");
    }

    return 1;
}