/*Desarrolla un programa que haga lo siguiente
1 muestre el nombre de tres alumnos juan, saul, leo, después  pida 3  calificaciones
2 realiza el promedio de esas calificaciones
3 evalúa el promedio si es menor a 7 muestra un mensaje de reprobado
de lo contrario muestra aprobado
4 si el estudiante reprobado tiene un promedio mayor a 5 pero menor a 7
mostrar mensaje (tienen derecho a actividad de recuperación )
de lo contrario  indicar si debe repetir el semestre
5 indicar cual de los 3 alumnos es el; mejor*/
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
  int cont=3;
  int promedio_mayor=0;
  int mejor=0;
  cout<<"Alumnos:\nJuan, Saul,Leo\n";
  for(int i=0;i<cont;i++){
  	float a,b,c,promedio;
  	string nombre;
  	if(i==0){
  		nombre = "Juan";
	}else if(i==1){
		nombre = "Saul";
	}else{
		nombre = "Leo";
	}
  	cout<<"\nIngrese las calificaciones 3 del alumno "<<nombre<<":\n";
	cin>>a>>b>>c;
	promedio = (a+b+c)/3;
	if(promedio < 7){
		cout<<nombre+" Repobraste!\nLa nota promedio es:";
	  	cout<<promedio<<"\n";
	  	if(promedio>5){
	  		cout<<nombre+" tienes derecho a recuperar.";
		  }else{
		  	cout<<nombre+" lo siento, debes repetir el semeste :(";
		  }
	}else{
	  	cout<<nombre+" Aprobaste!\nLa nota promedio es:";
	  	cout<<promedio;
	}
	
	if(promedio > promedio_mayor){
  		promedio_mayor=promedio;
  		mejor=i;
  	}
	
	cout<<"\n";
  }
  cout<<"_____________________________\n";
  if(mejor==0){
  	cout<<"El mejor promedio es Juan!";
  }else if(mejor ==1){
  	cout<<"El mejor promedio es Saul!";
  }else{
  	cout<<"El mejor promedio es Leo!";
  }
  
  return 0;
}

