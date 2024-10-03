#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    string str = "Target Sistemas";
    stack<char> pilha;
    for (char ch : str) {
        pilha.push(ch);
    }
    str.clear();
        while (!pilha.empty())
    {
        str += pilha.top();
        pilha.pop();
    }
    cout << "\n" << str;
    return 0;
}
