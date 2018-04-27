//abrir el programa
//realizar funcion int
//realizar procedimiento void
//declarar variables 
//preguntar por las horas trabajadas de cada uno de los 6 dias
//preguntar cuanto dinero le pagan por hora
//llamar a las funciones y procedimientos
//cerrar programa 
#include <stdio.h>

	int horas_trabajadas(float dia1, float dia2,float dia3, float dia4, float dia5, float dia6){
		float resultado;
		resultado = (dia1 + dia2 + dia3 + dia4 + dia5 + dia6);
		printf("la cantidad de horas trabajadas en la semana es de :%f \n ",resultado);
		return resultado;
	}
	void	pago_semanal(float dinerohora, float resultado){
			float pagosemanal;
			pagosemanal = dinerohora*resultado;
		printf("su pago semanal es de %f ",pagosemanal);
	}
		
int main (void)
{
	float dia1, dia2, dia3, dia4, dia5, dia6, dinerohora, totalhoras;
	printf("ingrese las horas trabajadas el dia 1: ");
	scanf("%f",&dia1);
	printf("ingrese las horas trabajadas el dia 2: ");
	scanf("%f",&dia2);
	printf("ingrese las horas trabajadas el dia 3: ");
	scanf("%f",&dia3);
	printf("ingrese las horas trabajadas el dia 4: ");
	scanf("%f",&dia4);
	printf("ingrese las horas trabajadas el dia 5: ");
	scanf("%f",&dia5);
	printf("ingrese las horas trabajadas el dia 6: ");
	scanf("%f",&dia6);
	printf("ingrese cuanto dinero le pagan por hora : ");
	scanf("%f",&dinerohora);
	totalhoras=horas_trabajadas(dia1,dia2,dia3,dia4,dia5,dia6);
	pago_semanal(dinerohora,totalhoras);
	return 0;
}
	
