#include <iostream>
#include <vector>
using namespace std;

// maze with obstacles
void mazeWithObstacles(string p, vector<vector<bool>> maze, int r, int c)
{
    if (r == maze.size() - 1 && c == maze[0].size() - 1)
    {
        // means we've found one path
        cout << p << endl;
        return;
    }
    if (!maze[r][c])
        return; // we're at a cell where we're not allowed so we'll not go forward, we'll just return
    if (r < maze.size() - 1)
        mazeWithObstacles(p + 'd', maze, r + 1, c);
    if (c < maze[0].size() - 1)
        mazeWithObstacles(p + 'r', maze, r, c + 1);
}

// backtracking
// including all directions, i.e up, down, right, left
void mazeWithObstaclesAllDirections(string p, vector<vector<bool>> maze, int r, int c)
{
    if (r == maze.size() - 1 && c == maze[0].size() - 1)
    {
        // means we've found one path
        cout << p << endl;
        return;
    }
    if (!maze[r][c])
        return; // we're at a cell where we're not allowed so we'll not go forward, we'll just return

    maze[r][c] = 0; // considering this block so marking it as false(means we've included it in the path)
    if (r < maze.size() - 1)
        mazeWithObstaclesAllDirections(p + 'd', maze, r + 1, c);
    if (c < maze[0].size() - 1)
        mazeWithObstaclesAllDirections(p + 'r', maze, r, c + 1);
    if (r > 0)
        mazeWithObstaclesAllDirections(p + 'u', maze, r - 1, c);
    if (c > 0)
        mazeWithObstaclesAllDirections(p + 'l', maze, r, c - 1);

    // this line is where the function will be over , so before the fucntion get removed, the changes that were made by it
    maze[r][c] = 1;
}
int main()
{
    vector<vector<bool>> maze1 = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    // mazeWithObstacles("" , maze1 , 0 , 0);

    vector<vector<bool>> maze2 = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    mazeWithObstaclesAllDirections("", maze2, 0, 0);
}


//
// class Solution {
// public:
//     int minimumDeviation(vector<int>& v) {
//         auto it = std::minmax_element(v.begin(), v.end());
//         int ovmi = max-min;
//         pair<pair<int , int>, pair<int , int>> maxmin; //((max elem,index),(min elem , index))

//         while(1) {
//             int max = *max_element(v1.begin(), v1.end());
//             int min = *min_element(v1.begin(), v1.end());
//             int min_idx = distance(v.begin(), it.first);
//             int max_idx = distance(v.begin(), it.second);

//             maxmin.first = make_pair(max, max_idx);
//             maxmin.second = make_pair(min, min_idx);

//             int nmi = reduce(maxmin.first, maxmin.second);

//             v[maxin.first.second] = maxin.first.first;
//             v[maxin.second.second] = maxin.second.first;

//             if(nmi == omi) return omi; //anss
//             else if(nmi < omi) omi = nmi;
            
//         }

//     }
// };
//