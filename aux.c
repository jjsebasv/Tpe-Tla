#include <stdio.h>
#include <stdlib.h>
#include "employee.h"
#include "specialFn.h"
int main ()
{
struct Employee e1 = { "Pedro", "Gimenez", "Junior", 53853, 1, 1500 };
struct Employee e2 = { "Pedro", "Gimenez", "Junior", 53854, 1, 1500 };
struct Employee e3 = { "Pedro", "Gimenez", "Junior", 53855, 1, 1500 };
struct Employee e4 = { "Pedro", "Gimenez", "Junior", 53856, 1, 1500 };
struct Employee e5 = { "Pedro", "Gimenez", "Junior", 53857, 1, 1500 };
struct Employee employees[5] = {e1 , e2 , e3 , e4 , e5};
int i = 0;
while ( i < 5 )
{
printf( "%s\n", employees[i].name );
i = i + 1;

}
int salary =  getSalary( e1, 3, "MONTH");
int salaryMinusDeductions =  getSalary( e1, 4, "MONTH") - 100 - ( e1.salary * 0.03 );
printEmployee( e1);
getEmployee( employees, 53853, (int)sizeof(employees)/(int)sizeof(employees[0]) );
getAll(employees, (int)sizeof(employees)/(int)sizeof(employees[0]) );
return 0;
}
