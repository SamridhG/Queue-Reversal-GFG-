queue<int> rev(queue<int> q)
{
    // add code here.
    queue<int>A;
    stack<int>B;
    while(!q.empty())
    {
        B.push(q.front());
        q.pop();
    }
     while(!B.empty())
    {
        A.push(B.top());
        B.pop();
    }
    return A;
}
