#include <iostream>
using namespace std;

int main() {
    int idade;
//cin = Console In (>>)
// cout = Console Out (<<)

    cout << "Informe sua idade: " << endl;
    cin >> idade;

    if (idade >= 18) {
        cout << "Voce e maior de idade." << endl;
    } else {
        cout << "Voce e menor de idade." << endl;
    }

    // Se é criança, adolescente ou adulto.

    if ( idade < 12) {
        cout << "Criança" << endl;
    }

    else if (idade < 20) {
        cout << "Adolescente" << endl;
    }

    else if (idade < 50) {
        cout << "Adulto" << endl;
    }

    else {
        
        cout << "Idoso" << endl;
    }

    // Para entrar: Ser maior de idade e ter ingresso.
    // Operadores Logicos - E (&&), OU || 
    bool temIngresso = true;

    // if (idade >= 18 && temIngresso == true)
    // if (idade >= 18 && temIngresso)

    // if (idade >= 18 && temIngresso == false)
    if (idade >= 18 && !temIngresso) {
        cout << "Pode entrar!" << endl;
    }

    return 0;
}