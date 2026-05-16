//Fundamentais 01: Par ou ímpar: Leia um número inteiro e diga se ele é par ou ímpar.

#include <iostream>
using namespace std;

int main () {
    int num;
    int idade;

    cout << "FUNDAMENTAL 01 " << endl;
    cout << "Digite um numero: " << endl;
    cin >> num;
   

    if (num%2){
        cout << "This number is: IMPAR" << endl;
    }
    else {
        cout << "This number is: PAR" << endl;
    }


// Fundamentais 02: Maior de idade: Leia a idade de uma pessoa e mostre "Maior de idade" ou "Menor de idade".

    cout << "FUNDAMENTAL 02 " << endl;
    cout << "Informe sua idade: " << endl;
    cin >> idade;

    if (idade >= 18) {
        cout << "Voce e maior de idade." << endl;
    } else {
        cout << "Voce e menor de idade." << endl;
    }
    
//Fundamentais 03: Positivo, negativo ou zero: Leia um número e classifique-o nessas três categorias.

    cout << "FUNDAMENTAL 03" << endl;
    cout << "Informe o numero: " << endl;

    int num3;

    if (num3>0){
        cout << "Numero positivo" << endl;
    }
    else if (num3<0){
        cout << "Numero negativo" << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }
    
//Fundamentais 04: Maior de dois: Leia dois números e mostre qual é o maior. (Considere também o caso de serem iguais.)

    cout << "FUNDAMENTAL 04" << endl;
    cout << "Informe dois numeros: " << endl;

    int num4, num44;

    cin >> num4;
    cin >> num44;

    if (num4>num44) {
        cout << num4 + "Este numero e maior" << endl;
    }
    else if (num4<num44) {
        cout << num44 + "Este numero e maior" << endl;
    }
    else {
        cout << "Os numeros sao iguais"
    }

//Fundamentais 05: Aprovado ou reprovado: Leia uma nota de 0 a 10 e diga se o aluno foi aprovado (nota ≥ 6) ou reprovado.

    cout << "FUNDAMENTAL 05" << endl;
    cout << "Informe a nota do aluno: " << endl;
    
    int nota;

    cin >> nota;

    if (nota>= 6) {
        cout << "O aluno esta aprovado" << endl;
    }
    else {
        cout << "Aluno Reprovado!!"
    }

return 0;
}