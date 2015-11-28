#include <stdio.h>
#include <string.h>

struct Employee {
	char name[15];
	char lastname[15];
	char category[15];
	int id;
	int antiquity;
	int salary;
};

struct Employee newEmployee( char* name, char* lastname, char* category, int id, int antiquity, int salary) {
	struct Employee e;
	strcpy( e.name, name );
	strcpy( e.lastname, lastname );
	strcpy( e.category, category );
	e.id = id;
	e.antiquity = antiquity;
	e.salary = salary;
	printf("CREADO\n");
	return e;
}

void printEmployee( struct Employee e ) {
	printf("El Empleado: [%d] %s, %s.\n Trabaja hace %d meses, cobrando $%d.\n Categoria: %s\n ----------\n", e.id, e.lastname, e.name, e.antiquity, e.salary, e.category);
}
