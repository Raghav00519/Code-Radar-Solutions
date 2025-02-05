#include <stdio.h>

int main() {
    int a, b, c;
        
            // Reading three integers
                scanf("%d %d %d", &a, &b, &c);
                    
                        // Find the maximum of the three numbers
                            int max = a;  // Assume a is the maximum initially
                                
                                    if (b > max) {
                                            max = b;  // Update max if b is greater
                                                }
                                                    
                                                        if (c > max) {
                                                                max = c;  // Update max if c is greater
                                                                    }
                                                                        
                                                                            // Output the maximum number
                                                                                printf("%d\n", max);
                                                                                    
                                                                                        return 0;
                                                                                        }

                                                                                        








