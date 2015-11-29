#include <stdio.h>
#include <stdlib.h>
#include "employee.h"
#include "specialFn.h"
 struct Employee*newRandomHeadcount( int amount )
{
struct Employee *es = malloc (amount * sizeof(struct Employee));
printf( "Planta de %d empleados, creada\n", amount );
int i = 0;
while ( i < amount )
{
int auxId = i + 1;
struct Employee aux = { "Pedro", "Gimenez", "Junior", auxId, 1, 1500 };
es[i] = aux;
printEmployee( aux);
i = i + 1;

}
return es;
}
int main ()
{
struct Employee *headcount = newRandomHeadcount( 50 );
return 0;
}
