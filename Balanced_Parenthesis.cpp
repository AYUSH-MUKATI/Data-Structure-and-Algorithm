#include<bits/stdc++.h>
using namespace std;

bool isValidExp(char *s){

    stack<char> st;
    

    for(int i = 0; i<s[i]!='\0';i++){
        char ch = s[i];

        if(ch == '('){
            st.push(ch);
        }
        else if(ch == ')'){
            if(st.empty() or st.top() != '('){
                return false;
            }
            st.pop();
        }


    }

    return  st.empty();

}
 
int main(){
    char s[100] = "((a+b) + (c-d+f))";

    if(isValidExp(s)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}