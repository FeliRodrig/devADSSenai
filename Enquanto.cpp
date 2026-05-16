#include <iostream>
using namespace std;

int main() {
    // Estruturas de Repeticao
    // -- Repetir ações
    // Sintaxe - Como se escreve

    // 1. While - Enquanto
    // ENQUANTO algo for verdade ele repete
    int senha = 0;
    cout << "Digite a Senha: ";
    cin >> senha;

    // Enquanto ele nao acertar a senha, ele nao passa (repete)
    while(senha != 1234) {
        cout << "Senha Incorreta! Tente Novamente";
        cin >> senha;
    }

    // While - Pergunta Primeiro, Repete Depois
    // Do While - Repete Primeiro, Pergunta Depois

    // 2. Do... While - Faca Enquanto
    // Opcoes - Fazer Algo e Sair
    
    /* EXEMPLO PARA DIFERENCIAR WHILE DE DOWHILE:
    
    int opcao;
    cout << "1- Pesquisar Produto, 2- Sair";
    cin >> opcao;
    while ( opcao != 2) {
    
        cout << "1- Pesquisar Produto, 2- Sair";
        cin >> opcao;
    }
    */

    int opcao;
    do {
        cout << "1 - Pesquisar Produto, 2 - Sair";
        cin >> opcao;
    } while(opcao != 2);
    
    // 3. FOR - PARA
    //Executa um numero limitado de vezes
    //Esquerda -> Cria uma variavel (i comeca em 0)
    //Meio -> Qual a condicao para continuar 
    //Direita -> Oque acontece quando termina de repetir
    //Acumulador -> i = i + 1
    
    for (int i = 0, i < 10, i++)
    {
        cout << i << endl;
    }
    


    return 0;
}