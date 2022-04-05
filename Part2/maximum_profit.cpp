#include <iostream>
using namespace std;

static const int MAX = 200000;

int main() {

  // --- 標準入力読込開始 ---
  int R[MAX], n;

  cin >> n;
  for ( int i = 0; i < n; i++) cin >> R[i];

  // --- 標準入力読込修了 ---

  // --- maximum_profit ---
  int maxv = -999999999;
  int minv = R[0];

  // O(n)の計算量
  for ( int i = 1; i < n; i++ ) {
    maxv = max(maxv, R[i] - minv); // 最大値を更新
    minv = min(minv, R[i]); // ここまでの最小値を保持する
  }

  cout << maxv << endl;

  return 0;

}


/*
素朴なアルゴリズムの例
O(n^2)の計算量
for ( int i = 0; i < n; i++) {
    for ( int j = 0; i-1) {
    }
}
*/