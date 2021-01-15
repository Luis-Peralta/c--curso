//escribe que pida numero entre 1-7 y muestre
//dias de la semana
#include <iostream>
using namespace std;

int main() {
  
  int num;
  cout<<"ingrese que dia de la sema es hoy entre 1 y 7: \n";
  cin>>num;
  
  switch(num){
  	case 1:
  	cout<<"Hoy es Lunes";
  	break;
  	case 2:
  	cout<<"Hoy es Martes";
  	break;
  	case 3:
  	cout<<"Hoy es Miercoles";
  	break;
  	case 4:
  	cout<<"Hoy es Jueves";
  	break;
  	case 5:
  	cout<<"Hoy es Viernes";
  	break;
  	case 6:
  	cout<<"Hoy es Sabado";
  	break;
  	case 7:	
  	cout<<"Hoy es Domingo";
  	break;
  	default:
  		cout<<"numero invalido";

  }
  
  
  return 0;
}
