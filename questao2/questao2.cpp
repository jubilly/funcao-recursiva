#include <iostream>

using namespace std;
int converteBinario(int numeroDecimal);

int main (){
    int numeroDecimal;
    cout <<"\nDigite um numero decimal: ";
    cin >> numeroDecimal;
    converteBinario(numeroDecimal);
    return 0;
}

int converteBinario(int numeroDecimal){
    int tamanho = 0;
    int vetor[tamanho];
    int numero = numeroDecimal;
    int resto;
        if(numero == 0){
            return 0;
        }else{
            resto = numero % 2;
            numero = numero / 2;
            vetor[tamanho] = resto;
            tamanho++;
            converteBinario(numero);
        }
        for(int i = tamanho - 1; i >= 0; i--){
           cout << vetor[i];
        }
    return 0;
}