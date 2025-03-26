#include<iostream>
using namespace std;
#include<stack>

string reverseStr(string s)
{   string newstring ="";
    s.push_back(' ');
    stack<string> st;
    string word = "";
    for(int i=0; i<s.length();i++)
    {
        if(s[i] != ' ')
        {
            word.push_back(s[i]);
        }
        else if(s[i] == ' ')
        {
            if(word.length()>0)
            {
                st.push(word);
                word = "";
            }
        }
    }
    while(st.size()>1)
    {
        newstring  += st.top();
        newstring.push_back(' ');
        st.pop();
    }

    newstring +=st.top();
    return newstring;
}

int main()
{
    string str= "   Chethan is bad boy   ";
    string s = reverseStr(str);
    cout<<s<<endl;
    return 0;
}