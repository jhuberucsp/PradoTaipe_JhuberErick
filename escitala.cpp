#include <iostream>
#include <vector>
using namespace std;

string mensaje;
int f=10;
int c=15;
string codigo[10][15];
//string sms(mensaje,fila,columna);
int main(){
    mensaje="From indirect evidence, the scytale was first mentioned by the Greek poet Archilochus, who lived in the 7th century BC";//recorrer el string
    /*for(int a=0; a<mensaje.size() ;a++){}*/

    for (int i = 0; i < f; i++)//rellenar la matriz con el mensaje
    {
        for (int j = 0; j< c; j++)
        {
            int a;
            if (a>=mensaje.size()){//verifico si el string es menor relleno de espacios
                codigo[i][j]=" ";
            }
            else{
                codigo[i][j]=mensaje[a];}// sino continua
            a++;
             //cout<<codigo[i][j]<<endl;
             //cout<<j<<i<<endl;
        }
    }
    for(int i=0; i<c;i++){
        for(int j=0;j<f;j++){
                cout<<codigo[j][i]; //imprime codigo empriptado

        }
    }

    //cout<<codigo[0][0]<<endl;

 return 0;}
