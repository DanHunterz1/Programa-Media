// Programa Media.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

int main(){
    int p1, p2, media;
    
    cout << "Digite sua primeira nota\n";
    cin >> p1;
    cout << "Digite sua segunda nota\n";
    cin >> p2;

    media = (p1 + p2) / 2;
    cout << "sua media eh:" << media;
    if (media >= 6) {
        cout << "Aprovado\n";
    }
    else {
        cout << "reprovado\n";
    }
}