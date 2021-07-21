#include <iostream>
#include <cmath>
using namespace std;

int EhPrimo(int numero, int count);
int main() {
    int numero,
        parada,
        count = 1,
        resultado;
    do{
        system("cls");
        cout<<"\nLegenda: false --> numero composto";
        cout<<"\n       : true --> numero primo";
        cout << "\nDigite um numero entre 1 e 100: ";
        cin >> numero;
        if(numero > 0 && numero < 101){
            resultado = EhPrimo(numero, count);
            if(resultado == 2)
                cout << "true";
            else
                cout << "false";
        }
        cout<< "\nDigite 0 para continuar ou qualquer outro numero para encerrar: ";
        cin >> parada;
    }while(parada == 0);
    return 0;
}
int EhPrimo(int numero, int count) {
    if(count == numero){
        return 1;
    }else{
        if(numero % count == 0){
            return 1 + EhPrimo(numero, count + 1);
        }else{
            return 0 + EhPrimo(numero, count + 1);
        }
    }
}
