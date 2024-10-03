#include <iostream>
using namespace std;
int main(){
  int val, ult = 1, penult = 0, temp;
  cout << "Digite um numero ";
  cin >> val;
  do{
    temp = ult;
    ult = penult + ult;
    penult = temp;
  }while(ult <= val);
  if(val == penult){
    cout << "\n O numero faz parte da sequencia de fibonacci";
  }else{
    cout << "\n O numero nao faz parte da sequencia de fibonacci";
  }
  return 0;
}
