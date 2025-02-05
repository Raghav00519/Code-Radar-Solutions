#include <stdio.h>

void printBinary(int number) {
    int bit;
        // Loop through each bit (from the most significant to least significant)
            for (int i = 31; i >= 0; i--) {
                    // Shift the bit to the right and check if the bit at position i is set (1) or not (0)
                            bit = (number >> i) & 1;
                                    
                                            // Print the bit (either 0 or 1)
                                                    printf("%d", bit);
                                                        }
                                                        }

                                                        int main() {
                                                            int number;
                                                                
                                                                    // Reading a single integer
                                                                        scanf("%d", &number);
                                                                            
                                                                                // Print binary representation by skipping leading zeros
                                                                                    printBinary(number);
                                                                                        
                                                                                            return 0;
                                                                                            }
                                                                                            



  


                     
        
                     
                                        
                              
                                           

             
                            
                                                                
                                                              
                                                                
                                                                            
                                                                               

                                                                                        
                                                                       
                                                                              










