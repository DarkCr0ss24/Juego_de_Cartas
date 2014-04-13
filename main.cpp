#include "Clases/Carta.hpp"
#include <iostream>
using namespace std;

int main(){
	CartaCriatura cc("algo","puede hacer algo.",2000,1000);
	cout << "Nombre: " << cc.MostrarNombre() << endl;
	cout << "Descripcion: " << cc.MostrarDescripcion() << endl;
	cout << "Ataque: " << cc.MostrarAtaque() << endl;
	cout << "Defensa: " << cc.MostrarDefensa() << endl;
	cout << "\n";
	CartaHechizo ch("Destructor","Destruye todas las cartas en el campo.");
	cout << "Nombre: " << ch.MostrarNombre() << endl;
	cout << "Descripcion: " << ch.MostrarDescripcion() << endl;
	return 0;
}