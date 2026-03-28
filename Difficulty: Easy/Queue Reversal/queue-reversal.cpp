// function Template for C++
#include<queue>
#include<stack>
using namespace std;
class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
        // code here.
        stack<int>s;
        while(!q.empty()){
            s.push(q.front());
            q.pop();
        }
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        return q;
    }
};