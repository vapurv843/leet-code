// C++ program to find the count
// of subsequences of an Array
// having all unique digits

#include <bits/stdc++.h>
using namespace std;

// Dynamic programming table
int dp[5000][(1 << 10) + 5];

// Function to obtain
// the mask for any integer
int getmask(int val)
{
	int mask = 0;

	if (val == 0)
		return 1;

	while (val) {
		int d = val % 10;
		mask |= (1 << d);
		val /= 10;
	}
	return mask;
}

// Function to count the number of ways
int countWays(int pos, int mask,
			int a[], int n)
{
	// Subarray must not be empty
	if (pos == n)
		return (mask > 0 ? 1 : 0);

	// If subproblem has been solved
	if (dp[pos][mask] != -1)
		return dp[pos][mask];

	int count = 0;

	// Excluding this element in the subarray
	count = count
			+ countWays(pos + 1, mask, a, n);

	// If there are no common digits
	// then only this element can be included
	if ((getmask(a[pos]) & mask) == 0) {

		// Calculate the new mask
		// if this element is included
		int new_mask
			= (mask | (getmask(a[pos])));

		count = count
				+ countWays(pos + 1,
							new_mask,
							a, n);
	}

	// Store and return the answer
	return dp[pos][mask] = count;
}

// Function to find the count of
// subarray with all digits unique
int numberOfSubarrays(int a[], int n)
{
	// initializing dp
	memset(dp, -1, sizeof(dp));

	return countWays(0, 0, a, n);
}

// Driver code
void solve()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << numberOfSubarrays(a, n) << endl;
}
int main()
{
	int t;
    cin>>t;
    while(t--) {
        solve();
    }
}
