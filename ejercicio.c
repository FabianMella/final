
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void contabilizador(char* cadena,int largo,int* contador_cad)
{
	
	int letra;
	int i=0;
	
	while(i<largo)
	{
	    letra=1;
	    contador_cad[i]=letra;
	    int contador=0;
	    bool repetido=false;
	    int f=i-1;
	    while(f>=0)
	    {
	        if(cadena[i] == cadena[f])
	        {
	            repetido=true;
	        }
	        f--;
	    }
	    if(repetido == false)
	    {
	        while(contador<largo)
	        {
	            if (*(cadena+i) == *(cadena+contador))
	            {
	                contador_cad[i]=letra++;
	 
	            }
	            contador++;
	        }
	    }
	    i++;
	
    }
}

void dividir_cad(char* cadena,int largo,char* nueva)
{
    int i=1;
    
    while(i<largo)
    {
        bool repetido=false;
        int j=i-1;
        while(j>=0)
        {
            if(cadena[i] == cadena[j])
            {
                repetido=true;
            }
            j--;
        }
        if(repetido == false)
        {
            nueva[i]=cadena[i];
        }
        i++;
    }
}

int main()
{
	char cadena[] = "aabbcb";
	int largo= strlen(cadena);
	int i=0;
	int contador_cad[largo];
    char nueva[largo];
    
    dividir_cad(cadena,largo,nueva);
	contabilizador(cadena,largo,contador_cad);
    	
	while(i<largo)
	{
	    printf("%c:%d/",nueva[i],contador_cad[i]);
	    i++;
	}
	return 0;
}