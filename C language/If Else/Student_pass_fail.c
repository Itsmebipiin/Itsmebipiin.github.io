#include <stdio.h>

int main() {
    float subject1, subject2, subject3;
    float totalPercentage;
    
    // Taking input for three subjects
    printf("Enter marks for subject 1: ");
    scanf("%f", &subject1);
    
    printf("Enter marks for subject 2: ");
    scanf("%f", &subject2);
    
    printf("Enter marks for subject 3: ");
    scanf("%f", &subject3);
    
    // Calculate the total percentage
    totalPercentage = (subject1 + subject2 + subject3) / 3;

    // Check if the student has at least 33% in each subject and 40% overall
    if (subject1 >= 33 && subject2 >= 33 && subject3 >= 33 && totalPercentage >= 40) {
        printf("The student has passed.  %f\n",totalPercentage);
    } else {
        printf("The student has failed.  %f\n",totalPercentage);
    }
    
    return 0;
}