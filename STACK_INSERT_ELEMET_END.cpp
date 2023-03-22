#include <bits/stdc++.h> 
void solve(stack<int>& s,int x){
// base case
 if(s.empty()){
     s.push(x);
     return;

 }
 // recursion call
 int num=s.top();
 s.pop();
 /// recur
 solve(s,x);
 s.push(num);


}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack,x);
    return myStack;

}
