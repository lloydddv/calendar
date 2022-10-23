#include <stdio.h>

main(){

  int ano, a,b,c,d,e,dia;


  printf ("\n ingrese año:  "); 
  scanf("%d", &ano);

  a=ano % 19; //calcula el año segun el ciclo lunar 

  b=ano % 4; //calcula año bisiesto en esta instancia

  c=ano % 7; // divide las semanas

  d=(19*a+24) % 30; 

  e=(2*b+4*c+6*d+5) % 7; //dias que hay despues de la luna llena

  dia= 22+d+e;

		 if (dia<=31)

			  printf("%d de Marzo ",dia);

		 else

			  printf("%d de Abril ",dia-32);

	return 0;
}
