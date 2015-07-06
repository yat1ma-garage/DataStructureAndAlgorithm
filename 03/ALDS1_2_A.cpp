#include<cstdio>
#define MAX 100


int BubbleSort(int A[], int n) {
  int j, tmp;
  int cnt = 0;
  for (int i = 0; i<n; i++) {
    j = n-1;
    while(j > i) {
      if (A[j - 1] > A[j]) {
        tmp = A[j-1]; A[j-1] = A[j]; A[j] = tmp;
        cnt++;
      }
      j--;
    }
  }
  return cnt;
}

int main() {
  int A[100];
  int n, cnt;

  // in
  scanf("%d", &n);

  // proc
  for (int i = 0; i<n;i++) scanf("%d", &A[i]);
  cnt = BubbleSort(A, n);

  // out
  for (int i = 0; i<n;i++) {
    if (i) printf(" ");
    printf("%d", A[i]);
  }
  printf("\n%d\n", cnt);
  return 0;
}
