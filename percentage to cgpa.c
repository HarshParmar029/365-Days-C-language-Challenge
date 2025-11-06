#include <stdio.h>
// Function to convert Percentage to CGPA
float percentageToCgpa(float percent) {
    return percent / 9.5;   // Formula: CGPA = Percentage ÷ 9.5
}
int main() {
    float percent[5], cgpa[5];
    int i;

    printf("Enter Percentage of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%f", &percent[i]);
        cgpa[i] = percentageToCgpa(percent[i]);
    }

    printf("\nResult \n");
    for (i = 0; i < 5; i++) {
        printf("Student %d -> Percentage: %.2f%% | CGPA: %.2f\n", i + 1, percent[i], cgpa[i]);
    }
    return 0;
}
