#include <bits/stdc++.h>
#include <climits>
using namespace std;

int max(int a, int b, int c) { return max(max(a, b), c); }

int maxCrossingsum(int arr[], int l, int m, int h)
{
    int leftsum = INT_MIN;
    int sum = 0;
    for (int i = m; i >= l; i--)
    {
        sum += arr[i];
        if (sum > leftsum)
        {
            leftsum = sum;
        }
    }
    int rightsum = INT_MIN;
    sum = 0; 
    for (int i = m + 1; i <= h; i++)
    {
        sum += arr[i];
        if (sum > rightsum)
        {
            rightsum = sum;
        }
    }
    return max(leftsum + rightsum, leftsum, rightsum);
}
int max_subarray(int arr[], int l, int h)
{
    int leftsum, rightsum, crosssum;
    if (h == l)
    {
        return arr[l];
    }
    int m = (l + h) / 2;
    return max(max_subarray(arr, l, m), maxCrossingsum(arr, l, m, h), max_subarray(arr, m + 1, h));
}

int main()
{
    int n;
    int arr[10];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maximum = max_subarray(arr, 0, n - 1);
    cout << maximum;
}
