#include <stdio.h>

int main() {
    int number, n;
        
            // Reading two integers: the number and the bit position (0-based)
                scanf("%d %d", &number, &n);
                    
                        // Toggle the nth bit using XOR (^) with a mask
                            number = number ^ (1 << n);
                                
                                    // Output the updated number
                                        printf("%d\n", number);
                                            
                                                return 0;
                                                }
                                                


    



    
  
