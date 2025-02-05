#include <stdio.h>

int main() {
    int number, n;
        
            // Reading two integers: the number and the bit position (0-based)
                scanf("%d %d", &number, &n);
                    
                        // Create a mask with a 0 at the nth position and 1s elsewhere
                            int mask = ~(1 << n);
                                
                                    // Clear the nth bit by performing bitwise AND with the mask
                                        number = number & mask;
                                            
                                                // Output the updated number
                                                    printf("%d\n", number);
                                                        
                                                            return 0;
                                                            }
                                                            


    



    
   
