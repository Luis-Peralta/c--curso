//programa promedio de 3 calificaciones
//-7 reprobado

#include <iostream>
using namespace std;

int main() {
  
  int seleccion;
  cout<<"Pinturas disponibles: \n";
  cout<<"Selecciona una con el codigo...\n";
  cout<<"1010 - Azul\n";
  cout<<"2030 - Rojo\n";
  cout<<"3011 - Verdel\n";
  cout<<"2324 - Amarillol\n";
  cin>>seleccion;
  cout<<"-----------------------\n Haz seleccionado el codigo: ";
  cout<<seleccion;
  
  if(seleccion == 2030 || seleccion ==3011 ||seleccion ==2324){
  	cout<<"\nesta pintura esta disponible!";
  }else{
  	if(seleccion==1010){
  		cout<<"\nesta pintura esta agotada!";
	  }else{
	  	cout<<"\nesta pintura no existe :/";
	  	
	  }
  }
  
  
  
  
}
