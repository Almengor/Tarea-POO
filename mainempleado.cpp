#include "Empleado.cpp"
#include <iostream>

using namespace std;
main(){
	string nombres, apellidos, direccion, codigo_empleado, sueldo, puesto;
	int telefono;
	
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese Codigo de Empleado: ";
	cin>>codigo_empleado;
	cout<<"Ingrese Sueldo: ";
	cin>>sueldo;
	cout<<"Ingrese Puesto: ";
	cin>>puesto;
	
	// instanciar un objeto y cambiar nit unicamente
	
	Empleado obj = Empleado(nombres, apellidos, direccion, telefono, codigo_empleado, sueldo, puesto);
	obj.mostrar();
	
};
