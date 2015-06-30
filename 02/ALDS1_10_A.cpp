#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int F[50];

  for (int i = 2; i <= n; i++) F[i] = F[i - 1] + F[i - 2];
  cout << F[0] << endl;
  return 0;
}
