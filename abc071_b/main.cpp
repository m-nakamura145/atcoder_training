#include <iostream>
using namespace std;

int main() {
    bool b[26] = {false};
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        b[s[i] - 'a'] = true;
    }
    for(int i=0;i<26;i++){
        if(!b[i]){
            cout << (char)('a' + i) << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}