#include <set>
#include <iostream>

using namespace std;

int main(){
    string sl2;
    set<string> sla;

    while (cin >> sl2){
        sla.insert(sl2);
    }
    cout << sla.size() << endl;
    

    return 0;
}