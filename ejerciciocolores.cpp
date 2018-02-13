#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int const N = 3;
int const MAX = 15;
typedef int tMatrix[N][N];

void colorFondo(int color);
void numeros();
void matriz(tMatrix matrix);
void escribirmatriz(tMatrix matrix);
void diagonal(tMatrix matrix);
void diagonalinversa(tMatrix matrix);

int main(){
	tMatrix matrix;
	numeros();
	matriz(matrix);
	escribirmatriz(matrix);
	diagonal(matrix);
	//diagonalinversa(matrix);
	system("pause");
	return 0;
}

void colorFondo(int color)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, 15 | (color << 4));
}

void numeros(){
	for (int i = 1; i < MAX; i++){
		colorFondo(i);
		cout << setw(2) << i;
	}
}

void matriz(tMatrix matrix){

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			do{
				cin >> matrix[i][j];
			} while (matrix[i][j] > 100);
		}
	}
}

void escribirmatriz(tMatrix matrix){
	int cont = 0;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cont++;
			colorFondo(cont);
			cout << setw(2) << matrix[i][j];
		}
		cout << endl;
	}
}

void diagonal(tMatrix matrix){
	matriz(matrix);
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			colorFondo(5);
			if (i == j){
				colorFondo(8);
			}
			cout << setw(2) << matrix[i][j];
		}
		cout << endl;
	}
	
}

/*void diagonalinversa(tMatrix matrix){
	matriz(matrix);
	for (int i = 0; i < N; i++){
		colorFondo(5);
		if (){
			colorFondo(8);
		}
		cout << setw(2) << matrix[i][j];
	}
}*/
