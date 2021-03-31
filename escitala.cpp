#include <iostream>
#include <vector>
using namespace std;

void encriptar(int f,int c,string mensaje){

    string codigo[f][c];
    for (int i = 0; i < f; i++)//rellenar la matriz con el mensaje
    {
        for (int j = 0; j< c; j++)
        {
            int a;
            if (a>=mensaje.size()){//verifico si el string es menor; else relleno de espacios
                codigo[i][j]=" ";
            }
            else{
                codigo[i][j]=mensaje[a];}// sino continua
            a++;
        }
    }
    for(int i=0; i<c;i++){
        for(int j=0;j<f;j++){
                cout<<codigo[j][i]; //imprime codigo empriptado

        }
    }

};
void desencriptar(int f,int c,string mensaje){

    string codigo[f][c];

    for (int i = 0; i < c; i++)//rellenar la matriz con el mensaje
    {
        for (int j = 0; j< f; j++)
        {
            int a;
                codigo[j][i]=mensaje[a];// sino continua
            a++;
        }
    }
    for(int i=0; i<f;i++){
        for(int j=0;j<c;j++){
                cout<<codigo[i][j]; //imprime codigo desencriptado

        }
    }

};
int main(){
   /*string sms="From indirect evidence, the scytale was first mentioned by the Greek poet Archilochus, who lived in the 7th century BC";
    encriptar(10,15,sms);
    cout<<endl;*/
    string sms="Fvy hr t  ritmeclh  odae hi   melnGivc   netrlee  ic ieodn  newoec t  d,ankhiu  i se unr  rt dps y  ehf o,t   ceibe hB  t rytweC   ss  h    ecttAo7   ";
    desencriptar(10,15,sms);
 return 0;}
