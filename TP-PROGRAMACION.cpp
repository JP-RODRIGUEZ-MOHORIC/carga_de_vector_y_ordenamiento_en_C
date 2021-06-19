/******************************************************************************

       TRABAJO PRACTICO "CARGA DE VECTOR Y ORDENAMIENTO EN C"

*******************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
int vector[10]; 
int numero;	
int i,j,k;
int temporal;
int orden;
int ver;
int main()
{
int opcion;
opcion = 1;
while(opcion >0 && opcion < 4) {
printf("ingrese opcion:\n");
printf("1:ingresar numeros\n");
printf("2:ordenar numeros\n");
printf("3:ver numeros\n");
printf("4:salir");
scanf("%i", & opcion );
switch (opcion)
{case 1:
for(i= 0 ; i < 10; i++){
printf("ingrese un numero [%d]:", i+1);
scanf("%d", & vector[i]);					
}
break;
case 2:	
printf("¿como desea ordenar los datos?\n");
printf("ingrese orden:\n");
printf("1:de menor a mayor\n");
printf("2:de mayor a menor");
scanf("%i", & orden);
switch (orden)
{case 1:
 for (i= 0 ; i < 10;i++ )
  {
  	for(j = 0 ;j < 10-i-1;j++ )
  	{
  		
  	if(vector[j]> vector[j+1])
  	{
  		  temporal = vector[j];
  		  vector[j] =  vector[j+1];
  		  vector [j+1]= temporal;
    } 
  }
}  
break;
case 2:
for (i= 0 ; i < 10;i++ )
  {
  	for(j = 0 ;j < 10-i-1;j++ )
  	{
  	if(vector[j]< vector[j+1])
  	{
  		  temporal = vector[j];
  		  vector[j] =  vector[j+1];
  		  vector [j+1]= temporal;
    } 
  }
 }  
break;
}
break;
case 3:
printf("¿como desea ver los datos?\n");
printf("ingrese como quiere ver los datos:\n");
printf("1:hacia abajo\n");
printf("2:hacia el costado\n");
printf("3:tabulaciones");
scanf("%i", & ver);
switch (ver)
{case 1:
for(k = 0 ; k < 10;k++)
{
printf("%i\n",vector[k]);
}
break;
case 2:
for(k = 0 ; k < 10;k++)
{
printf("%i ",vector[k]); 
}
printf("\n");
break;	
case 3:
for(k = 0 ; k < 10;k++)
{
printf("%i\t",vector[k]);
}
printf("\n");
break;
}
break;
default:
printf("adios");
exit(-1);
}
}
}




