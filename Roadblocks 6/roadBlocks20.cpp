#include<iostream>
#include<conio.h>
#include<stdlib.h> 
#include<string>

using namespace std;

char movimiento(){
	char mov;
	cout << "Ingresar:" <<endl;
	cout << " w = arriba" << endl;
	cout << " s = abajo" <<endl;
	cout << " a = izquierda"<<endl;
	cout << " d = derecha"<< endl;
	cout << " Si deseas ir a  menu, presiona m" <<endl;
	cout << " Si quieres reiniciar el juego presiona r" << endl;
	cin >> mov;
	while (mov != 'w' && mov!= 's' && mov!= 'a' && mov!= 'd' && mov!='r' && mov!='m'){
		cout << "Vuelva a ingresar Movimiento: ";
		cin >> mov;
	}
	return mov;
}

void limpiar_matriz(string matriz[20][20]){
	
	for (int i=0; i<20; i++){
		for (int j=0; j<20; j++)
			matriz[i][j]=" ";	
	}
}

void imprimir_matriz(string matriz[20][20]){
	cout << " _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;			
	for (int i=0; i<20; i++){
		cout << "|";
		for (int j=0; j<20; j++){
			cout << matriz[i][j] << " " ;
		}
		cout << endl;
	}
}

int jugar(char mov, string matriz[20][20], int v[2]){
	int x, y;
	x=v[0];
	y=v[1];
	if (mov == 'w'){
		int i=x;
		for (x; x>0; x--){
			if (matriz[x-1][y]=="O"){
				matriz[i][y]=" ";
				matriz[x][y]="*";
				v[0]=x;
				return 0;				
			}
			if (matriz[x][y]=="-")
				matriz[x][y]="O";
			if (x-1==0){
				matriz[i][y]=" ";
				matriz[x-1][y]="*";
				return 2;
			}
		}					
	}
	else if (mov == 's'){
		int i=x;
		for (x; x<19; x++){
			if (matriz[x+1][y]=="O"){
				matriz[i][y]=" ";
				matriz[x][y]="*";
				v[0]=x;
				return 0;
			}
			if (matriz[x][y]=="-")
				matriz[x][y]="O";
			if (x+1==19){
				matriz[i][y]=" ";
				matriz[x+1][y]="*";
				return 2;
			}
		}
	}
	else if (mov == 'a'){
		int j=y;
		for (y; y>0; y--){
			if (matriz[x][y-1]=="O"){
				matriz[x][j]=" ";
				matriz[x][y]="*";
				v[1]=y;
				return 0;				
			}
			if (matriz[x][y]=="-")
				matriz[x][y]="O";
			if (matriz[x][y-1]=="{"){
				matriz[x][j]=" ";
				matriz[x][y]="*";
				v[1]=y;
				return 1;
			}
			if (y-1==0){
				matriz[x][j]=" ";
				matriz[x][y-1]="*";
				return 2;
			}
		}
	}
	else if (mov == 'd'){
		int j=y;
		for (y; y<19; y++){
			if (matriz[x][y+1]=="O"){
				matriz[x][j]=" ";
				matriz[x][y]="*";
				v[1]=y;
				return 0;				
			}
			if (matriz[x][y]=="-")
				matriz[x][y]="O";
			if (matriz[x][y+1]=="}"){
				matriz[x][j]=" ";
				matriz[x][y]="*";
				v[1]=y;
				return 1;
			}
			if (y+1==19){
				matriz[x][j]=" ";
				matriz[x][y+1]="*";
				return 2;
			}
		}
	}
}

void mapas(int nivel, string matriz[20][20], int v[2]){
	char mov;
	if (nivel==1){
		matriz[10][3]="*";
		matriz[6][5]="O";
		matriz[14][6]="O";
		matriz[8][8]="O";
		matriz[13][9]="O";
		matriz[11][10]="O";
		matriz[5][15]="O";
		matriz[7][10]="{";
		matriz[14][15]="O";
		matriz[10][16]="O";
		matriz[6][17]="O";
		matriz[9][18]="O";
		v[0]=10;
		v[1]=3;
	}
	if (nivel==2){
		limpiar_matriz(matriz);
		matriz[10][5]="*";
    	matriz[11][7]="O";
    	matriz[11][8]="O";
    	matriz[11][9]="O";
    	matriz[11][10]="O";
        matriz[10][10]="O";
        matriz[9][10]="O";
        matriz[4][8]="O";
        matriz[5][8]="O";
        matriz[6][8]="O";
        matriz[4][9]="O";
    	matriz[4][10]="O";
    	matriz[5][13]="}";
    	v[0]=10;
    	v[1]=5;
	}
	if (nivel==3){
		limpiar_matriz(matriz);
		matriz[7][7]="*";
    	matriz[5][3]="O";
        matriz[5][4]="O";
        matriz[4][6]="O";
        matriz[4][7]="O";
        matriz[4][8]="O";
    	matriz[4][9]="O";
    	matriz[5][9]="O";
    	matriz[8][9]="O";
        matriz[8][10]="O";
        matriz[8][11]="O";
        matriz[8][12]="O";
        matriz[12][6]="O";
    	matriz[13][6]="O";
    	matriz[13][7]="O";
    	matriz[13][8]="O";
    	matriz[13][9]="O";
    	matriz[12][13]="O";
    	matriz[13][13]="O";
    	matriz[14][13]="O";
    	matriz[9][14]="}";
    	v[0]=7;
    	v[1]=7;
	}
	if (nivel==4){
		matriz[2][3]="O";
		matriz[6][10]="{";
		matriz[1][6]="O";
		matriz[2][8]="O";
		matriz[2][9]="O";
		matriz[2][10]="O";
		matriz[4][15]="O";
		matriz[5][13]="O";
		matriz[5][14]="O";
		matriz[5][15]="O";
		matriz[4][15]="O";
		matriz[6][3]="O";
		matriz[6][4]="O";
		matriz[6][5]="O";
		matriz[6][9]="*";
		matriz[6][17]="O";
		matriz[7][5]="O";
		matriz[7][6]="O";
		matriz[7][17]="O";
		matriz[8][12]="O";
		matriz[8][13]="O";
		matriz[8][15]="O";
		matriz[9][15]="O";
		matriz[10][15]="O";
		matriz[11][15]="O";
		matriz[12][15]="O";
		matriz[11][16]="O";
		matriz[11][7]="O";
		matriz[11][8]="O";
		matriz[13][9]="O";
		matriz[14][9]="O";
		matriz[14][11]="O";
		matriz[14][14]="O";
		matriz[14][15]="O";
		v[0]=6;
    	v[1]=9;
    }
    if (nivel==5){
		matriz[0][1]="O";
		matriz[1][3]="O";
		matriz[2][0]="O";
		matriz[2][11]="O";
		matriz[3][0]="O";
		matriz[3][1]="O";
		matriz[3][16]="O";
		matriz[3][3]="*";
		matriz[3][4]="O";
		matriz[6][4]="O";
		matriz[6][8]="O";
		matriz[6][17]="O";
		matriz[7][2]="O";
		matriz[7][12]="O";
		matriz[8][9]="O";
		matriz[9][2]="O";
		matriz[9][15]="O";
		matriz[9][18]="O";
		matriz[10][10]="}";
		matriz[10][18]="O";
		matriz[12][9]="O";
		matriz[13][5]="O";
		matriz[13][14]="O";
		matriz[14][1]="O";
		matriz[15][18]="O";
		matriz[15][8]="O";
		matriz[15][17]="O";
		matriz[16][3]="O";
		matriz[16][16]="O";
		matriz[16][15]="O";
		matriz[17][12]="O";
		matriz[18][7]="O";
		v[0]=3;
    	v[1]=3;
    }
    if (nivel==6){
		matriz[0][15]="O";
		matriz[1][18]="O";
		matriz[2][15]="-";
		matriz[3][5]="O";
		matriz[3][16]="}";
		matriz[4][10]="O";
		matriz[6][13]="O";
		matriz[7][4]="O";
		matriz[7][16]="O";
		matriz[8][6]="O";
		matriz[9][2]="O";
		matriz[10][6]="O";
		matriz[11][9]="O";
		matriz[13][11]="O";
		matriz[13][14]="-";
		matriz[14][2]="O";
		matriz[14][3]="O";
		matriz[14][11]="O";
		matriz[14][17]="O";
		matriz[15][5]="O";
		matriz[16][14]="O";
		matriz[17][10]="O";
		matriz[17][12]="O";
		matriz[18][5]="O";
		matriz[18][7]="O";
		matriz[1][2]="O";
		matriz[2][2]="O";
		matriz[4][1]="O";
		matriz[8][1]="O";
		matriz[10][7]="O";
		matriz[1][7]="O";
		matriz[13][19]="O";
		matriz[18][2]="*";
		v[0]=18;
    	v[1]=2;
    }
}

void mapa_personalizado(string matriz[20][20], int v[2]){

	cout << "CREAREMOS NUESTRO MAPA\n" << endl;
	int x, y;
	
	cout << "Crearemos nuestro *\n\nIngrese coordenadas" << endl;
	cout << "Fila: " ;
	cin >> x;
	while (x<0 or x>19){
		cout << "Vuelva a Ingresar Fila: " ;
		cin >> x;
	}
	cout << "Columna: " ;
	cin >> y;
	while (y<0 or y>19){
		cout << "Vuelva a Ingresar Columna: " ;
		cin >> y;
	}
	v[0]=x;
	v[1]=y;
	matriz[x][y]="*";
	system("cls");
	imprimir_matriz(matriz);
	cout << "Continuar" ;
	getch();
	
	int obstaculos;
	cout << "\n\nCuantos obstaculos deseas??: ";
	cin >> obstaculos;
	while (obstaculos>0){
		cout << "\nNos faltan " << obstaculos << " obstaculo/s \nIngrese coordenadas" << endl;
		cout << "Fila: " ;
		cin >> x;
		while (x<0 or x>19){
			cout << "Vuelva a Ingresar Fila: " ;
			cin >> x;
		}
		cout << "Columna: " ;
		cin >> y;
		while (y<0 or y>19){
			cout << "Vuelva a Ingresar Columna: " ;
			cin >> y;
		}
		matriz[x][y]="O";
		system("cls");
		imprimir_matriz(matriz);
		cout << "continuar" ;
		getch();
		cout << endl;
		obstaculos--;
	}
	
	int trampa;
	cout << "\n\nCuantos trampas deseas??: ";
	cin >> trampa;
	while (trampa>0){
		cout << "\nNos faltan " << trampa << " trampa/s \nIngrese coordenadas" << endl;
		cout << "Fila: " ;
		cin >> x;
		while (x<0 or x>19){
			cout << "Vuelva a Ingresar Fila: " ;
			cin >> x;
		}
		cout << "Columna: " ;
		cin >> y;
		while (y<0 or y>19){
			cout << "Vuelva a Ingresar Columna: " ;
			cin >> y;
		}
		matriz[x][y]="-";
		system("cls");
		imprimir_matriz(matriz);
		cout << "continuar" ;
		getch();
		cout << endl;
		trampa--;
	}
	
	cout << "\nCrearemos nuestro } or {\n\nIngrese coordenadas" << endl;
	cout << "Fila: " ;
	cin >> x;
	while (x<0 or x>19){
		cout << "Vuelva a Ingresar Fila: " ;
		cin >> x;
	}
	cout << "Columna: " ;
	cin >> y;
	while (y<0 or y>19){
		cout << "Vuelva a Ingresar Columna: " ;
		cin >> y;
	}
	string llave;
	cout << "Ingrese que llave desea { or }: ";
	cin >> llave;
	while (llave!="{" and llave!="}"){
		cout << "Vuelva a Ingresar que llave desea: ";
		cin >> llave;
	}
	if (llave=="{")
		matriz[x][y]="{";
	else
		matriz[x][y]="}";
	system("cls");
	imprimir_matriz(matriz);
	cout << "Continuar" ;
	getch();
}

int juego(int nivel, string matriz[20][20]){
	int winner=0 , v[2];
	char mov;
	limpiar_matriz(matriz);
	if (nivel>0)
		mapas(nivel, matriz, v);
	else
		mapa_personalizado(matriz, v);
	system("cls");
	cout << "NIVEL " << nivel << endl;
	imprimir_matriz(matriz);
	while(winner==0){
		mov=movimiento();
		if (mov=='m'){
			winner=3;
			return winner;
		}
		else if (mov=='r'){
			winner=0;
			return winner;
		}
		system("cls");
		cout << "NIVEL " << nivel << endl;
		winner=jugar(mov, matriz, v);
		imprimir_matriz(matriz);
	}
	if (winner==2)
		winner=0;
	return winner;
}

int main(){

	cout <<"BIENVENIDO AL ROADBLOCKS"<<endl;
	cout <<"--> Este eres tu *"<<endl;
	cout <<"---> Tu objetivo es }"<<endl;
	cout <<"----> Obstaculos son O"<<endl;
	cout <<"------> Trampas -"<<endl;
	cout <<"Ingrese su nombre"<<endl;
	
	string nombre;
	cin >> nombre;
	string matriz[20][20];
	
	int modo;
	
	while (modo!=3){
		system("cls");
		cout << nombre << " BIENVENIDO"<<endl;
		cout << "Seleccione su opcion:"<<endl;
		cout << "  1 = Niveles\n  2 = Modo Personalizado\n  3 = Salir"<<endl;
		cin >> modo;
		while (modo>3 or modo<1){
			cout << "\nValor erronero VUELVA A INGRESAR Opcion" << endl;
			cin >> modo;
		}	
		if (modo==1){
			cout << "Ingresa numero de nivel 1-6"<<endl;
			int nivel;
		    cin >> nivel;
		    while (nivel>7 or nivel<1){
			    cout << "Nivel disponible de la siguente actualizacion" <<endl;
		        cin>> nivel;
			}
	
			int winner=0;

			while (nivel<7 and winner!=2){
				system("cls");
				winner=juego(nivel,matriz);
				if (winner==1){
					cout << "You are the CHAMPION" << endl;
					nivel++;
					getch();
				}
				else if (winner==0){
					cout << "You are LOSSER\nERES UN NOOB -.-\n\nNivel reseteado" << endl;
					getch();
				}
				else if	(winner==3)
					winner=2;
			}
		}
		else if (modo==2){
			system("cls");
			int v[2];
			limpiar_matriz(matriz);
			int nivel=0, winner=0;
			winner=juego(nivel,matriz);
			system("cls");
			while (winner==0){
				system("cls");
				winner=juego(nivel,matriz);
				if (winner==1){
					cout << "You are the CHAMPION" << endl;
					nivel++;
					getch();
				}
				else if (winner==0){
					cout << "You are LOSSER\nERES UN NOOB -.-\n\nNivel reseteado" << endl;
					getch();
				}
				else if	(winner==3)
					winner=2;
			}	
			system("cls");
			getch();
		}
	}
	system("cls");
	cout << "TERMINO EL JUEGO BYE" ;
	getch();
	return 0;
}	
