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



Node * treeMinimum(Node *x) {
  while (x->left != NIL) x = x -> left;
  return x;
}


Node *find(Node *u, int k) {
  while (u != NIL && k != u->key) {
    if (k < u->key) u = u ->left;
    else u = u ->right;
  }
  return u;
}

Node *treeSuccessor(Node *x) {
  if (x->right != NIL) return treeMinimum(x->right);
  Node *y = x->parent;
  while (y != NIL && x == y->right) {
    x = y;
    y = y->parent;
  }
  return y;
}

void treeDelete(Node *z) {
  Node *y;
  Node *x;

  if ( z->left == NIL || z ->right == NIL) y = z;
  else y = treeSuccessor(z);
  if (y->left != NIL) {
    x = y->left;
  } else {
    x = y ->right;
  }



  if (x != NIL) {
    x->parent = y->parent;
  }

  if (y->parent == NIL) {
    root = x;
  } else {
    if (y == y->parent->left) {
      y->parent->left = x;
    } else {
      y->parent->right = x;
    }
  }

  if (y !=  z) {
    z->key = y->key;
  }
　
  free(y);
}
