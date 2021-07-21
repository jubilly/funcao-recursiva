#include <iostream>

using namespace std;

float mediaVetor(int numero[], int tamanho);

int main(){
    int tamanho = 5;
    int c = 0;
    int numero[tamanho];
    float resultado;
    cout<< "\nPreencha o vetor de 5 posicoes ";
    for(int i = 0; i < tamanho; i++){
        cout<< "\nDigite o numero da posicao " << i + 1<< ": ";
        cin >> numero[i];
    }
    system("cls");
    cout<< "\nVetor digitado: ";
    for(int j=0; j<tamanho;j++){
         cout<< numero[j];
        if(j != 4){
            cout << ", ";
        }else{
            cout << ".\n";
        }
    }
    cout << "\n";
    cout<< "\nA media do vetor digitado eh: ";
    resultado =  mediaVetor(numero, tamanho);
    cout << resultado / tamanho;


    return 0;
}
float mediaVetor(int numero[], int tamanho){
    int numerador;
    float media;
    if(tamanho == 1){
        return numero[0] / tamanho;
    }else{
        return numero[tamanho-1] + mediaVetor(numero, tamanho-1);
    }
}