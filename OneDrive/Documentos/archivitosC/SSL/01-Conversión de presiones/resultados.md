# Trabajo práctico n°1 sintaxis

## 1. Comando para compilar todo el proyecto (sin usar Makefile)

```bash
gcc -std=c11 -Wall -Wextra -pedantic -O2 -o tabla_presion main.c tabla.c conversion.c
```
## 2.compilar sin usar Makefile y sin incluir conversion.h
```bash
tabla.c: In function 'mostrar_tabla':
tabla.c:14:22: error: implicit declaration of function 'psi_a_kpa' [-Wimplicit-function-declaration]
   14 |         double kpa = psi_a_kpa(psi);
      |                      ^~~~~~~~~
cc1.exe: fatal error: conversiones.c: No such file or directory
compilation terminated.
```

## 3.compilar sin usar Makefile y sin incluir stdio.h
```bash
tabla.c: In function 'mostrar_tabla':
tabla.c:10:5: error: implicit declaration of function 'fprintf' [-Wimplicit-function-declaration]
   10 |     fprintf(stdout, "TABLA DE CONVERSIONES\n");
      |     ^~~~~~~
tabla.c:5:1: note: include '<stdio.h>' or provide a declaration of 'fprintf'
    4 | #include "tabla.h"
  +++ |+#include <stdio.h>
    5 |
tabla.c:10:5: warning: incompatible implicit declaration of built-in function 'fprintf' [-Wbuiltin-declaration-mismatch]
   10 |     fprintf(stdout, "TABLA DE CONVERSIONES\n");
      |     ^~~~~~~
tabla.c:10:5: note: include '<stdio.h>' or provide a declaration of 'fprint '
tabla.c:10:13: error: 'stdout' undeclared (first use in this function)      
   10 |     fprintf(stdout, "TABLA DE CONVERSIONES\n");
      |             ^~~~~~
tabla.c:10:13: note: 'stdout' is defined in header '<stdio.h>'; this is probably fixable by adding '#include <stdio.h>'
tabla.c:10:13: note: each undeclared identifier is reported only once for each function it appears in
tabla.c:15:9: error: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
   15 |         printf("%.2f\t%.2f\n", psi, kpa);
      |         ^~~~~~
tabla.c:15:9: note: include '<stdio.h>' or provide a declaration of 'printf'
tabla.c:15:9: warning: incompatible implicit declaration of built-in function 'printf' [-Wbuiltin-declaration-mismatch]
tabla.c:15:9: note: include '<stdio.h>' or provide a declaration of 'printf'
cc1.exe: fatal error: conversiones.c: No such file or directory
compilation terminated.
```

## 4. comando para no compilar tabla.c
```bash
gcc -std=c11 -Wall -Wextra -pedantic -O2 -o tabla_presion main.c conversion.c
```
```bash
C:/msys64/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/14.2.0/../../../../x86_64-w64-mingw32/bin/ld.exe: C:\Users\catal\AppData\Local\Temp\ccWFuWI5.o:main.c:(.text.startup+0x94): undefined reference to `mostrar_tabla'
collect2.exe: error: ld returned 1 exit status
```
## 5.comando para compilar solo conversion.c
```bash
gcc -std=c11 -Wall -Wextra -pedantic -O2 -c conversion.c
```
```bash
(sin errores)
```
## 6.Comando para obtener conversion.i
```bash
gcc -E conversion.c -o conversion.i
```