#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int n;
    
    while (cin >> n && n != 0) {
        queue<int> cards; 
        vector<int> discarded; 
        
        for (int i = 1; i <= n; i++) {
            cards.push(i);
        }

        while (cards.size() > 1) {
            discarded.push_back(cards.front());
            cards.pop();

            cards.push(cards.front());
            cards.pop();
        }

        int remainingCard = cards.front();

        cout << "Discarded cards: ";
        if (!discarded.empty()) {
            for (int i = 0; i < discarded.size(); i++) {
                if (i > 0) cout << ", ";
                cout << discarded[i];
            }
        }
        cout << endl;

        cout << "Remaining card: " << remainingCard << endl;
    }

    return 0;
}
