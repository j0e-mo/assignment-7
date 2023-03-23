#include <stdio.h>
#include <stdlib.h>

struct employees{
    int salary;
    float bonus;
    float deduction;
    };
int main()
{
    float total1,total2,total3;
    struct employees Mohsen, Maged, Mariam;
    printf("Enter Mohsen's salary, bonuses and Deduction\n");
    scanf("%d %f %f", &Mohsen.salary, &Mohsen.bonus, &Mohsen.deduction);
    printf("Enter Maged's salary, bonuses and Deduction\n");
    scanf("%d %f %f", &Maged.salary, &Maged.bonus, &Maged.deduction);
    printf("Enter Mariam's salary, bonuses and Deduction\n");
    scanf("%d %f %f", &Mariam.salary, &Mariam.bonus, &Mariam.deduction);
    total1 = (Mohsen.salary+Mohsen.bonus-Mohsen.deduction);
    total2 = (Maged.salary+Maged.bonus-Maged.deduction);
    total3 = (Mariam.salary+Mariam.bonus-Mariam.deduction);
    printf("Mohsen's total salary is: %f\nMaged's total salary is: %f\nMariam's total salary is:%f\n",total1,total2,total3);
    return 0;
}
