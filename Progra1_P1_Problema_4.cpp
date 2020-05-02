/*Ejercicio # 4
A un trabajador le pagan según las horas trabajadas y la tarifa está determinada a un valor de Q36.00 por hora trabajada. 
Si la cantidad de horas extras es mayor a 40 horas, la tarifa se incrementará un 25% para las horas extras. 
ingresar las horas trabajadas, que calcule el salario del trabajador y la tarifa de horas extras.
 Debe generar un reporte final con mostrando las horas extras a pagar a cada individuo.*/
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;
	float		total;
	float	 	PAGO, PAGO_EXTRA;
	int		 	HRS,exHRS;	  
void ingresar();	
int main(){
int	operacion=0;
	do{
	cout<<"::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;	
	cout<<"**** HOLA! ****"<<endl;
	cout<<"1. Ingreso y calculo de datos"<<endl<<"0. Salir"<<endl;
	cout<<"::::::::::::::::::::::::::::::::::::::::::::::::"<<endl<<endl;	
	cin>>operacion;
 	if (operacion==1){
 		system("CLS");
		ingresar();	};
 } 	while (operacion!=0);
 	return (0);				}

void ingresar(){
cout<<"Indique la cantidad de HORAS TRABAJADAS del empleado: "<<endl;
cin>>HRS;
if (HRS>40){
	exHRS=HRS-40;}
PAGO=HRS*36;
PAGO_EXTRA=exHRS*(45);
total=PAGO+PAGO_EXTRA;
cout<<"***********************************************"<<endl;
cout<<"El Total de HORAS EXTRA es de: "<<exHRS<<"hrs"<<endl;
cout<<"El Salario Ordinario es de: Q"<<PAGO<<endl;
cout<<"El Total a Pagar por las HRS extra es de: Q"<<PAGO_EXTRA<<endl<<endl;
cout<<"El SALARIO TOTAL es de: Q."<<total<<endl;
cout<<"***********************************************"<<endl;
system("PAUSE");
}
