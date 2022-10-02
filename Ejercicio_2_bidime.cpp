/*Diseñe un programa que lea los elementos de una matriz de 4x5 reales y 
genere un vector de tamaño 4 en el que cada elemento contenga el sumatorio de 
los elementos de cada fila.*/
#include <iostream>
using namespace std;
int main()
{
	int Nums[4][5],suma[4],S;
	cout<<"Ingrese un numero para\n";
	for(int i=0 ; i<4 ; i++)
	{
		for(int j=0 ; j<5 ; j++)
		{
			cout<<"A["<<i<<"]["<<j<<"]: "; cin>>Nums[i][j];
		}
	}
	for(int i=0 ; i<4 ; i++)
	{
		S=0;
		for(int j=0 ; j<5 ; j++)
		{
			S=S+Nums[i][j];
			
		}
		suma[i]=S;
	}
	for(int i=0 ; i<4 ; i++)
	{
		cout<<"El nuevo vector es:\n"<<"A["<<i<<"]:"<<suma[i]<<endl;
	}
	return 0;
}
