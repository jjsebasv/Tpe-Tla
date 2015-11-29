#include <ctype.h>
#include <string.h>

float getSalary(struct Employee e, int lapse, char* timelapse) {
	int t = lapse;
	int salary = e.salary;
	if (strcmp(timelapse, "WEEK") == 0) {
		t /= 4;
		t *= lapse;
	} else if (strcmp(timelapse, "YEAR") == 0) {
		t *= 12;
		t *= lapse;
	} else if (strcmp(timelapse, "MONTH") == 0) {
		t *= lapse;
	} else {
		printf("ERROR\n");
		return -1;
	}
	salary *= t;
	return salary;
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
		strcpy(e.name, "non");
  	i++;
	}
	return e;
}

void printAll(struct Employee (*company), int size) {
	int i = 0;
	printf(" ******** PLANTA DE EMPLEADOS ******** \n");
	for ( i; i < size ; ++i)	{
		printEmployee(company[i]);
	}
	printf(" ************************************* \n");
}

void raise10(struct Employee e) {
	float salary = e.salary * 1.1;
	e.salary = salary;
	printf("El empleado ahora cobra %f\n", salary);
}

void raise20(struct Employee e) {
	float salary = e.salary * 1.2;
	e.salary = salary;
	printf("El empleado ahora cobra %f\n", salary);	
}

void raiseCategory(struct Employee e) {
	char * category = e.category;
	if (strcmp(category, "Junior") == 0) {
		strcpy(e.category, "Senior");
		printf("El empleado ahora es %s\n", e.category);
	} else if (strcmp(e.category, "Senior") == 0) {
		strcpy(e.category, "CEO");
		printf("El empleado ahora es %s\n", e.category);
	} else if (strcmp(e.category, "CEO") == 0) {
		printf("El empleado ya se encuentra en su máxima categoría\n");
	} else {
		strcpy(e.category, "Junior");
		printf("La categoria del empleado estaba mal definida\n");
		printf("El empleado ahora es %s\n", e.category);
	}
}