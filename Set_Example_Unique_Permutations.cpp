#include <iostream>
#include<set>
#include<string>
using namespace std;

void Permutations(char *in, int i, set<string> &s)
{
    // base case
    if (in[i] == '\0')
    {
        // cout << in << endl;
        string t(in);
        s.insert(t);
        return;
    }
    // recursive case
    for (int j = i; in[j] != '\0'; j++)
    {
        swap(in[j], in[i]);
        Permutations(in, i + 1,s);
        swap(in[j], in[i]);
    }
}

int main()
{
    char in[] = "abb";
    set<string> s;

    Permutations(in, 0, s);
    for(auto str:s){
        cout<<str<<", ";
    }
}