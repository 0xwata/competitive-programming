#include <iostream>
#include <stdio.h>
using namespace std;

static const int MAX = 100;

int main() {

  // --- 標準入力読込開始 ---
  int R[MAX], n;

  cin >> n;
  for (int i =0; i < n; i++) {
      cin >> R[i];

      // --- 初期の要素の順番を出力する必要がある ---
      if(i>0) printf(" ");
      printf("%d", R[i]);
  }
  printf("\n");

  // 標準入力読込終了 ---

  // insertion_sort ---

  for (int i=1; i<n; i++) {
    int v = R[i];
    int j = i - 1;
    while(j >= 0 && R[j] > v) {
      R[j+1] = R[j];
      j--;
    }
    R[j+1] = v;

    // --- 標準出力開始 ---

    for (int i =0; i < n; i++) {
      if(i>0) printf(" ");
      printf("%d", R[i]);
  }
  printf("\n");

    // --- 標準出力終了

  };
}