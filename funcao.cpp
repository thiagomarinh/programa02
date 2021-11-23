#include <iostream> 
#include <string>  
using namespace std;

void incrementaNumero(int &);

int main(){
    int numero = 1;
    incrementaNumero(numero);
    
}


void incrementaNumero(int &numero) { 

    for(int i=1 ; i<=10; i++){
        numero =+ i;
        cout << numero << "\n";
    }
}
