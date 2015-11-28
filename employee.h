
struct Employee {
	char name[15];
	char lastname[15];
	char category[15];
	int id;
	int antiquity;
	int salary;
};

void printEmployee( struct Employee e ) {
	printf(" Empleado: [%d] %s, %s.\n Trabaja hace %d meses, cobrando $%d.\n Categoria: %s\n ----------\n", e.id, e.lastname, e.name, e.antiquity, e.salary, e.category);
}
