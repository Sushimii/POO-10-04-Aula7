
#include <iostream>
using namespace std; 

int main() {
    
    //Declaração de variavel do tipo inteiro junto com seu valor
    int Var = 3;
    
    //Declaração de ponteiro 
    int* pVar;
    
    //Fazendo a variavel "pVar" carregar o valor da variavel "Var"
    pVar = &Var;
    
    
    //Tela mostrando o valor da variavel "Var"
    cout << Var << endl;
    
    //Tela mostrando o valor da variavel "Var" que está sendo carregado pela  variavel 'pVar'
    cout << *pVar << endl;
    
    //Tela mostrando o endereço de memoria do programa
    cout << pVar << endl;

    return 0;
}