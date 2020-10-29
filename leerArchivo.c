#include <stdio.h>
int main() {
   /* Declaramos la variable fichero como puntero a FILE. */
	FILE *fichero;

	/* Declaramos la variable cadena de tipo array char. */
	char cadena[256];

	/* Declaramos la variable reslutado como puntero. */
	char *resultado;

	/* Abrimos "fichero1.txt" en modo texto y
	 * guardamos su direccion en el puntero. */
	fichero = fopen("hola.txt", "rt");

	if (fichero == NULL) {
		printf("Error: No se ha podido leer el archivo.");
	} else {
		/* Se obtiene la cadena de caracteres de
		 * tamaño 256 dentro de fichero1.txt. */
		resultado = fgets(cadena, 256, fichero);

		while (resultado != NULL) {
			printf("%s", cadena);
			resultado = fgets(cadena, 256, fichero);
		}
		fprintf( stdout, resultado );
		/* Cerramos "fichero1.txt". */
		fclose(fichero);
	}
   return 0;
}