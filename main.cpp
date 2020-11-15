#include <iostream>
using namespace std;

void Mostrar(int numeros[]){
  for(int i = 0; i < 5; i++){
    cout << numeros[i] << " ";
  }
  cout << endl;
}

int main() {
  
  int numeros[5],n;
  int aux;

  //Ingresar datos
  cout << "Ingresa Maximo 5 numeros"<< endl;
  for(int i = 0; i < 5; i++){
    cin >> n; 
    numeros[i] = n;
  }

  //Metodo Burbuja
  for(int i = 0; i < 5; i++){
    Mostrar(numeros);
    for(int j = 0; j < 5; j++){
      
      if(numeros[j]>numeros[j+1]){
        aux = numeros[j];
        numeros[j] = numeros[j+1];
        numeros[j+1] = aux;
        Mostrar(numeros);
      }
    }
    cout << "Pasada " << i << ": ";
    Mostrar(numeros);
    cout << endl;
  }

}