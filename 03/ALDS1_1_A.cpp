#include <cstdio>

#define N 100


void print(int A[], int n) {
  for (int i = 0; i < n; i++) {
    if (i) printf(" ");
    printf("%d", A[i]);
  }
  printf("\n");
}


void isort(int A[], int n) {
  int i,j, key;
  for (i = 1; i<n; i++) {
    key = A[i];
    j = i - 1;
    while (j >= 0 && A[j] > key) {
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = key;
    print(A, n);
  }
}


int main() {
  int A[N];
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) scanf("%d", &A[i]);
  print(A, n);
  isort(A, n);
  return 0;
}
