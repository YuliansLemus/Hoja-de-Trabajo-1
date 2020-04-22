/* Ejercicio # 2: Ciclos y Arreglos Una empresa tiene diez almacenes y necesita crear un programa que lea las ventas mensuales de los diez almacenes, calcular la media de ventas y obtener un  listado de los almacenes cuyas ventas mensuales son superiores a la media.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main (){
  int m,i,j;
  float tot,v[10][12];
  do{
    cout<<"Cuantas Almacenes";
    cin>>m;
  }
  while(m>10);
  for(i=1;i<=m;i++){
    for(j=1;j<=12;j++){
      cout<<"Ingrese Las Ventas Mensuales "<<i<<" En El mes "<<j<<": ";
      cin>>v[i][j];
    }
  }
  cout<<"Los Ingresos Mensuales son  "<<endl;
  for(i=1;i<=m;i++){
    for(j=1;j<=12;j++){
      cout<<v[i][j]<<"  ";
    }
    cout<<endl;
  }
    for(i=1;i<=m;i++) {
    tot=0;
    for(j=1;j<=12;j++) {
       tot=tot+v[i][j];
    }
    cout<<"El total de ventas del vendedor "<<i<<" es "<<tot<<endl;
  double s = 0.0;
 	for(int i=0;i<tot; i++) {
 		s+=v[i];
	 }
	return s/tot; 
	 }
 	cout<<"el promedio de Ventas es de "<<Media<<endl;
  }
  getch();
}

