#include <stdio.h>

int main() {
    int num1, num2;
        char operator;

            // Input two integers and an operator
                scanf("%d %d %c", &num1, &num2, &operator);

                    // Perform the calculation based on the operator
                        switch (operator) {
                                case '+':
                                            printf("%d\n", num1 + num2);
                                                        break;
                                                                case '-':
                                                                            printf("%d\n", num1 - num2);
                                                                                        break;
                                                                                                case '*':
                                                                                                            printf("%d\n", num1 * num2);
                                                                                                                        break;
                                                                                                                                case '/':
                                                                                                                                            // Check for division by zero
                                                                                                                                                        if (num2 != 0) {
                                                                                                                                                                        printf("%d\n", num1 / num2);
                                                                                                                                                                                    } else {
                                                                                                                                                                                                    printf("Error\n");  // Division by zero error
                                                                                                                                                                                                                }
                                                                                                                                                                                                                            break;
                                                                                                                                                                                                                                    default:
                                                                                                                                                                                                                                          

                                                                                                                                                                                                                                          








