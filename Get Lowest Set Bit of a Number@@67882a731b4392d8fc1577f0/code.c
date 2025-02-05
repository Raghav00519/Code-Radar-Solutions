#include <stdio.h>

int main() {
    int number;
        
            // Reading the input number
                scanf("%d", &number);
                    
                        // Find the position of the lowest set bit using the expression (number & -number)
                            int position = 0;
                                
                                    if (number != 0) {
                                            position = __builtin_ctz(number); // __builtin_ctz gives the count of trailing zeros (position of lowest set bit)
                                                }
                                                    
                                                        // Output the position of the lowest set bit
                                                            printf("%d\n", position);
                                                                
                                                                    return 0;
                                                                    }
                                                                    


    



    
   
