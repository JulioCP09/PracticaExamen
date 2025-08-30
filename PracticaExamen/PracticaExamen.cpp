// PracticaExamen.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

class Venta
{
private:
	int precioProducto;
public:
	Venta(int producto) : precioProducto(producto) {}

	void compra() 
	{
		int cantidadCompra = 0;
		float totalCompra = 0;
		cout << "***********************************" << endl;
		cout << "Producto: Consola de Videojuegos" << endl;
		cout << "Precio del Producto: $350" << endl;
		cout << endl;
		cout << "Cuantos aticulos desea comprar: " << endl;
		cin >> cantidadCompra;

		if (cantidadCompra > 5) 
		{
			if (cantidadCompra > 7) 
			{
				totalCompra = cantidadCompra * precioProducto;
				cout << "Total de la compra: " << totalCompra << endl;
				cout << "Descuento a aplicar del 15%: "<< totalCompra * 0.15 << endl;
				cout << "total de la compra con el descuento aplicado: "<< totalCompra - (totalCompra * 0.15) << endl;
			}
			else 
			{
				totalCompra = cantidadCompra * precioProducto;
				cout << "Total de la compra: " << totalCompra << endl;
				cout << "Descuento a aplicar del 10%: " << totalCompra * 0.1 << endl;
				cout << "total de la compra con el descuento aplicado: " << totalCompra - (totalCompra * 0.1) << endl;
			}
		}
		else 
		{
			cout << "Descuento a aplicar del 0%: " << endl;
			cout << "Total de la compra: " << cantidadCompra * precioProducto << endl;
		}

	}
};

int main()
{
	Venta Consola(350);
	Consola.compra();
}
