/*Ejercicio #2
SOLICTAR CODE de empleado, NAME, PAGO de empleado, el HOME de vivienda donde vive, 
si posee tarjeta de CREDIT y si tiene carga FAM. 
EVALUAR si se le puede otorgar o no, un préstamo a una persona .
ALCANZAR un puntaje total superior de 20 pts. 
DESPLEGAR en pantalla si el préstamo fue otorgado al solicitante
GRABAR en un archivo. 
REPORTE de cuantos prestamos fueron otorgados y cuantos no según lo almacenado en el archivo. 
Utilice ciclos, funciones y archivos para realizar el programa.*/
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>

using namespace std;
	string		zCODE,zNAME;
	float	 	zPAGO,zPTS=0;
	int		 	zHOME,zCREDIT,zFAM,zRESULT;
void	ingresar()	;
void	reporte();
int main(){
int	operacion=0;
	do{
	cout<<"--------------------------------------------"<<endl;	
	cout<<"Bienvenido, que accion desea realizar ?"<<endl<<endl;
	cout<<"1. Ingreso de datos"<<endl<<"2. Reporte"<<endl<<"0. Salir"<<endl;
	cout<<"--------------------------------------------"<<endl;	
	cin>>operacion;
 	if (operacion==1){
 		system("CLS");
		ingresar();	};
 	if (operacion==2){
 		system("CLS");
		reporte();	};
 } 	while (operacion!=0);
 	return (0);				}
 	
void ingresar(){
cout<<"Ingrese el CODIGO de empleado:"<<endl;
cin>>zCODE;
cout<<"Ingrese el NOMBRE del empleado:"<<endl;
fflush(stdin);
getline (cin, zNAME,'\n' ) ;
fflush(stdin);
cout<<"Ingrese el SUELDO devengado:"<<endl;
cin>>zPAGO;
cout<<"Tipo de VIVIENDA 1. Pariente | 2. Alquilada | 3. Propia:"<<endl;
cin>>zHOME;
cout<<"Posee Tarjeta de CREDITO? 1. SI | 2. NO:"<<endl;
cin>>zCREDIT;
cout<<"Depende algun familiar de usted? 1. SI | 2. NO:"<<endl;
cin>>zFAM;	
 //asignacion de pts
 if (zPAGO<1500){zPTS=zPTS+6; }		if (zPAGO>=1500 and zPAGO<=6000){zPTS=zPTS+12; }		 if (zPAGO>6000){zPTS=zPTS+18; }
 if (zHOME==1){zPTS=zPTS+2; }	 	if (zHOME==2){zPTS=zPTS+5; }	 if (zHOME==3){zPTS=zPTS+10; }
 if (zCREDIT==1){zPTS=zPTS+6; }	
 if (zFAM==1){zPTS=zPTS+6; }		if (zFAM==2){zPTS=zPTS+3; }	 
 cout<<"Total de Puntos: "<<zPTS<<endl;
 if (zPTS>20){	system("color 02");	cout<<"***APROBADO***"; zRESULT=0;}
 if (zPTS<=20){	system("color 04");	cout<<"***DENEGADO***"<<endl; zRESULT=1; }
 
 	char	aux[20];
	strcpy(aux,zNAME.c_str());
 	for(int i=0; i<strlen(aux); i++){
 			if (aux[i]==32){
 			aux[i]=95;		}	}
 			zNAME=aux; 
 //GUARDANDO
 ofstream grabararchivo;
	try {
		grabararchivo.open("Progra1_P1_Problema_2.txt",ios::app);
		grabararchivo<<zCODE<<"\t"<<zNAME<<"\t"<<zPAGO<<"\t"<<zHOME<<"\t"<<zCREDIT<<"\t"<<zFAM<<"\t"<<zPTS<<"\t"<<zRESULT<<endl;
		grabararchivo.close();		
		}
	catch(exception X){
		cout<<"Error en el manejo del archivo"<<endl;	
		}
}
void reporte(){
float SUMA1=0,SUMA2=0;
	 	ifstream data_a; //archivo original
	 	data_a.open		("Progra1_P1_Problema_2.txt",ios::in);
	 	//leer archivo anterior
	while (data_a>>zCODE>>zNAME>>zPAGO>>zHOME>>zCREDIT>>zFAM>>zPTS>>zRESULT){
		if (zRESULT==0){SUMA1=SUMA1+1;		}
		if (zRESULT==1){SUMA2=SUMA2+1;		}
	 }
cout<<"Total de Procesos Aprobados: "<<SUMA1<<endl;
cout<<"Total de Procesos Denegados: "<<SUMA2<<endl;
}	
