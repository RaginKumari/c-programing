#include <stdio.h>

int main() {
    int marks, total_marks = 500; // assuming total marks is 500
    float percentage;

    printf("Enter the marks obtained by the student: ");
    scanf("%d", &marks);

    percentage = (float)marks / total_marks * 100;

    printf("\nMark Sheet:\n");
    printf("Marks Obtained: %d\n", marks);
    printf("Total Marks: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80 && percentage < 90) {
        printf("Grade: B\n");
    } else if (percentage >= 60 && percentage < 80) {
        printf("Grade: C\n");
    } else if (percentage >= 50 && percentage < 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}
