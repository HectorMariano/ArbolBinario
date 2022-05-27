#pragma once
#include <iostream>
#include "Nodo.h"

using namespace std;

class Arbol{

public:

	void PonerValores() {
		int valor_1 = 0;
		int aux = 1;

		std::cout << "Ingrese el valor a agregar: ";
		std::cin >> valor_1;
		Nodo<int> z(valor_1);

		std::cout << "Desea ingresar otro valor? 0.No 1.Si :";
		std::cin >> aux;

		if (aux == 1) {
			do {
				int valor = 0;
				std::cout << "\nIngrese el valor a agregar: ";
				std::cin >> valor;
				z.AgregarValor(valor);

				std::cout << "Desea ingresar otro valor? 0.No 1.Si :";
				std::cin >> aux;

			} while (aux == 1);
		}

		std::cout << "\nDatos almacenados: " << endl;
		Nodo<int>* dummy = nullptr;
		dummy = &z;
		while (dummy != nullptr) {
			cout << dummy->GetValor() << endl;
			dummy = dummy->next();
		}
	}

};

