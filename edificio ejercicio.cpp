// eificio ejercicio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int w, x, y, z;
	cout<<"introduzca el numero de habitantes de la puerta A\n"; cin>>w;
	cout<<"introduzca el numero de habitantes de la puerta B\n"; cin>>(x);
	cout<<"introduzca el numero de habitantes de la puerta C\n"; cin>>(y);
	cout<<"introduzca el numero de habitantes de la puerta D\n"; cin>>(z);

	if (w > x && w > y && w > z)
	{
		cout <<"La puerta con mas integrantes es A\n";
	}
	else if (x > w && x > y && x > z)
	{
		cout << "La puerta con mas integrantes es B\n";
	}
	else if (y > w && y > x && y > z)
	{
		cout << "La puerta con mas integrantes es C\n";
	}
	else if (z > w && z > y && z > x)
	{
		cout << "La puerta con mas integrantes es D\n";
	}
	else if (x == w || x == y || x == z || w == x || w == y || w == z || y == w || y == x || y == z || z == w || z == y || z == x)
	{
		cout << "hay 2 o mas puertas con la misma cantidad de personas\n";
	}
	return 0;
}

