//abrir programa
//realizar funcion int
//dibujar el termometro con printf
//llamar a la funcion
//cerrar programa 

#include <stdio.h>
int pedir_temperatura(){
	int temperatura;
	printf("ingrese la temperatura  ");
	scanf("%d",&temperatura);
	return (temperatura);
}
int main () {
	int temperatura=pedir_temperatura();
	printf("0         10        20        30        40        50\n");
 	printf("|---------| --------| --------| --------| --------| \n");
 	
 	while(temperatura > 0){
		printf("-");
		temperatura--;
	}
	return 0;
}
	
