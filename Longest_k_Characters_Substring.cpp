#include<bits/stdc++.h>
using namespace std;
 
int longestKUnique(char a[], int k){
    int freq[26] = {0};
    int len  = -1;
    int cnt = 0;
    int i = 0;
    for (int j = 0; a[j] != '\0'; j++)
    {
        freq[a[j] - 'a']++;
        if(freq[a[j] - 'a'] == 1){
            cnt++;
        } 

        while (cnt > k)
        {
            // Here we have more than k unique characters 
            // so shrink the window
            freq[a[i] - 'a']--;
            if(freq[a[i] - 'a'] == 0){
                cnt--;
            }
            i++;
        }
        if(cnt == k){
            len = max(len, j - i + 1);
        }
        
    }
    return len;
    
}

int main(){
    char a[] = "abbceddd";
    int k = 3;

    int ans  = longestKUnique(a,k);
    cout<<"Largest String length with "<<k<<" unique characters is: "<<ans<<endl;
}