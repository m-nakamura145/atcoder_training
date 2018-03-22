#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool diff = true;
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(s[i] == s[j]){
                diff = false;
                break;
            }
        }
    }
    if(!diff){
        cout << "no" << endl;
    }else{
        cout << "yes" << endl;
    }

    return 0;
}