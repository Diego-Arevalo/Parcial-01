/*Ejercicio # 1
Construya un programa tal que, dado como datos el carné y 5 calificaciones de un estudiante, 
imprima en pantalla el carné, el promedio y la palabra aprobado, 
si el estudiante tiene un promedio mayor o igual a 6.  
Imprimir la palabra no aprobado en caso contrario.*/
#include<fstream>
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int		CARNE=0;
float	NOTA[5];
float	SUMA;

void ingresar();
void reporte();
int main(){
	system("color 03");	
	cout<<"--------------------------------------------"<<endl;	
	cout<<"** Bienvenido **"<<endl<<endl;
	cout<<"--------------------------------------------"<<endl;	
	ingresar();
	return(0);
}
void ingresar(){
	//dado como datos el carné y 5 calificaciones de un estudiante
	cout<<"°°°°°°°°°°°°"<<endl;
	cout<<"Ingrese No. De CARNE del estudiante: "<<endl;
	cin>>CARNE;
	if (CARNE!=0){
	   for (int i=0 ; i< 5 ; i++){
	   		 cout<<"Ingrese Nota "<<(i+1)<<" (1 <-> 10): "<<endl;
			 cin>>NOTA[i];
			 SUMA=(SUMA+NOTA[i]);
			 cout<<"°°°°°°°°°°°°°"<<endl;
	   };
	reporte();
	};
	if (CARNE==0){
	cout<<"NO HA INGRESADO CARNE";
	system("pause");
	}	
}

void reporte(){
//imprima en pantalla el carné, el promedio y la palabra aprobado, 
//si el estudiante tiene un promedio mayor o igual a 6

SUMA=(SUMA/5);
if (SUMA>=6){
	system("color 02");
	cout<<"El estudiante con CARNE No.: "<<CARNE<<endl<<"Tiene un Promedio de:"<<SUMA<<endl<<"APROBADO";
};
if (SUMA<6){
	system("color 04");
	cout<<"El estudiante con CARNE No.: "<<CARNE<<endl<<"Tiene un Promedio de:"<<SUMA<<endl<<"NO APROBADO";
};

}

