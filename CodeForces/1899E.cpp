#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string inputString,out;
    int count =0;
    cin >> inputString;
    out = inputString;
    sort(inputString.begin(), inputString.end());
    for(int i=0;i<out.length();i++){
        if(out[i]!=inputString[i]){
            count++;
        }
    }
    cout<<count;
}
