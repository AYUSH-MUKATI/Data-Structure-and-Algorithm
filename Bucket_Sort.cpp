#include<bits/stdc++.h>
using namespace std;

class Student {
    public:

        int marks;
        string name;

};

// Bucket sort to sort  an array of students 

void BucketSort(Student s[], int n){

    // assuming marks are in range 0-100
    vector<Student> v[101];

    // o(N) time 
    for (int i = 0; i < n; i++)
    {
        int m = s[i].marks;
        v[m].push_back(s[i]);

    }

    // Iterate over the vector and print the students 
    for(int i = 100; i>=0; i--){
        for(vector<Student>::iterator it = v[i].begin(); it!=v[i].end();it++){
            cout<<(*it).marks<<"  "<<(*it).name<<endl;
        }
    }
    
}

 
int main(){

    Student s[1000];
    int n;
    cin>>n;

    for (int  i = 0; i < n; i++)
    {
        cin>>s[i].marks >> s[i].name;
    }
    BucketSort(s, n);

    
    return 0;

}