#include <stdio.h>

int main() {
    float pps, evs, maths, phy, ee;
    float sum, percentage;

    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &pps, &evs, &phy, &maths, &ee);

    sum = pps + ee + evs + phy + maths;
    percentage = (sum / 5);

    printf("Total Marks = %f\n", sum);
    printf("Percentage = %f\n", percentage);

    if (percentage >= 90)
        printf("Grade A\n");
    else if (percentage >= 80)
        printf("Grade B\n");
    else if (percentage >= 70)
        printf("Grade C\n");
    else if (percentage >= 60)
        printf("Grade D\n");
    else if (percentage >= 50)
        printf("Grade E\n");

    return 0;
}
