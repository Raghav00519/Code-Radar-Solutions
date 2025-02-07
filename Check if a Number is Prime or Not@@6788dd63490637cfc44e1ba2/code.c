#include <stdio.h>

int main() {
    int num, i, is_prime = 1;

        // Input a single integer greater than 0
            scanf("%d", &num);

                // Prime number must be greater than 1
                    if (num <= 1) {
                            is_prime = 0;
                                }

                                    // Check divisibility from 2 to the square root of num
                                        for (i = 2; i * i <= num; i++) {
                                                if (num % i == 0) {
                                                            is_prime = 0;
                                                                        break;
                                                                                }
                                                                                    }

                                                                                        // Output the result
                                                                                            if (is_prime) {
                                                                                                    printf("Prime\n");
                                                                                                        } else {
                                                                                                                printf("Not Prime\n");
                                                                                                                    }

                                                                                                                        return 0;
                                                                                                                        }
                                                                                                                        








