#include <stdio.h>

int main() {
    int day;

        // Input a single integer representing the day of the week
            scanf("%d", &day);

                // Display the name of the day or "Invalid" for numbers outside the range 1-7
                    switch (day) {
                            case 1:
                                        printf("Monday\n");
                                                    break;
                                                            case 2:
                                                                        printf("Tuesday\n");
                                                                                    break;
                                                                                            case 3:
                                                                                                        printf("Wednesday\n");
                                                                                                                    break;
                                                                                                                            case 4:
                                                                                                                                        printf("Thursday\n");
                                                                                                                                                    break;
                                                                                                                                                            case 5:
                                                                                                                                                                        printf("Friday\n");
                                                                                                                                                                                    break;
                                                                                                                                                                                            case 6:
                                                                                                                                                                                                        printf("Saturday\n");
                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                            case 7:
                                                                                                                                                                                                                                        printf("Sunday\n");
                                                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                                                            default:
                                                                                                                                                                                                                                                                        printf("Invalid\n");
                                                                                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                                                                                        }

                                                                                                                                                                                                                                                                                            return 0;
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                            








