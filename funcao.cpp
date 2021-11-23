#include <iostream> 
#include <string>  
#include <cstdlib>
using namespace std;

void incrementaNumero(int &);
string forRange(string);

int main(){
    int numero = rand();
    incrementaNumero(numero);
    
    
}

string forRange(string){    
    string str = "Mundo";

    for(char c:str){
        std::cout << c << endl;
    }
}


void incrementaNumero(int &numero) { 

    for(int i=1 ; i<=10; i++){
        numero = numero +i;
        cout << numero << "\n";
    }
}
