#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string eq;

    while(getline(cin, eq)){
        stack<char> s;

        bool vali = true; 

        for (char ch : eq) {
            if (ch == '(') {
                s.push(ch);
            } else if (ch == ')') {
                if (s.empty()) {
                    vali = false;  // Encontrou um ')' sem '('
                    break;
                }
                s.pop();  // Remove o '(' correspondente
            }
        }

        // Verifica se ainda há '(' não fechados
        if (vali && s.empty()) {
            cout << "correct\n";
        } else {
            cout << "incorrect\n";
        }
    }

    return 0;
}
