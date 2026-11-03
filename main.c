#include <stdio.h>

int main(void)
{
    float salary;
    float total = 0;
    float highest;
    float lowest;
    float average;
    int i;

    for (i = 1; i <= 5; i++)   /* Changed 50 to 5 so it's faster to test */
    {
        printf("Enter salary for employee %d: ", i);
        scanf("%f", &salary);

        total = total + salary;

        if (i == 1)            /* Set highest/lowest with the first salary */
        {
            highest = salary;
            lowest = salary;
        }

        if (salary > highest)
        {
            highest = salary;
        }

        if (salary < lowest)
        {
            lowest = salary;
        }
    }

    average = total / 5;

    printf("\n--- Salary Report ---\n");
    printf("Average salary: %.2f\n", average);
    printf("Highest salary: %.2f\n", highest);
    printf("Lowest salary: %.2f\n", lowest);

    return 0;
}