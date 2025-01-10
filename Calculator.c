#include <stdio.h>

int main() {
  int C;
  float n1, n2, result;
  printf("Basic Calculator\n");
  printf("================\n");
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  printf("5. Exit\n");

  while (1) {
    printf("\nEnter your choice(1-5):");
    scanf("%d", &C);

    if (C == 5) {
      printf("Exiting the Calculator. Goodbye!\n");
      break;
    }
    if (C < 1 || C > 5) {
      printf("Invalid choice. Please try again.\n");
      continue;
    }
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);
    switch (C) {
    case 1:
      result = n1 + n2;
      printf("Result: %.2f+%.2f=%.2f\n", n1, n2, result);
      break;
    case 2:
      result = n1 - n2;
      printf("Result: %.2f-%.2f=%.2f\n", n1, n2, result);
      break;
    case 3:
      result = n1 * n2;
      printf("Result: %.2f*%.2f=%.2f\n", n1, n2, result);
      break;
    case 4:
      if (n2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
      } else {
        result = n1 / n2;
        printf("Result: %.2f/%.2f=%.2f\n", n1, n2, result);
      }
      break;
    default:
      printf("Invalid choice. Please try again.\n");
    }
  }
  return 0;
}