#include <iostream>
#include <vector>
using namespace std;

vector<int> binarySearch(vector<vector<int>> v, int t)
{
    vector<int> ans(2, -1);
    int row = 0, col = v[0].size() - 1;
    while (row < v.size() && col >= 0)
    {
        if (v[row][col] == t)
        {
            ans[0] = row;
            ans[1] = col;
            break;
        }
        if (v[row][col] > t)
        {
            col--;
        }
        else
        {
            row++;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> v{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int target = 5;
    for (auto e : binarySearch(v, target))
    {
        cout << e << " ";
    }
}