 #include <iostream>
using namespace std;
int main() {
int matriz[2][4];
matriz[0][0] = 6;
matriz[0][1] = 0;
matriz[0][2] = 9;
matriz[0][3] = 6;
matriz[1][0] = 2;
matriz[1][1] = 0;
matriz[1][2] = 1;
matriz[1][3] = 1;

for(int i = 0; i < 2; i++)
for(int j = 0; j < 4; j++)
cout << matriz[i][j] << "  ";

cout << endl;
return 0;
}
