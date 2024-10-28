#include <iostream>
#include <vector>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> arr;

        for(int j=0; j<n; j++){
            int elem;
            cin >> elem;
            arr.push_back(elem);
        }

        for(int j=0; j<n; j++){
            vector<vector<int>> non;
            for(int k=0; k<n; k++){
                if(k==j){
                    break;
                }else{
                    
                }
            }
        }
    }


    return 0;
}