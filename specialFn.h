#include <ctype.h>
#include <string.h>

float getSalary(struct Employee e, int lapse, char* timelapse) {
	int t = lapse;
	int salary = e.salary;
	char aux[7];
	if (strcmp(timelapse, "WEEK") == 0) {
		strcpy(aux, "semanas");
		t /= 4;
		t *= lapse;
	} else if (strcmp(timelapse, "YEAR") == 0) {
		strcpy(aux, "años");
		t *= 12;
		t *= lapse;
	} else if (strcmp(timelapse, "MONTH") == 0) {
		strcpy(aux, "meses");
		t *= lapse;
	} else {
		printf("ERROR\n");
		return -1;
	}
	salary *= t;
	printf("El empleado cobrara $%d de aca a %d %s \n", salary, lapse, aux  );
	return t;
}

struct Employee getEmployee( struct Employee (*company), int id, int size) {
	int i = 0;
	struct Employee e;
	while ( i < size ){
		e = company[i];
  	if ( e.id == id ){
  		printEmployee(e);
  		return e;
  	}
  	i++;
	}
	return e;
}

void getAll(struct Employee (*company), int size) {
	int i = 0;
	printf(" ******** PLANTA DE EMPLEADOS ******** \n");
	for ( i; i < size ; ++i)	{
		printEmployee(company[i]);
	}
	printf(" ************************************* \n");
}