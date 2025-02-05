#include <stdio.h>

int main() {
    int a, b, c;
        
            // Reading the three sides of the triangle
                scanf("%d %d %d", &a, &b, &c);
                    
                        // Check if the sides satisfy the triangle inequality theorem
                            if (a + b > c && a + c > b && b + c > a) {
                                    printf("Valid\n");
                                        } else {
                                                printf("Invalid\n");
                                                    }
                                                        
                                                            return 0;
                                                            }
                                                            








