/*Ejercicio # 3
el valor de los tickets que se cobren durante el día, según en el orden que se hayan cobrado. 
los datos deberán de guardarse a un archivo de texto según de vaya cobrando. 
un reporte en pantalla el monto cobrado durante el día */
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;
	string	 PIVOTE;
	float	 PRECIO=0;
	int		 TICKET=0;
void	registrar()	;
void	reporte();
int main(){
	int	operacion=0;
	do{
	system("color 03");
	cout<<"--------------------------------------------"<<endl;	
	cout<<"Bienvenido, Seleccione una opcion."<<endl<<endl;
	cout<<"1. Ingreso de datos"<<endl<<"2. Reporte"<<endl<<"0. Salir"<<endl;
	cout<<"--------------------------------------------"<<endl;	
	cin>>operacion;
 	if (operacion==1){
 		system("CLS");
		registrar();	};
 	if (operacion==2){
 		system("CLS");
		reporte();	};
 } 	while (operacion!=0);
 	return (0);				}
 	
void registrar(){
cout<<"Ingrese el No. de Tocket a contabilizar:"<<endl;
cin>>TICKET;
cout<<"Ingrese el monto Cobrado por el TICKET:"<<endl;
cin>>PRECIO;
 ofstream grabararchivo;
	try {
		grabararchivo.open("Progra1_P1_Problema_3.txt",ios::app);
		grabararchivo<<TICKET<<"\t"<<PRECIO<<endl;
		grabararchivo.close();		
		}
	catch(exception X){
		cout<<"Error en el manejo del archivo"<<endl;	
		}
}
void reporte(){
float SUMAS=0;
ifstream data_a; //archivo original
data_a.open		("Progra1_P1_Problema_3.txt",ios::in);
//leer archivo anterior
	while (data_a>>TICKET>>PRECIO){
		SUMAS=SUMAS+PRECIO	;	}
cout<<"El Total Cobrado Durante el Dia es de: Q."<<SUMAS<<endl;
	 }

