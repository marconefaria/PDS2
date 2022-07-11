#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int quantosNumeros(string valores){
    int x, numberCouting=1;

    for(x=0; x <(valores.length()); x++){
        if(valores[x] == ' ') {
            numberCouting++;
        }
    }

    return numberCouting;
}

int maxDiff(string valores){
    int maxDif=0, num_numeros, i, j=0, diferenca;
    string auxiliar;

    num_numeros = quantosNumeros(valores);
    int * numeros = new int[num_numeros];

    for(i=0; i<(valores.length()); i++){
            if(valores[i] != ' '){
                if((valores[i] != '-') && (valores[i-1] == '-')){
                    auxiliar = valores[i];
                    numeros[j] = -(atoi(auxiliar.c_str()));
                    ++j;
                }
                else{
                    auxiliar = valores[i];
                    numeros[j] = atoi(auxiliar.c_str());
                    ++j;
                }
            }else{
                continue;
            }
    }

    for(i=0; i<num_numeros; i++){
        diferenca = numeros[i+1] - numeros[i];
        if(diferenca > maxDif){
            maxDif = diferenca;
        }
    }

    return maxDif;
}
int main() {
    string valores;
    getline(cin, valores);

    cout << maxDiff(valores) << endl;
}

/*for(i=0; i<(valores.length()); i++){
        if(valores[i] != ' '){
            auxiliar = valores[i];
        }else{
            for(j=0; j<num_numeros; j++){
                numeros[j] = atoi(auxiliar.c_str());
            }
            auxiliar = " ";
        }
    }

    for(j=0; j<num_numeros; j++){
        cout << numeros[j]<< endl;
    }

    */
