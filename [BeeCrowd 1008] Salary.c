#include <stdio.h>

int main() {
    int employeeNumber, workedHours;
    float hourlyRate, salary;

    scanf("%d", &employeeNumber);
    scanf("%d", &workedHours);
    scanf("%f", &hourlyRate);

    salary = workedHours * hourlyRate;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", employeeNumber, salary);

    return 0;
}
