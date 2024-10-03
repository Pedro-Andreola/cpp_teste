#include <iostream>
using namespace std;
int main(){
  int soma = 0, indice = 13, k = 0;
  while(k < indice){
    k +=1;
    soma += k;
  }
  cout << "Soma = " << soma;
    return 0;
}
