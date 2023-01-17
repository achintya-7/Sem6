#include <stdio.h>

void partitionTypeTriangle(int a, int b, int c) {
  if (a == b && b == c) {
    printf(" : Equilateral Triangle \n");
    return;
  } else if (a == b || b == c || c == a) {
    printf(" : Isoceles Triangle \n");
    return;
  }
  printf(" : Normal Triangle \n");
  return;
}

void testingFunc (int arr[], int i) {
    if (
        arr[0] + arr[1] > arr[2] &&
        arr[2] + arr[0] > arr[1] &&
        arr[1] + arr[2] > arr[0]
    ) {
        printf("Test %d passed", i+1);
        partitionTypeTriangle(arr[0], arr[1], arr[2]);
    } else {
        printf("Test %d failed \n", i+1);
    }
}

int main() {
    // * List of triangles with their sides as a 1-D array
    // * Static
    // int arr[][3] = {
    //     {5, 5, 11},
    //     {5, 8, 12},
    //     {1, 2, 11},
    //     {6, 6, 6}
    // };

    // int size = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < size; i++) {
    //     testingFunc(arr[i], i);
    // }

    // * User input
    printf("Enter 3 numbers \n");
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    fflush(stdin);

    int arr[] = {a, b, c};

    testingFunc(arr, 0);

    


}
