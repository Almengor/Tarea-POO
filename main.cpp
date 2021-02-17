#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	cout<<"ingrese Nit: ";
	cin>>nit;
	cout<<"ingrese nombres: ";
	cin>>nombres;
	cout<<"ingrese apellidos: ";
	cin>>apellidos;
	cout<<"ingrese direccion: ";
	cin>>direccion;
	cout<<"ingrese telefono: ";
	cin>>telefono;
	
	// instanciar un objeto y cambiar nit unicamente
	
	Cliente obj = Cliente(nombres, apellidos, direccion, telefono, nit);
	obj.mostrar();
	
// modificar un dato
/*	cout<<"Ingrese Nit: ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();

	// instanciar un objeto y utilizar get and set

/*	Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);

	obj.mostrar();
	cout<<"Nit: "<<obj.getNit()<<endl;
	cout<<"Nombres: "<<obj.getNombres()<<endl;
	cout<<"Apellidos: "<<obj.getApellidos()<<endl;
	cout<<"Direccion: "<<obj.getDireccion()<<endl;
	cout<<"Telefono: "<<obj.getTelefono()<<endl;

*/	};

