//abrir programa 
//crear funcion de tipo int 
//crear procedimiento de tipo void
//crear funcion int main , llamar funciones y procedimientos, y ordenar el programa 
//cerrar el programa 
#include <stdio.h>
int pago_por_mes(int suma){
	int i; 
	int cuota=5;
	for (i=0; i<20;i++){
		suma=(suma+cuota)*2;
		cuota=cuota*2;
		printf("el total a pagar es de este mes es %d\n",cuota);
	}
	return (suma); 
}
void imprimir(int sumatoria){
	printf("el total de toda las cuotas es de %d ",sumatoria );
}
int main(){ 
	int sumatoria;
	int suma=0;
	sumatoria=pago_por_mes(suma);
	imprimir(sumatoria);
	
return 0;
}


