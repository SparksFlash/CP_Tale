#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c)
{
    return (!isalpha(c) && !isdigit(c));
}

int getPriority(char C)
{
    if (C == '-' or C == '+')
        return 1;
    else if (C == '*' or C == '/')
        return 2;
    else if (C == '^')
        return 3;
    else
        return 0;
}

string infixToPrefix(string infix)
{
    infix = '(' + infix + ')';
    stack<char> char_stack;
    string output;

    for (int i = 0; i < infix.size(); i++)
    {
        if (isalpha(infix[i]) || isdigit(infix[i]))
            output += infix[i];

        else if (infix[i] == '(')
            char_stack.push('(');

        else if (infix[i] == ')')
        {
            while (char_stack.top() != '(')
            {
                output += char_stack.top();
                char_stack.pop();
            }
            char_stack.pop();
        }

        else
        {
            if (isOperator(char_stack.top()))
            {
                if (infix[i] == '^')
                {
                    while (getPriority(infix[i]) <= getPriority(char_stack.top()))
                    {
                        output += char_stack.top();
                        char_stack.pop();
                    }
                }

                else
                {
                    while (
                        getPriority(infix[i]) < getPriority(char_stack.top()))
                    {
                        output += char_stack.top();
                        char_stack.pop();
                    }
                }
            }
        }
    }
}