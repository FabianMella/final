#include <stdio.h>
#include <string.h>

int contabilizador(char* cadena,int largo,int* contador_cad)
{
	int contador;
	int letra;
	int i=0;
	
	while(i<largo)
	{
	    letra=1;
	    contador_cad[i]=letra;
	    while(contador<largo)
	    {
	        if (cadena[i] == cadena[i-1])
	        {
	            contador_cad[i]=letra++;
	        }
	        contador++;
	    }
	i++;
    }
    return contador_cad[largo];
}
int main()
{
	char cadena[] = "hoooolllaaa";
	int largo= strlen(cadena);
	int arr[largo];
	int i=0;
	int contador_cad[largo];
	
	contabilizador(cadena,largo,contador_cad);

	while(i<largo)
	{
		if( *(cadena+i) != *(cadena+i-1))
		{
			printf(" %c: %d /",*(cadena+i),contador_cad[i]);
		}
		i++;
	}
	return 0;
}

