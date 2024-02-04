#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 22; // Correction: Assign numerical value without quotes
    char section = 'A';
    float salary = 10000.89;
    double bonusSalary = 2000.232;
    bool married = false;

    printf("Age : %d\n", age);
    printf("Section : %c\n", section); // Correction: Added semicolon
    printf("Salary : %f\n", salary);
    printf("Bonus Salary : %lf\n", bonusSalary);
    printf("Married : %d\n", married);

    return 0;
}
