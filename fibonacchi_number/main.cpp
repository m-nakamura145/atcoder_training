#include <iostream>
using namespace std;

bool done[101];
int memo[101];
int dp[101];

// fibonacchi number implemented by DP
int fib1(int n){
  if(n == 0){
      return 0;
  }
  if(n == 1){
      return 1;
  }
  if(done[n]) {
      return memo[n];
  }

  done[n] = true;
  return memo[n] = fib1(n -1) + fib1(n -2);
}

int fib2(int n){
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main() {
    int n = 10;
    cout << fib2(n) << endl;
    return 0;
}
