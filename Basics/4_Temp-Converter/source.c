#include <stdio.h>

int main() {
    float temperature, converted_temperature;
    int choice;

    do {
        printf("Temperature Converter\n");
        printf("1. Celsisu to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("Enter your choice (1 0r 2): ");
        scanf("%d", &choice);

        switch  (choice) {
            case 1:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temperature);
                converted_temperature = (temperature * 9/5) + 32;
                printf("%.2f, Celsius is equal to %.2f Fahraenheit.\n\n", temperature, converted_temperature);
                break;
            case 2:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &temperature);
                converted_temperature = (temperature - 32) * 5/9;
                printf("%.2f Fahrenheit is equal to %.2f Celsius.\n\n", temperature, converted_temperature);
                break;
            default:
                printf("Invalid choice.\n\n");
                break;
        }
        printf("Do you want to convert another temperature? (1 for yes/ 0 for no): ");
        scanf("%d", &choice);
    } while (choice == 1);

    printf("Thank you for using the Temperature Converter.\n");

    return 0;
}
