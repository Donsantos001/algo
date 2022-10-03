#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k)
{
    int c_max = 0;
    for (int i = 0; i < n; i++)
    {
        if ((i - k) >= 0 && (arr[i - k] == c_max) && (arr[i - k] != arr[i]))
        {
            c_max = 0;
            for (int j = i - k + 1; j <= i; j++)
                c_max = max(arr[j], c_max);
        }
        else
            c_max = max(arr[i], c_max);

        if (i + 1 >= k)
            cout << c_max << " ";
    }
}

int main()
{
    // hackerrank solution

    // int t;
    // cin >> t;
    // while(t>0) {
    // 	int n,k;
    // 	cin >> n >> k;
    // 	int i;
    // 	int arr[n];
    // 	for(i=0;i<n;i++)
    //   		cin >> arr[i];
    // 	printKMax(arr, n, k);
    //     cout << "\n";
    // 	t--;
    // }

    int arr[] = {7, 9, 8, 9, 8, 9, 3, 6, 4, 3, 3, 4, 4, 3, 7, 5, 1, 2, 4, 4};
    int n = 20;
    int k = 4;
    printKMax(arr, n, k);
    return 0;
}