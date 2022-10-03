#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void rem_calc(int A[], int n, int K, int rem[])
{
	for (int i = 0; i < n; i++)
		rem[A[i] % K] = rem[A[i] % K] + 1;
}
int main()
{
	int arr[] = {19, 10, 12, 10, 24, 25, 22};
	int n = 7;
	int K = 4;

	int rem[K] = {0};
	rem_calc(arr, n, K, rem);
	int count = 0;
	count += rem[0] >= 1 ? 1 : 0;

	if (K % 2 == 0)
		count += rem[K / 2] >= 1 ? 1 : 0;
	for (int i = 1; i < ceil((double)K / 2); i++)
	{
		count += max(rem[i], rem[K - i]);
	}
	cout << count;
	return 0;
}

// hackerrank solution

// int nonDivisibleSubset(int k, vector<int> s) {
//     int rem[k];
//     memset(rem, 0, k*sizeof(int));
//     rem_calc(s, s.size(), k, rem);
//     int count = 0;
//     count += rem[0] >= 1 ? 1 : 0;
//     if (k % 2 == 0)
//         count += rem[k / 2] >= 1 ? 1 : 0;
//     for (int i = 1; i < ceil((double)k / 2); i++)
//     {
//         count += max(rem[i], rem[k - i]);
//     }
//     return count;
// }
