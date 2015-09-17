#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

char movimiento(){
	char mov;
	cout << "Ingresar" << endl; 
	cout << "w = arriba" << endl;
	cout << "s = abajo"  << endl;
	cout << "a = izquierda"<<endl;
	cout << "d = derecha"<<endl;
	cin >> mov;
	while (mov != 'w' && mov!= 's' && mov!= 'a' && mov!= 'd'){
		cout << "Vuelva a ingresar Movimiento: ";
		cin >> mov;
	}
	return mov;
}

void limpiar_matriz(string matriz[10][10]){
	
	for (int i=0; i<10; i++){
		for (int j=0; j<10; j++)
			matriz[j][i]=" ";
	}
}

void imprimir_matriz(string matriz[10][10]){
	cout << "  _ _ _ _ _ _ _ _ _ _" << endl;
	for (int i=0; i<10; i++){
		cout << "|";
		for (int j=0; j<10; j++){
			cout << matriz[i][j] << " " ;
		}
		cout << endl;
	}
}

int juego(int nivel, string matriz[10][10]){
	char mov;
	if (nivel==1){
		matriz[0][0]="*";
		matriz[0][5]="0";
		matriz[4][4]="0";
		matriz[3][8]="}";
		imprimir_matriz(matriz);
		mov = movimiento();
		if (mov=='d'){
			matriz[0][0]=" ";
			matriz[0][4]="*";
			imprimir_matriz(matriz);
			mov = movimiento();
			if (mov=='s'){
				matriz[0][4]=" ";
				matriz[3][4]="*";
				imprimir_matriz(matriz);
				mov=movimiento();
				if (mov=='d'){
					cout<<"Pasaste el primer nivel"<<endl;
					return 1;
				}
				else
					return 0;
			}
			else
				return 0;
		}
		else			
			return 0;
	}
	
	if (nivel==2){
		limpiar_matriz(matriz);
		matriz[6][0]="*";
    	matriz[3][9]="}";
        matriz[6][9]="O";
        matriz[5][2]="O";
        matriz[4][8]="O";
        matriz[3][3]="O";
    	matriz[2][7]="O";
        imprimir_matriz(matriz);
		mov = movimiento();
		if (mov=='d'){
			matriz[6][0]=" ";
			matriz[6][8]="*";
			imprimir_matriz(matriz);
			mov = movimiento();
			if (mov=='w'){
				matriz[6][8]=" ";
				matriz[5][8]="*";
				imprimir_matriz(matriz);
				mov = movimiento();
				if (mov=='a'){
					matriz[5][8]=" ";
					matriz[5][3]="*";
					imprimir_matriz(matriz);
					mov = movimiento();
					if (mov=='w'){
						matriz[5][3]=" ";
						matriz[4][3]="*";
						imprimir_matriz(matriz);
						mov=movimiento();
						if (mov=='d'){
							matriz[4][3]=" ";
							matriz[4][7]="*";
							imprimir_matriz(matriz);
							mov=movimiento();
							if (mov=='w'){
								matriz[4][7]=" ";
								matriz[3][7]="*";
								imprimir_matriz(matriz);
								mov=movimiento();
								if (mov=='d'){
									cout<<"Pasaste el segundo nivel"<<endl;
									return 1;
								}
								else
									return 0;
							}
							else 
								return 0;
						}
						else
							return 0;
					}
					else
						return 0;
				}
				else 
					return 0;
			}
			else 
				return 0;
		}
		else 
			return 0;
	}		
	if (nivel==3){
		limpiar_matriz(matriz);
		matriz[5][4]="*";
    	matriz[5][5]="{";
        matriz[5][2]="O";
        matriz[6][4]="O";
        matriz[8][2]="O";
        matriz[3][3]="O";
    	matriz[8][5]="O";
    	matriz[8][6]="O";
    	matriz[7][6]="O";
        matriz[2][5]="O";
        matriz[3][3]="O";
        matriz[4][7]="O";
        matriz[6][8]="O";
    	matriz[4][8]="O";
    	matriz[6][5]="O";
        imprimir_matriz(matriz);
		mov = movimiento();
		if (mov=='a'){
			matriz[5][4]=" ";
			matriz[5][3]="*";
			imprimir_matriz(matriz);
			mov = movimiento();
			if (mov=='w'){
				matriz[5][3]=" ";
				matriz[4][3]="*";
				imprimir_matriz(matriz);
				mov = movimiento();
				if (mov=='d'){
					matriz[4][3]=" ";
					matriz[4][6]="*";
					imprimir_matriz(matriz);
					mov = movimiento();
					if (mov=='s'){
						matriz[4][6]=" ";
						matriz[6][6]="*";
						imprimir_matriz(matriz);
						mov = movimiento();
						if (mov=='d'){
							matriz[6][6]=" ";
							matriz[6][7]="*";
							imprimir_matriz(matriz);
							mov = movimiento();
							if (mov=='w'){
								matriz[6][7]=" ";
								matriz[5][7]="*";
								imprimir_matriz(matriz);
								mov = movimiento();
								if (mov=='a'){
									cout<<"Pasaste el Tercer nivel"<<endl;
									return 1;
								}
								else
									return 0;
							}
							else
								return 0;
						}
						else
							return 0;
					}
					else
						return 0;
				}
				else
					return 0;
			}
			else
				return 0;
		}
		else
			return 0;
	}
	
	if (nivel==4){
		limpiar_matriz(matriz);
		matriz[0][2]="*";
    	matriz[9][2]="O";
        matriz[3][4]="O";
        matriz[7][5]="O";
        matriz[4][6]="}";
        matriz[6][2]="-";
        imprimir_matriz(matriz);
		mov = movimiento();
		if (mov=='s'){
			matriz[0][2]=" ";
			matriz[8][2]="*";
			matriz[6][2]="O";
			imprimir_matriz(matriz);
			mov = movimiento();
			if (mov=='w'){
				matriz[8][2]=" ";
				matriz[7][2]="*";
				imprimir_matriz(matriz);
				mov = movimiento();
				if (mov=='d'){
					matriz[7][2]=" ";
					matriz[7][4]="*";
					imprimir_matriz(matriz);
					mov = movimiento();
					if (mov=='w'){
						matriz[7][4]=" ";
						matriz[4][4]="*";
						imprimir_matriz(matriz);
						mov = movimiento();	
						if (mov=='d'){
							cout<<"Pasaste el Cuarto nivel"<<endl;
							return 1;
						}
						else
							return 0;
					}
					else
						return 0;
				}
				else
					return 0;
			}
			else
				return 0;
		}
		else
			return 0;
	
	}

if (nivel==5){
		limpiar_matriz(matriz);
		matriz[2][9]="*";
    	matriz[2][3]="O";
        matriz[6][6]="O";
        matriz[4][2]="{";
        matriz[2][7]="-";
        matriz[3][6]="-";
        imprimir_matriz(matriz);
		mov = movimiento();
		if (mov=='a'){
			matriz[2][9]=" ";
			matriz[2][4]="*";
			matriz[2][7]="O";
			imprimir_matriz(matriz);
			mov = movimiento();
			if (mov=='d'){
				matriz[2][4]=" ";
				matriz[2][6]="*";
				imprimir_matriz(matriz);
				mov = movimiento();
				if (mov=='s'){
					matriz[2][6]=" ";
					matriz[5][6]="*";
					matriz[3][6]="O";
					imprimir_matriz(matriz);
					mov = movimiento();
					if (mov=='w'){
						matriz[5][6]=" ";
						matriz[4][6]="*";
						imprimir_matriz(matriz);
						mov = movimiento();	
						if (mov=='a'){
							cout<<"Pasaste el Quinto nivel"<<endl;
							return 1;
						}
						else
							return 0;
					}
					else
						return 0;
				}
				else
					return 0;
			}
			else
				return 0;
		}
		else
			return 0;
	
	}

	
	
	else
		return 0;
}

int main(){

	cout <<"BIENVENIDO AL ROADBLOCKS"<<endl;
	cout << endl;
	cout <<"------> Este eres tu *"<<endl;
	cout <<"------> Tu objetivo es }"<<endl;
	cout <<"------> Paredes son O"<<endl;
	cout <<"------> Trampas -"<<endl;
	cout << endl;
	cout <<"Ingrese su nombre"<<endl;
	
	string nombre;
	cin >> nombre;
	
	cout << "BIENVENIDO "<< nombre<<endl;
	cout << "Seleccione su opcion: "<<endl;
	cout << "Elegir nivel ----> 9"<<endl;
	
	int p;
		cin >> p;
	if (p==9)
		cout << "ingresa numero de nivel 1-5"<<endl;
    int nivel;
    cin>> nivel;
    while (nivel>6 or nivel<1){
	    cout << "Nivel disponible de la siguente actualizacion" <<endl;
        cin>> nivel;
	}
	
	bool winner;
	string matriz[10][10];
	limpiar_matriz(matriz);
	
	
	while (nivel<6){
		winner=juego(nivel,matriz);
		if (winner==true)
			cout << "You are the CHAMPION" << endl;
		else
			cout << "You are LOSSER" << endl;
		nivel++;
		getch();
	}
	getch();	
	return 0;

}
