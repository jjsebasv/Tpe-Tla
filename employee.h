
struct Employee {
	char name[15];
	char lastname[15];
	char category[15];
	int id;
	int antiquity;
	float salary;
};

void printEmployee( struct Employee e ) {
	printf(" Empleado: [%d] %s, %s.\n Trabaja hace %d meses, cobrando $%f.\n Categoria: %s\n ----------\n", e.id, e.lastname, e.name, e.antiquity, e.salary, e.category);
}

void iterate( struct Employee array[], int size, void (*f)(struct Employee)) {
	int i = 0;
	for ( i; i < size; i++ ) {
		(*f)(array[i]);
	}
}

void getName(struct Employee e) {
	printf("(%d) %s, %s \n", e.id, e.lastname, e.name );
}
