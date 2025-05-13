#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers
      (a and b): ");
    scanf("%d %d", &a, &b);

    // Swapping
    temp = a;
    a = b;
    b = temp;

    // Output the result
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
Enter two numbers (a and b): 4 5
After swapping:
a = 5
b = 4
