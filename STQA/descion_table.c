// * LAB 3

#include <stdio.h>
#include <stdbool.h>

void testingFunc(int a,int b, int c) {
    bool b1 = true, b2 = true, b3 = true;

    if (a + b < c) b1 = false;
    if (c + a < b) b2 = false;
    if (b + c < a) b3 = false;

    printf("--------------------\n");
    printf("| a + b > c | %s |\n", b1 ? "True" : "False");
    printf("--------------------\n");
    printf("| c + a > b | %s |\n", b2 ? "True" : "False");
    printf("-------------------\n");
    printf("| b + c > a | %s |\n", b3 ? "True" : "False");
    printf("-------------------\n");

    if (b1 && b2 && b3) {
        printf("Test Case Passed \n");
    } else {
        printf("Test Case Failed \n");
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