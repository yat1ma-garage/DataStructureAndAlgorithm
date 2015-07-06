#include<cstdio>

const int kMax = 100;

int SelectionSort(int A[], int n) {
  int cnt=0, j, tmp, min_i;
  for (int i = 0; i<n; i++) {
    min_i = i;
    for (j = i+1; j < n; j++) {
      if (A[j] < A[min_i]) {
        min_i = j;
      }
    }
    tmp = A[i]; A[i] = A[min_i]; A[min_i] = tmp;
    if (i != min_i) cnt++;
  }
  return cnt;
}


int main() {
  int n, i, cnt=0;
  int A[kMax];

  // in
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }


  // proc
  cnt = SelectionSort(A, n);

  // out
  for (i = 0; i < n; i++) {
    if(i) printf(" ");
    printf("%d", A[i]);
  }
  printf("\n%d\n", cnt);
  return 0;
}
