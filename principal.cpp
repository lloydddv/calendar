#include <stdio.h>
#include <stdlib.h>

int mesdia(int mes, int ano);
int anobisiesto(int anoauxiliar);


int main(){
int numeros[10];
int ano, diadelmes;

	printf("Introduzca un a%co: \n ", -92);	
	scanf("%d", &ano);
  
  const char *mes[]={"-----enero----","----febrero---","-----marzo----","-----abril----","-----mayo-----",
                    "-----junio----","-----julio----","----agosto----","--septiembre--","----octubre---","---noviembre--","---diciembre--"};
  
   for(int contador;contador <12; contador=contador+1){
   	printf("\n\n     %s    \n", mes[contador]);
   	printf("\n L   M   X   J   V   S   D \n\n");
	diadelmes=mesdia(contador, ano);
	for(int dia=1;dia <= diadelmes ; dia=dia+1){
	if(dia<=9){
	printf(" %d  ", dia);
	}
	else {
	printf("%d  ", dia);
	}
	if(dia % 7 == 0){ 
	printf("\n");
    }
}
}
	
return 0; 
}

int anobisiesto(int anoauxiliar){
	int bisiesto;	
	//esta funcion se llama año bisiesto y es de tipo entero, además su proposito es evaluar el año de tipo entero si es bisiesto//
	//esta funcion usa el parametro año de tipo entero//  
	if (anoauxiliar % 4 == 0 && anoauxiliar % 100 != 0){
		
		if (anoauxiliar % 400 != 0){
			//printf("el ano es bisiesto");//
		bisiesto = 1;
		return bisiesto;
			}}
	else{
		//printf("el ano no es bisiesto");//
		bisiesto = 0;
		return bisiesto;
		}
}



int mesdia(int mesauxiliar, int ano){
	if(mesauxiliar==1){		
		if(anobisiesto(ano)==1){
		return 29;	
		}
		else{ 
		return 28;}}
	
	
		if(mesauxiliar==3 || mesauxiliar==5 || mesauxiliar==8 || mesauxiliar==10){
		return 30;
		}
		
		if(mesauxiliar==0 || mesauxiliar==2 || mesauxiliar==4 || mesauxiliar==6 || mesauxiliar==7 || mesauxiliar==9 || mesauxiliar==11){
		return 31;
		}
}
