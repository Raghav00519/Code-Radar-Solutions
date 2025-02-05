#include <stdio.h>

int main() {
    int number;
        
            // Reading a single integer
                scanf("%d", &number);
                    
                        // Count the number of leading zeros using the built-in function __builtin_clz
                            int leading_zeros = __builtin_clz(number);
                                
                                    // Output the count of leading zeros
                                        printf("%d\n", leading_zeros);
                                            
                                                return 0;
                                                }
                                                








