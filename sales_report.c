#include <stdio.h>

float month_reports[12] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
char months[12][9] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int i;
float maximum;
float minimum;
float total;

int main() {
    for (i = 0; i < 12; i++) {
        float number;
        printf("Report for %s?\n", months[i]);
        scanf(" %f", &number);
        month_reports[i] = number;
        if (i == 0) {
            maximum = number;
            minimum = number;
            total = number;
        } else {
            if (number > maximum) {
                maximum = number;
            } 
            if (number < minimum) {
                minimum = number;
            }
            total += number;
        }
    }
    float average = total / 12;
    printf("\nMonthly Reports:\n\n");
    for (i = 0; i < 12; i++) {
        printf("%s: %f\n", months[i], month_reports[i]);
    }
    printf("\nSales Summary Report:\n\n");
    printf("Minimum: %f\n", minimum);
    printf("Maximum: %f\n", maximum);
    printf("Average: %f\n", average);
    printf("\nSix-Month Moving Average Report:\n\n");
    for (i = 0; i <= 6; i++) {
        float month_average = (month_reports[i] + month_reports[i + 1] + month_reports[i + 2] + month_reports[i + 3] + month_reports[i + 4] + month_reports[i + 5]) / 6;
        printf("%s - %s: %f\n", months[i], months[i + 5], month_average);
    }
    int j;
    float temp;
    char temp_month[9]; 
    for (i = 0; i < 12; i++) {
        for (j = i + 1; j < 12; j++) {
            if (month_reports[i] < month_reports[j]) {
                
                temp = month_reports[i];
                month_reports[i] = month_reports[j];
                month_reports[j] = temp;

                for (int k = 0; k < 9; k++) {
                    temp_month[k] = months[i][k];
                    months[i][k] = months[j][k];
                    months[j][k] = temp_month[k];
                }
            }
        }
    }
    printf("\nSales Report: Highest to Lowest\n\n");
    for (i = 0; i < 12; i++) {
        printf("%s: %f\n", months[i], month_reports[i]);
    }
    return 0;
}
