#include <iostream>
using namespace std;
int main(){
  float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53;
  float total = sp + rj + mg + es + outros;
  cout << "Porcentagens por estado:\n SP:" << (sp/total)*100 << "%\n RJ:" << (rj/total)*100 << " %\n MG:" << (mg/total)*100 << "%\n ES:" << (es/total)*100 << "%\n Outros:" << (outros/total)*100 << " %\n";
}
