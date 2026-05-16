#include <iostream>
using namespace std;

int main () {
    // EXERCICIO 1.
    cout << "Ola, Vamos verificar se o unmero e positivo, negativo ou zero." << endl;
    cout << "Digite um numero: " << endl;
    int num;
    cin >> num;

    if (num == 0){
        cout << "O numero digitado e zero!" << endl;
    }
    else if (num >= 0) {
        cout << "O numero e positivo." << endl;
    }
    else {
        cout << "O numero e negativo" << endl;
    }
    cout << "" << endl;

    // EXERCICIO 2.
    cout << "Ola, agora vamos verificar qual nota sua nota no conceito de aprovacao da escola:" << endl;
    cout << "Digite sua nota:" << endl;
    int nota;
    cin >> nota;

    if (nota >= 9) {
        cout << "Sua nota: A!!!" <<  endl;
    }
    else if (nota >= 7 && nota < 9) {
        cout << "Sua nota: B." << endl;
    }
    else if (nota >= 5 && nota < 7 ) {
        cout << "Sua nota: C." << endl;
    }
    else {
        cout << "Sua nota: D (recuperacao)" << endl;
    }
    cout << "" << endl;

    // EXERCICIO 3.
    cout << "Ola, vamos classificar sua faixa etaria." << endl;
    cout << "Digite sua idade:" << endl;
    int idade;
    cin >> idade;

    if (idade >= 60) {
        cout << "Voce e um idoso." <<  endl;
    }
    else if (idade >= 18 && idade <= 59){
        cout << "Voce e um adulto." << endl;
    }
    else if (idade <= 17 && idade >= 12){
        cout << "Voce e um adolescente." << endl;
    }
    else {
        cout << "Voce e uma crianca" << endl;
    }
      
    return 0;
}