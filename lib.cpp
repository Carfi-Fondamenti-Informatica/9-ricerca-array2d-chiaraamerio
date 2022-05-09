#include "lib.h"

void init (char x[][20], int a){
    for (int i=0; i<a; i++){
        for (int j=0; j<20; j++){
            x[i][j]=0;
        }
    }
}

void init (char x[], int a){
    for (int i=0; i<a; i++){
        x[i]=0;
    }

}

int ricerca (char lista_nomi [10][20], char nome [20]){
    int c;
    for (int i=0; i<10; i++) {
        c = 0;
        for (int j = 0; j < 20; j++) {
            if (lista_nomi[i][j] == nome[j]) {
                c++;
            } else
                break;
        }
        if (c == 20) {
            return i;
        }
    }
    return -1;
    }
