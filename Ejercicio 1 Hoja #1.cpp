/*Ejercicio # 1: Usar estructuras y grabar datos a un archivo, utilizar funciones
Descripción de problema:  Escribir una función Salario que calcule los salarios de un trabajador para un número dado de horas trabajadas y un salario hora.
Las horas que superen las 40 horas semanales se pagarán como extras con un salario hora 1,5 veces el salario ordinario.  Así mismo se deberá calcular el monto a pagar de IGSS por cada trabajador. El programa deberá contener un menú para:
1) Invocar dicha función y grabar datos a un archivo,
2) Adicionalmente deberá tener una opción para leer el archivo y grabar los datos en memoria. 
3) Una opción para mostrar cuanto se paga de total de planilla e IGSS.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include <windows.h>
#include <fstream>
#include <iostream>
#include <ostream>
 using namespace std;
 float Horastrab=0,Sal=0,valho=0,salt=0,salh=0,IGSS=8.34,cuotal=0,horasx=0;
 int menu=0;
 string Nombr;
 char Menus;
 int main(){
    do{
cout<<"Menu"<<endl;
cout<<"1. Ingresar empleaado \n";
cout<<"2. Leer archivos Guardados\n";
     	cout<<"3. Planilla \n";
     	cout<<"ingrese la opcion que desea\n";
     	cin >>menu;	
        	switch (menu){
                	case 1:
						cout<<"ingrese el nombre del empleado: ";
                		cin>>Nombr;
                		cout<<"\n Salario :";
                		cin>>Sal;
                		cout<<"\n Cuantas Horas Trabajo a la semana : ";
                		cin>>Horastrab;
                		if(Horastrab>40){
						horasx=Horastrab-40;
						cout<<"Las Horas extras son : "<<horasx<<"\n"; 	
						}
						else{
								cout<<"No hay Horas extras \n";
							}
                		valho=(((Sal/30)/8)*1.5);
                		cout<<"\n Valor cada hora extra : "<<valho<<"\n";
                		salh=valho*horasx;
                		salt=Sal+salh;
                		cuotal=((salt*IGSS)/100);
                		cout<<"salario base es de: "<<Sal<<" salario horas extras : "<<salh<<" Tota: "<<salt<<" Cuota Laboral "<<cuotal<<"\n";
                   		  ofstream archivoSalSalida( "Salario.txt", ios::out );
						if ( !archivoSalSalida )	{
        						cerr << "No se pudo abrir el archivo" << endl;
       						 exit( 1 );
 						    } 
        					archivoSalSalida << Sal << ' ' << salt << ' ' << cuotal << endl; 
                		cout<< "\nquieres ir al Menu Principal? s/n \n";
                		cin>>Menus;
                	break;
                	case 2:
						break;
					
                		ifstream archivo;
                		string texto;
                		archivo.open("Salario.txt",ios::in);
                		if(archivo.fail()){
                    		cout<< "No se pudo abrir el archivo";
                    		exit(1);
                    		}
                    	while(!archivo.eof()){
                    		getline(archivo,texto);
                    		cout<<texto<<endl; 
                    		}
                    	archivo.close();
                    	cout<< "\n quieres ir al Menu Principal? s/n \n";
                		cin>>Menus;
                	break;
                	case 3:
cout<<"Nombre Del empleado Salario a Recibir Cuota Laboral\n";
cout<< Nombr<<" Q. "<<salt<< "Q. : "<<cuotal;
                		cout<< "\nquieres ir al Menu Principal? s/n \n";
                		cin>>Menus;
                	break; 
         }
        }while((Menus=='S')||(Menus=='s')); 	
  	system ("pause");
  }


