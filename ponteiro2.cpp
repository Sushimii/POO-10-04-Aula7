
#include <iostream>
using namespace std; 

int main() {
    //Declaração de ponteiro
    int* ptr = new int;
    //Declaração do valor que o ponteiro vai carregar
    *ptr = 7 ;
    
    //Tela mostrando o valor que a variavel possui
    cout << *ptr << endl;
    //Tela mostrando o endereço de memoria do ponteiro
    cout << ptr << endl << endl;

//Apagando todas as informações do ponteiro 
delete ptr;

//Definindo o ponteiro como nulo
ptr = nullptr;
    
    //Mostrando novo valor da variavel 'ptr'
    cout << *ptr << endl;
    //Mostrando o novo endereço de memoria do ponteiro
    cout << ptr << endl;



 
}