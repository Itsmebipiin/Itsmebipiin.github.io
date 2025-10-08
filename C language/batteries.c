#include <stdio.h>

int main() {
    int choice;
    double mAh, Wh, voltage, result;

    printf("\nChoose what you want to calculate:\n");
    printf("1. Calculate Watt-hours (Wh)\n");
    printf("2. Calculate Milliampere-hours (mAh)\n");
    printf("3. Calculate Voltage (V)\n");
    printf("\nEnter your choice (1/2/3): ");
    scanf("%d", &choice);

    if (choice == 1) { 
        printf("\nEnter battery capacity in mAh: ");
        scanf("%lf", &mAh);
        printf("Enter battery voltage in V: ");
        scanf("%lf", &voltage);
        result = (mAh * voltage) / 1000.0;
        printf("\n%.2f mAh at %.2fV is equivalent to %.2f Wh\n", mAh, voltage, result);
    } 
    else if (choice == 2) { 
        printf("\nEnter battery energy in Wh: ");
        scanf("%lf", &Wh);
        printf("Enter battery voltage in V: ");
        scanf("%lf", &voltage);
        result = (Wh * 1000.0) / voltage;
        printf("\n%.2f Wh at %.2fV is equivalent to %.2f mAh\n", Wh, voltage, result);
    } 
    else if (choice == 3) { 
        printf("\nEnter battery energy in Wh: ");
        scanf("%lf", &Wh);
        printf("Enter battery capacity in mAh: ");
        scanf("%lf", &mAh);
        result = (Wh * 1000.0) / mAh;
        printf("\n%.2f Wh and %.2f mAh is equivalent to %.2fV\n", Wh, mAh, result);
    } 
    else {
        printf("Invalid choice! Please select 1, 2, or 3.\n");
    }

    return 0;
}