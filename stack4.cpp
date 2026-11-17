#include<iostream>
#include<math.h>
#include<stack>
#include<algorithm>
using namespace std;

int prefixEvaluate(string s){
    
    stack<int> st;
     reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        if (s[i] == ' ')
            continue;
       
        if (isdigit(s[i]))
       {
         int num = 0;
          while (i < s.length() && isdigit(s[i])){
         num = num * 10 + (s[i] - '0');
         i++;
        }
        st.push(num);
        i--;
       } 
        else{
        
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            
            switch(s[i])
            {
                case '+':
                    st.push(op1+op2);
                    break;
                case '-':
                    st.push(op1- op2);
                    break;
                case '*':
                    st.push(op1*op2);
                    break;
                case '/':
                    st.push(op1/op2);
                    break;
                case'^':
                    st.push(pow(op1,op2));
                    break;
            }
        }
    }
    return st.top();
}

int main(){
    cout<<prefixEvaluate("- + 8 / 6 3 2")<<endl;
    return 0;
}