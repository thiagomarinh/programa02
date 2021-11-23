#include <iostream> 
#include <string>  
#include <cstdlib>
#include <ctime>
using std::string;
using std::cout;
using namespace std;

void incrementaNumero(int &);    
void usandoRange();

int main(){

    srand(time(NULL));              // gera uma semente de acordo com o tempo do computador
    int numero = rand() % 100;    //gera numero aleatorio de 0 a 100
    incrementaNumero(numero);
    usandoRange();
    
}

void usandoRange(){ 
    string str = "Mundo";          
    for(char c:str)
        std::cout << c << endl;
}

void incrementaNumero(int &numero) { 

    for(int i=1 ; i<=10; i++){
        numero = numero +i;
        cout << numero << "\n";
    }
}
