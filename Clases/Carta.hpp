#include <iostream>
using std::string;
class Carta{
// clase generica de cartas
public:

	string MostrarNombre(); // Muestra el nombre de la carta
	void EditarNombre(string nombre); // Edita el nombre de la carta

	string MostrarDescripcion(); // Muestra la descripcion de la carta
	void EditarDescripcion(string descripcion); // Edita la descripcion de la carta


private:

	string Nombre; // Variable que contiene el Nombre de la carta
	string Descripcion; // Variable que contiene la Descripcion de la carta

};

class CartaCriatura : public Carta{
// Clase que contiene lo esencial para cartas de tipo moustro.
public:

	CartaCriatura(string nombre, string descripcion, int ataque, int defensa); // Se encarga de Establecer los valores de la carta.
	~CartaCriatura(); // Destructor

	int MostrarAtaque(); // Muestra el ataque de la carta.
	void EditarAtaque(int ataque); // Sirve para cambiar el ataque de la carta.

	int MostrarDefensa(); // Muestra la defensa de la carta.
	void EditarDefensa(int defensa); // Sirve para cambiar la defensa de la carta.

private:
	int Ataque; // variable que almacena el valor del ataque.
	int Defensa; // variable que almacena el valor de la defensa.
};

class CartaHechizo : public Carta{
// Clase que contiene lo esencial para cartas de tipo hechizo.
public:

	CartaHechizo(string nombre, string descripcion); // Constructor de la Clase CartaHechizo.
	~CartaHechizo(); // Destructor de la Clase CartaHechizo.
};


// Comienzo de la implementacion de los metodos de la clase Carta.

string Carta::MostrarNombre(){ // Retorna el Nombre de la Carta.
	return Nombre;
}

void Carta::EditarNombre(string nombre){ // Cambia el Nombre de la Carta.
	Nombre = nombre;
}

string Carta::MostrarDescripcion(){ // Retorna la Descripcion de la Carta.
	return Descripcion;
}

void Carta::EditarDescripcion(string descripcion){ // Cambia la Descripcion de la Carta.
	Descripcion = descripcion;
} // Fin de la implementacion de los metodos de la clase Carta.


// Comienzo de la implementacion de la clase CartaCriatura.

CartaCriatura::CartaCriatura(string nombre, string descripcion, int ataque, int defensa){ // Definicion del constructor de CartaCriatura.
	this->EditarNombre(nombre);
	this->EditarDescripcion(descripcion);
	this->Ataque = ataque;
	this->Defensa = defensa;
}

CartaCriatura::~CartaCriatura(){ // Destructor de la clase CartaCriatura.

}

int CartaCriatura::MostrarAtaque(){ // Se encarga de Mostrar el Ataque de la carta.
	return this->Ataque;
}

void CartaCriatura::EditarAtaque(int ataque){ // Se encarga de establecer otro Ataque a la carta.
	this->Ataque = ataque;
}

int CartaCriatura::MostrarDefensa(){ // Se encarga de Mostrar el Defensa de la carta.
	return this->Defensa;
}

void CartaCriatura::EditarDefensa(int defensa){ // Se encarga de establecer otro Defensa a la carta.
	this->Defensa = defensa;
} // Fin de la implementacion de los metodos de la clase CartaCriatura.

// Comienzo de la implementacion de la clase CartaHechizo.

CartaHechizo::CartaHechizo(string nombre, string descripcion){ // Definicion del construcor de la clase CartaHechizo.
	this->EditarNombre(nombre);
	this->EditarDescripcion(descripcion);
}

CartaHechizo::~CartaHechizo(){ // Destructor de la clase CartaHechizo.

} // Fin de la implementacion de los metodos de la clase CartaHechizo.