// * LAB 3

#include <stdio.h>
#include <stdbool.h>

void partitionTypeTriangle(int a, int b, int c) {
  if (a == b && b == c) {
    printf("Equilateral Triangle \n");
    return;
  } else if (a == b || b == c || c == a) {
    printf("Isoceles Triangle \n");
    return;
  }
  printf("Normal Triangle \n");
  return;
}

void testingFunc(int a,int b, int c) {
    bool b1 = true, b2 = true, b3 = true;

    if (a + b < c) b1 = false;
    if (c + a < b) b2 = false;
    if (b + c < a) b3 = false;

    printf("--------------------\n");
    printf("Case 1 | a + b > c | %s |\n", b1 ? "True" : "False");
    printf("--------------------\n");
    printf("Case 2 | c + a > b | %s |\n", b2 ? "True" : "False");
    printf("-------------------\n");
    printf("Case 3 | b + c > a | %s |\n", b3 ? "True" : "False");
    printf("-------------------\n");

    if (b1 && b2 && b3) {
        printf("Test Case Passed \n");
        partitionTypeTriangle(a, b, c);
    } else {
        printf("Test Case Failed, Not a triangle\n");
    }
}

int main() {
    // * User input
    printf("Enter 3 numbers \n");
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    fflush(stdin);

    testingFunc(a, b, c);
}