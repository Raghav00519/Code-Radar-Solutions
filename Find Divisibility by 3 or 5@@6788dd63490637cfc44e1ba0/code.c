#include <stdio.h>

int main() {
    int num;

        // Input a single integer
            scanf("%d", &num);

                // Check divisibility by 3, 5, or both
                    if (num % 3 == 0 && num % 5 == 0) {
                            printf("Divisible by Both\n");
                                } else if (num % 3 == 0) {
                                        printf("Divisible by 3\n");
                                            } else if (num % 5 == 0) {
                                                    printf("Divisible by 5\n");
                                                        } else {
                                                                printf("Not Divisible\n");
                                                                    }

                                                                        return 0;
                                                                        }
                                                                        








