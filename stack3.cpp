#include <iostream>
#include <stack>
#include <sstream>
#include <vector>
using namespace std;

// Power function
int power(int base, int exp)
{
    int result = 1;
    while (exp > 0)
    {
        result *= base;
        exp--;
    }
    return result;
}

// Prefix Evaluation Function
int evaluatePrefix(string exp)
{
    stack<int> st;
    stringstream ss(exp);
    vector<string> tokens;
    string token;

    // Store tokens
    while (ss >> token)
    {
        tokens.push_back(token);
    }

    // Traverse from right to left
    for (int i = tokens.size() - 1; i >= 0; i--)
    {
        token = tokens[i];

        // If operand
        if (isdigit(token[0]))
        {
            st.push(stoi(token));
        }
        else
        {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            switch (token[0])
            {
                case '+':
                    st.push(a + b);
                    break;

                case '-':
                    st.push(a - b);
                    break;

                case '*':
                    st.push(a * b);
                    break;

                case '/':
                    st.push(a / b);
                    break;

                case '%':
                    st.push(a % b);
                    break;

                case '^':
                    st.push(power(a, b));
                    break;

                default:
                    cout << "Invalid Operator";
                    return -1;
            }
        }
    }

    return st.top();
}

int main()
{
    string prefix;
    getline(cin, prefix);

    cout << "Result = " << evaluatePrefix(prefix);

    return 0;
}