#include <iostream>
#include <math.h>
using namespace std;

int JosephusResolve(int pares){
    int i;
    int aux2 = 1;
    cout<< "O numero total de soldados tem " << pares << " numeros pares antecessores"
    << ", entao: " << endl;
    cout << "O algoritmo comeca a calcular o lugar ideal a partir de 1 ate " << pares << endl;
    cout << "Numero -> " << '1' << "    lugar ideal -> " << aux2 << endl;
    if (pares == 1)
        return 1;
    else{
    for(i=2; i<=pares; i++){
        aux2 = (aux2+1)%i+1;
        cout << "Numero -> " << i << "    lugar ideal -> ";
        cout << aux2 << endl;
    }
    cout << "Depois de encontrar o lugar ideal de " << i-1 << ", temos o resultado " << aux2 << endl;
    return aux2;
    }
};

int JosephusAcha(int n){
    int resultado;
    int pares = (n/2);
    resultado = JosephusResolve(pares);
    if ((n%2)==0){
        cout << "Como o numero total de soldados (" << n << ") e par, o algoritmo faz: " << endl << " Lugar seguro = ";
        cout << resultado << " x 2 - 1" << endl;
        cout << "  Lugar seguro =  " << resultado*2 << " - 1" << endl;
        return (resultado*2 -1);
    }
    else{
        cout << "Como o numero total de soldados (" << n << ") e impar, o algoritmo faz: " << endl << " Lugar seguro = ";
        cout << resultado << " x 2 + 1" << endl;
        cout << "  Lugar seguro =  " << resultado*2 << " + 1" << endl;
        return (resultado*2+1);
    }
};

int main(){
    int n;
    cout << "Entre com o numero de soldados = ";
    cin >> n;
    cout << endl <<"O lugar seguro e = " << JosephusAcha(n)<<endl;

    while (cin.get() != 'k') {
        cout << "Pressione k para sair -> ";
    }
  return 0;
};
