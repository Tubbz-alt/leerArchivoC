#include <stdio.h>
int main() {
   /* Declaramos la variable fichero como puntero a FILE. */
	FILE *fichero;

	/* Declaramos la variable cadena de tipo array char. */
	char cadena[1024];

	/* Declaramos la variable reslutado como puntero. */
	char *resultado;

	/* Abrimos "hola.txt" en modo texto y
	 * guardamos su direccion en el puntero. */
	fichero = fopen("/var/root/josue/hola.txt", "r");

	if (fichero == NULL) {
		printf("Error: No se ha podido leer el archivo.");
	} else {
		/* Se obtiene la cadena de caracteres de
		 * tamaño 256 dentro de hola.txt. */
        
        
		//resultado = fgets(cadena, 1024, fichero);

		while (fgets (cadena, 256, fichero)!=NULL) {
			//printf("%s", cadena);
			//resultado = fgets(cadena, 1024, fichero);
            fprintf( stdout, cadena );
            //puts(cadena);
		}
		//fprintf( stdout, cadena );
		/* Cerramos "fichero1.txt". */
		fclose(fichero);
	}
   return 0;
}
