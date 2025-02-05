#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
        
            // Reading a single character
                scanf("%c", &ch);
                    
                        // Check if the character is a vowel
                            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                                    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                                            printf("Vowel\n");
                                                }
                                                    // Check if the character is a consonant (a letter but not a vowel)
                                                        else if (isalpha(ch)) {
                                                                printf("Consonant\n");
                                                                    }
                                                                        // Check if the character is a digit
                                                                            else if (isdigit(ch)) {
                                                                                    printf("Digit\n");
                                                                                        }
                                                                                            // Otherwise, it must be a special character
                                                                                                else {
                                                                                                        printf("Special Character\n");
                                                                                                            }
                                                                                                                
                                                                                                                    return 0;
                                                                                                                    }
                                                                                                                    








