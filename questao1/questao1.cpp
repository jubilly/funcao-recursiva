#include <iostream>

using namespace std;
int inverteNumero(int numero);

int main(){
    int numero;
    cout<< "\nDigite um numero: ";
    cin >> numero;
    inverteNumero(numero);
    return 0;
}
int inverteNumero(int numero){
    if(numero==0)
      return numero;
    else{
        cout << numero % 10;
        numero = numero / 10;
        return inverteNumero(numero);
    }
    return 0;
}

