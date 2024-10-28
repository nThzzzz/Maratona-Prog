#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int n;
    
    while (true) {
        cin >> n;
        if (n == 0) break; 

        while (true) {
            vector<int> sla(n);
            cin >> sla[0];
            
            if (sla[0] == 0) { 
                break;
            }
            
            for (int i = 1; i < n; i++) {
                cin >> sla[i];
            }

            stack<int> trem;
            int prx = 1; 
            bool sim = true;

            for (int i = 0; i < n; i++) {
                // Adiciona vagões na pilha até que o topo da pilha seja igual ao próximo
                while (prx <= n && (trem.empty() || trem.top() != sla[i])) {
                    trem.push(prx++);
                }
                // Se o topo da pilha é igual ao desejado, remove da pilha
                if (!trem.empty() && trem.top() == sla[i]) {
                    trem.pop();
                } else {
                    sim = false; // Se não é igual, a sequência não é possível
                    break;
                }
            }

            cout << (sim ? "Yes" : "No") << endl;
        }
        cout << endl;
    }

    return 0;
}