#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona {
	private : string codigo_empleado,sueldo,puesto;
	
	 public :
 Empleado(){
 }
 Empleado(string nom,string ape,string dir,int tel, string cod,string suel,string pst) : Persona(nom,ape,dir,tel){ 
codigo_empleado = cod;
sueldo = suel;
puesto = pst;
}
 // METODOS

 //set (modificar)

 void setNombres(string nom){nombres = nom;}
 void setApellidos(string ape){apellidos = ape;}
 void setDireccion(string dir){direccion = dir;}
 void setTelefono(int tel){telefono = tel;}
 void setcodigo_empleado(string cod){codigo_empleado = cod;}
 void setsueldo(string suel){sueldo = suel;}
 void setpuesto(string pst){puesto = pst;}

 //get (mostrar)

 string getNombres(){	return nombres;}
 string getApellidos(){	return apellidos;}
 string getDireccion(){	return direccion;}
 int getTelefono(){	return telefono;}
 string getcodigo_empleado(){return codigo_empleado;}
 string getsueldo(){return sueldo;}
 string getpuesto(){return puesto;}
 
// metodo

void mostrar(){

	cout<<"______________________"<<endl;
	cout<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<codigo_empleado<<","<<sueldo<<","<<puesto<<endl;

}

};
