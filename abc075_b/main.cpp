#include <iostream>
using namespace std;

int main() {
    int h,w;
    string field[60][60]={"."};
    string result[60][60];
    cin >> h >> w;
    for(int i=1;i<=h;i++){
        string s;
        cin >> s;
        for(int j=1;j<=w;j++){
            field[i][j] = s[j-1];
        }
    }

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(field[i][j] == "#"){
                result[i][j] = "#";
            }else{
                int count = 0;
                if(field[i-1][j-1] == "#") count++;
                if(field[i-1][j] == "#") count++;
                if(field[i-1][j+1] == "#") count++;
                if(field[i][j-1] == "#") count++;
                if(field[i][j+1] == "#") count++;
                if(field[i+1][j-1] == "#") count++;
                if(field[i+1][j] == "#") count++;
                if(field[i+1][j+1] == "#") count++;
                result[i][j] = to_string(count);
            }
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cout << result[i][j];
        }
        cout << endl;
    }
    return 0;
}