#include <stdio.h>

int main() {
    int number;
        
            // Reading a single integer
                scanf("%d", &number);
                    
                        // Check if the Most Significant Bit (MSB) is set or not
                            if (number & (1 << 31)) {
                                    // If the MSB is 1 (leftmost bit in a 32-bit integer)
                                            printf("Set\n");
                                                } else {
                                                        // If the MSB is 0
                                                                printf("Not Set\n");
                                                                    }
                                                                        
                                                                            return 0;
                                                                            }
                                                                            


    



    
    
