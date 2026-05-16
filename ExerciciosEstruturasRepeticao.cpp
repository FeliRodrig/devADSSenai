#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "1. Apresentar os numeros de 1 a 10:" << endl;

    for(int i = 1; i <=10; i++)
    {
        cout << i << endl;
    }
    
    // segundo exercicio

    cout << "2. Apresenta a contagem regresiva de N a 1:" << endl;
    int n;
    cin >> n ;

    if (n <= 0)
    {
        cout << "Digite um numero maior que 1!!" << endl;
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            cout << i << endl;
        }
    }
    
    // terceiro exercicio
    
    cout << "3. Apresentar a soma de todos os inteiros de 1 ate N:" << endl;
    cout << "Insira um valor a N:" << endl;
    int n1;
    int x=0;
    cin >> n1;

    if (n1 <= 0)
    {
        cout << "Digite um numero maior que 1!!" << endl;
    }
    else
    {
        for (int i = 1; i <= n1; i++)
        {
            x = i+x;
            
        }
        cout << x << endl;
    }

    // quarto exercicio

    cout << "4. Apresentar a tabuada de 1 a 10 do numero N:" << endl;
    cout << "Insira um valor a N:" << endl;
    int n2;
    int x1;
    
    cin >> n2;

    for (int i = 0; i <= 10; i++)
    {
        x1= n2 * i;
        cout << x1 << endl;       
    }

    // quinto exercicio

    cout << "5. Leia uma palavra e um número N. Imprima a palavra N vezes." << endl;
    int n3;
    string word;
    
    cout << "Digite o numero de repeticoes: " << endl;
    cin >> n3;
    
    cout << " Digite a palavra que deseja: " << endl;
    cin >> word;    
    
    for (int i = 1; i <= n3; i++)
    {
        cout << word << endl;
    }
           
}