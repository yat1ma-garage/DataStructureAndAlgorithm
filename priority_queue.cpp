#include<iostream>
#include<queue>

using namespace std;

int main() {
  priority_queue<int> PQ;
  PQ.push(1);
  PQ.push(8);
  PQ.push(3);
  PQ.push(5);
  cout << PQ.top() << " ";
  PQ.pop();
  cout << PQ.top() << " ";
  PQ.push(11);
  cout << PQ.top() << " ";
  PQ.pop();
  cout << PQ.top() << endl;
  PQ.pop();
  return 0;
}
