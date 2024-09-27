#include <iostream>
#include <algorithm> // for std::sort

using namespace std;

int main() {
    int num[3];

    cin >> num[0] >> num[1] >> num[2];

    int original[3];
    copy(num, num + 3, original);

    sort(num, num + 3);
    cout << num[0] << endl;
    cout << num[1] << endl;
    cout << num[2] << endl;

    cout << original[0] << endl;
    cout << original[1] << endl;
    cout << original[2] << endl;

    return 0;
}
