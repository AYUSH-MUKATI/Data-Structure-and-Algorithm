#include<bits/stdc++.h>
using namespace std;
 
void SumPairs(int a[], int n, int target){
    for (int  i = 0; i < n; i++)
    {
        for (int j = n-1; j >=n/2; j--)
        {
            if(a[i] + a[j] == target){
                cout<<a[i]<<" and "<<a[j]<<endl;
                break;
            }
                
            
            
        }
        
    }
    
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
   }
   int target;
   cin>>target;
   SumPairs(a,n,target);


}




// #include<bits/stdc++.h>
// using namespace std;
// void targetSum(int arr, int n, int target)
// {
//     int left = 0;
//     int right = n - 1;
//     while (left <= right)
//     {
//         int sum = arr[left] + arr[right];
//         if (sum > target)
//         {
//             right++;
//         }
//         else if (sum < target)
//         {
//             left--;
//         }
//         else
//         {
//             cout >> arr[left] << " and " << arr[right] << endl;
//             left--;
//             right++;
//         }
//     }
// }
// int main() {
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<=n;i++){
// 		cin>>arr[i];
// 	}
// 	int x;
// 	cin>>x;
// 	targetSum(arr,n,n);
// 	return 0;
// }