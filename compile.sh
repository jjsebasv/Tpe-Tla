./parser < $1.um > aux.c
sed -i -e '1i#include "specialFn.h"\' aux.c
sed -i -e '1i#include "employee.h"\' aux.c
sed -i -e '1i#include <stdlib.h>\' aux.c
sed -i -e '1i#include <stdio.h>\' aux.c
gcc aux.c -o $1
rm aux.c
