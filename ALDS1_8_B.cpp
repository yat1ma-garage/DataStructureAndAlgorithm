#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
using namespace std;


struct Node {
  int key;
  Node *right, *left, *parent;
};


Node *root, *NIL;


Node *find(Node *u, int k) {
  while (u != NIL && k != u->key) {
    if (k < u->key) u = u->left;
    else u = u->right;
  }
  return u;
}


void insert(int k) {
  
}

void inorder(Node *u) {
  
}


void preorder(Node *u) {
  
}


int main() {
  int n, i, x;
  string com;
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    cin >> com;
    if (com[0] == 'f') {
      scanf("%d", &x);
      Node *t = find(root, x);
      if (t != NIL) printf("yes\n");
      else printf("no\n");
    } else if (com == "insert") {
      scanf("%d", &x);
      insert(x);
    } else if (com == "print") {
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
}
