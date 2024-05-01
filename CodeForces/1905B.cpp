#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
 
int main() {
    int tests;
    cin >> tests;
    for (int testno = 0; testno < tests; ++testno) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < 2*(n-1); ++i) {
            cin >> arr[i];
        }
        map<int, int> arr2;
        for (int i = 0; i < 2*(n-1); ++i) {
            arr2[arr[i]]++;
        }
        long long sum = 0;
        for (auto &t : arr2) {
            if (t.second > 2) {
                sum ++;
            }
            cout<<t.first<<t.second<<endl;
        }
        cout << sum << endl;
    	
    }
    return 0;
}