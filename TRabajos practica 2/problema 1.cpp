#include<iostream>
#include<stdlib.h>
#define dim 10
using namespace std;
class Matriz{
	public:
		int fila, columna, matriz[dim][dim];
		void crear_matriz();
		void imprimir_matriz();
		void copiar_matriz(int m[dim][dim]);
};
void Matriz::copiar_matriz(int m[dim][dim])
{
	for (int i=0; i<fila; i++)
		for (int j=0; j<columna; j++)
			matriz[i][j]=m[i][j];
}

void Matriz::crear_matriz()
{	for (int i=0; i<fila; i++)
		for (int j=0; j<columna; j++){
			cout << "Fila " << i+1 << " columna " << j+1 << ": " ;
			cin>>matriz[i][j];
			}
}
void Matriz::imprimir_matriz()
{
	for(int i=0; i<fila;i++)
		for (int j=0; j<columna; j++)
			cout<<"[" << matriz[i][j] <<"]";
	cout<<endl;
}

void productMatrix(int p[dim][dim], int matrizA[dim][dim], int FilaA, int ColumnaA, int matrizB[dim][dim], int FilaB, int ColumnaB){
	int total=0;
	if (ColumnaA==FilaB){
		for (int i=0; i<FilaA;i++){
			for (int j=0; i<ColumnaB;j++){
			 	for (int k=0; k<ColumnaA;k++){
			 		total=matrizA[i][k]*matrizB[k][j];
			 	}
			 	p[i][j]=total;
			 	total=0;
			} 	
		}
	}
	else 
		cout<<"Estas dos matrices no pueden multiplicarse"<<endl;
}

int main(){
	Matriz A, B ;
	cout<<"numero de filas de Matriz 1 \n";
	cin>>A.fila;
	cout<<"numero de columnas de Matriz 1 \n";
	cin>>A.columna;
	A.crear_matriz();
	A.imprimir_matriz();
	system("cls");

	cout<<"numero de filas de Matriz 2 \n";
	cin>>B.fila;
	cout<<"numero de columnas de Matriz 2 \n";
	cin>>B.columna;
	B.crear_matriz();
	B.imprimir_matriz();
	system("cls");
	
	cout<<"El producto matriz de ambas matrices es \n";
	int mP[dim][dim];
	productMatrix(mP, A.matriz, A.fila , A.columna, B.matriz, B.fila, B.columna);
	Matriz Resultado;
	Resultado.fila=A.fila;
	Resultado.columna=B.columna;
	Resultado.copiar_matriz(mP);
	Resultado.imprimir_matriz();
	system("pause");
	return 0;
}
