class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (const string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = s.top(); s.pop();
                int a = s.top(); s.pop();
                if (token == "+") s.push(a + b);
                if (token == "-") s.push(a - b);
                if (token == "*") s.push(a * b);
                if (token == "/") s.push(a / b);
            } else {
                s.push(stoi(token));
            }
        }
        return s.top();
    }
};