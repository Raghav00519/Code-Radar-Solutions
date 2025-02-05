#include <stdio.h>

int main() {
    int number, shift_positions, result;
        
            // Reading two integers: the number and the number of positions to shift
                scanf("%d %d", &number, &shift_positions);
                    
                        // Perform the bitwise right shift operation
                            result = number >> shift_positions;
                                
                                    // Print the result
                                        printf("%d\n", result);
                                            
                                                return 0;
                                                }








