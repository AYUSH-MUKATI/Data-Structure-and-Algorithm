#include <bits/stdc++.h>
using namespace std;

void CountingSort(int *a, int n){
    // largest in the array assuming no>0;
    int largest = -1;
    for (int i = 0; i < n; i++) {
        largest = max(largest, a[i]);
    }

    int *freq = new int[largest + 1]{0};

    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    // put the elements back into the array a by reading freq array
    int j = 0;
    for (int i = 0; i <= largest; i++) {
        while (freq[i] > 0)
        {
            a[j] = i;
            freq[i]--;
            j++;
        }
    }

}

    int main()
{
    int a[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
    int n = sizeof(a) / sizeof(int);

    CountingSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}