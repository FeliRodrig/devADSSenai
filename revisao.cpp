// Criar o esqueleto do codigo
#include <iostream>
using namespace std;

int main () {
    // Variaveis
    // <TIPO> nome
    int idade = 18;
    string nome;

    idade = 23;

    // Constantes
    const int MAIORIDADE = 18; //boa pratica: capslock em nomes de constantes.

    // Leitura e escrita de dados (Console)
    // Ler Dados - REceber informacao do usuario
    // Console In (cin)
    cin >> nome;
    // getLine (cin, nome)

    // Escrever dados - Mostrar algo no Console
    // Console Out (cout)
    // Concatenar - Juntar  textos 
    // End Line (endl)
    cout << "O seu nome e: " << nome << ", seja bem vindo!" << endl; 

    // Condicionais (if / else) - se / senao
    // 4 cenarios : Idade invalida, crianca, adolescentes, adulto
    if (idade < 0) {
        cout << "Idade Invalida" << endl;
    }
    else if (idade < 12) {
        cout << "Crianca" << endl;
    }
    else if (idade < MAIORIDADE) {
        cout << "Adolescente" << endl;
    }
    else {
        cout << "Adulto" << endl;
    }
    


    return 0;
}