int main ()
{
struct Employee e1 = { "Pedro", "Gimenez", "Junior", 53853, 1, 1500 };
struct Employee e2 = { "Pedro", "Gimenez", "Junior", 53853, 1, 1500 };
struct Employee e3 = { "Pedro", "Gimenez", "Junior", 53853, 1, 1500 };
struct Employee e4 = { "Pedro", "Gimenez", "Junior", 53853, 1, 1500 };
struct Employee e5 = { "Pedro", "Gimenez", "Junior", 53853, 1, 1500 };
struct Employee employees[5] = {e1 , e2 , e3 , e4 , e5};
int i = 0;
while ( i < 5 )
{
printf( "%s", employees[i].name );
i = i + 1;

}
int salary =  getSalary( e1, 3, "MONTH");
printEmployee( e1);
return 0;
}
