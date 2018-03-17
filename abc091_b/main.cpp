#include <iostream>
#include <map>
using namespace std;

int main() {
    int n,m;
    string s[110];
    string t[110];
    cin >> n;
    for(int i=0; i<n;i++) cin >> s[i];
    cin >> m;
    for(int i=0; i<m;i++) cin >> t[i];
    map<string, int> result;
    for(int i=0; i<n; i++){
        if(result[s[i]]){
            result[s[i]]++;
        }else{
            result[s[i]] = 1;
        }
    }
    for(int i=0; i<m; i++){
        if(result[t[i]]){
            result[t[i]]--;
        }else{
            result[t[i]] = -1;
        }
    }
    int res=0;
    for(auto itr = result.begin(); itr != result.end(); ++itr){
        if(itr->second > res){
            res = itr->second;
        }
    }
    cout << res << endl;

    return 0;
}