#include <stdio.h>
void main()
{
    int i, s;
    float A, HW, CT, MT, TF, total = 0;
    printf("Enter no. of students: ");
    scanf("%d", &s);
    for (i = 1; i <= s; i++)
    {
        printf("\tMarks of student %d: \n", i);
        printf("Enter Attendence mark: ");
        scanf("%f", &A);
        A = A ;
        printf("Enter Assignment mark: ");
        scanf("%f", &HW);
        HW = HW ;
        printf("Enter Class Test mark: ");
        scanf("%f", &CT);
        CT = CT ;
        printf("Enter Midterm mark: ");
        scanf("%f", &MT);
        MT = MT * 3 / 5;
        printf("Enter Final mark: ");
        scanf("%f", &TF);
        TF = TF * 4 / 10;
        total = A + HW + CT + MT + TF;
        if (total >= 90)
            printf("Student %d: A\n", i);
        else if (total >= 86 && total <= 89)
            printf("Student %d: A-\n", i);
        else if (total >= 82 && total <= 85)
            printf("Student %d: B+\n", i);
        else if (total >= 78 && total <= 81)
            printf("Student %d: B\n", i);
        else if (total >= 74 && total <= 77)
            printf("Student %d: B-\n", i);
        else if (total >= 70 && total <= 73)
            printf("Student %d: C+\n", i);
        else if (total >= 66 && total <= 69)
            printf("Student %d: C\n", i);
        else if (total >= 62 && total <= 65)
            printf("Student %d: C-\n", i);
        else if (total >= 58 && total <= 61)
            printf("Student %d: D+\n", i);
        else if (total >= 55 && total <= 57)
            printf("Student %d: D\n", i);
        else
            printf("Student %d: F\n", i);
    }
}