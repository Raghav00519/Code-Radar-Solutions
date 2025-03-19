#include <stdio.h>

int main() {
    int N;
        printf("Enter the number of rows: ");
            scanf("%d", &N);
                
                    for (int i = N; i >= 1; i--) {      // Loop for each row
                            for (int j = 1; j <= i; j++) { // Loop to print stars in each row
                                        printf("* ");
                                                }
                                                        printf("\n"); // Move to next line after each row
                                                            }
                                                                
                                                                    return 0;
                                                                    }
                                                                    