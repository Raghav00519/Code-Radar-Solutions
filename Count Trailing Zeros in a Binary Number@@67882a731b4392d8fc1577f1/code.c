#include <stdio.h>

int main() {
    int number;
        
            // Reading a single integer
                scanf("%d", &number);
                    
                        // Count the number of trailing zeros using the built-in function __builtin_ctz
                            int trailing_zeros = __builtin_ctz(number);
                                
                                    // Output the count of trailing zeros
                                        printf("%d\n", trailing_zeros);
                                            
                                                return 0;
                                                }
                                                








