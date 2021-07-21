#include <iostream>

using namespace std;

int menorNumero(int numero[], int tamanho);

int main(){
    int tamanho = 10;
    int c = 0;
    int numero[tamanho];
    cout<< "\nPreencha o vetor de 10 posicoes ";
    for(int i = 0; i < tamanho; i++){
        cout<< "\nDigite o numero da posicao " << i + 1<< ": ";
        cin >> numero[i];
    }
    system("cls");
    cout<< "\nVetor digitado: ";
    for(int j=0; j<tamanho;j++){
         cout<< numero[j];
        if(j != 9){
            cout << ", ";
        }else{
            cout << ".\n";
        }
    }
    cout << "\n";
    cout<< "\nO menor numero eh: ";
    cout << menorNumero(numero, tamanho);

    return 0;
}
int menorNumero(int numero[], int tamanho){
 
    if(tamanho == 1){
        return numero[0];
    }
    int menor = menorNumero(numero + 1, tamanho - 1);
    if(numero[0] < menor){
        return numero[0];
    }else{
        return menor;
    }    
}