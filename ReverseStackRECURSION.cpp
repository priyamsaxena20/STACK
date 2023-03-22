void insertatbuttom(stack<int> &s,int element){
    // base case
    if(s.empty()){
        s.push(element);
        return;
    }
    int num=s.top();
    s.pop();
    // recusr call
    insertatbuttom(s,element);
    s.push(num);



}
void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()){
        return;
    }
    int num=stack.top();
    stack.pop();
    // recursive call
    reverseStack(stack);
    insertatbuttom(stack,num);
}
