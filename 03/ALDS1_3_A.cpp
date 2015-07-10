#include<cstdio>
#include<cstring>
#include<cstdlib>

int S[100];
int sp = 0;


void Push(int n) {
  S[++sp] = n;
}

int Pop() {
  return S[sp--];
}

int main() {
  int a1, a2;
  char ch[100];
  sp = 0;
  while(scanf("%s", ch) != EOF) {
    if (ch[0] == '+') {
      a2 = Pop();
      a1 = Pop();
      Push(a2 + a1);
    } else if (ch[0] == '-') {
      a2  = Pop();
      a1 = Pop();
      Push(a1 - a2);
    } else if (ch[0] == '*') {
      a2 = Pop();
      a1 = Pop();
      Push(a1 * a2);
    } else Push(atoi(ch));
  }
  printf("%d\n", Pop());
  return 0;
}
