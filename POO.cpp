#include <iostream>
using namespace std;

class Persona {
	private: //atributos
		int edad,id;
		string nombre;
	public: //metodos
		Persona(int, int, string); //constructor
		void leer();
		void correr();
		void hablar();
};
//contructos, no sirve para inicializar los atributos
Persona::Persona(int _edad, int _id, string _nombre){
	edad = _edad;
	id= _id;
	nombre = _nombre;
}
void Persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro\n ID: "<<id<<endl;
}
void Persona::correr(){
	cout<<"Soy "<<nombre<<" estoy corriendo en una maraton y tengo "<<edad<<" anios\n";
}
void Persona::hablar(){
	cout<<"Soy "<<nombre<<" hablo 3 idiomas y tengo "<<edad<<" anios\n ID: "<<id<<endl;
}
int main()
{
	Persona p1 = Persona(20,1,"joel");
	Persona p2(19,2,"Aangel");
	Persona p3(18,3,"Jeremy");
	
	p1.leer();
	p2.correr(); p2.hablar();
	p3.correr(); p3.leer();
	return 0;	
}
