#include <iostream>
#include "lib.h"
using namespace std;
int main(){
   char lista_nomi [10][20];
    char nome [20];

    init (lista_nomi, 10);
    init (nome, 20);

    for (int i=0; i<10; i++){
        cin>>lista_nomi[i];
    }
    cin>> nome;

    int z= ricerca (lista_nomi, nome);
    if (z==-1){
        cout<<"non presente"<<endl;
    } else {
        cout<<z<<endl;
    }
  
  return 0;
}
