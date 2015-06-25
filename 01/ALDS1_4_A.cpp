#include<cstdio>

int search(int A[], int n, int key) {
  int i = 0;
  A[n] = key;
  while (A[i] != key) {
    i++;
  }
  return i != n;
}


int main() {
  int n, q, A[10000+1], sum = 0, key;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }
  scanf("%d", &q);

  for (int i = 0; i < q; i++) {
    scanf("%d", &key);
    if (search(A, n, key)) sum++;
  }
  printf("%d\n", sum);
}
