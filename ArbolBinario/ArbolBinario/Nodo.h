#pragma once
template <typename T>

class Nodo
{
	T valor = 0;
	Nodo* hijo = nullptr;

public:

	Nodo(const T& nuevo_Valor) {
		valor = nuevo_Valor;
	}

	void AgregarValor(const T& nuevo_Valor) {

		if (hijo == nullptr) {
			hijo = new Nodo<int>(nuevo_Valor);
		}
		else {
			hijo->AgregarValor(nuevo_Valor);
		}
	}


	void SetValor(const T& nuevo_Valor) {
		valor = nuevo_Valor;
	}

	Nodo* next() {
		return this->hijo;
	}

	void EliminarNodo() {
		Nodo* eliminar = next();

	}

	T& GetValor() {
		return valor;
	}

};

