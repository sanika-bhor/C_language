#include <student.h>
#include<stdio.h>

void student::setStudentDetails()
{
    printf("\n\n Enter student roll number: ");
    scanf("%d", &roll_no);

    printf("\n Enter student name: ");
    scanf("%s", &name);

    printf("\n Enter student marks: ");
    scanf("%f", &marks);
}

void student::getStudentDetails()
{
    printf("\n\n Roll Number: %d", roll_no);
    printf("\n Name: %s", name);
    printf("\n Marks: %.2f", marks);
}