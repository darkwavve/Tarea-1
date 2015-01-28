#include <iostream>
#include <list>

using namespace std;



const int tamano = 10;
int cant = 0;int cont = 1;
int* arreglo[tamano];

bool existe(int valor)
{
	for(int x = 0; x < tamano; x++)
	{
		if( valor == *arreglo[x])
			return true;
	}
	return false;
}

int insertar(int valor, int pos)
{
	if(existe(valor))
	{
        *arreglo[pos] = valor;
		cant++;
	}
	else
		cout<<"No se puede insertar el valor"<<endl;
}

int obtener(int pos)
{
	if(pos <= tamano)
	{
		return *arreglo[pos];
	}
	return 0;
}

void eliminar (int pos)
{
	if(pos<= tamano)
	{
	*arreglo[pos] = NULL;
	cant--;
		for(int x = pos; x < tamano; x++)
			arreglo[x] = arreglo[x+1];
	}
}

void duplicarLista(int* arreglo,int tamano)
{
	int* arr = new int[tamano+1];
	arr = arreglo;
	for(int x = 0; x < tamano; x++)
        arreglo[x] = arr[x];
    tamano++;
}

void agregar( int valor)
{
	if(cant < tamano)
	{
        *arreglo[cant] = valor;
        cant++;
	}
	else
	{
		duplicarLista(*arreglo,tamano);
        *arreglo[cant] = valor;
		cant++;
    }
}

bool estaVacia()
{
	if(cant == 0)
		return true;
	return false;
}

int cantidad()
{
	return cant;
}

int main()
{
    return 0;
}
