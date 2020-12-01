#include <bits/stdc++.h>

using namespace std;

bool isSafe(int **a, int r, int c, int n)
{
    if (r < n && c < n && a[r][c] == 1)
        return 1;
    return 0;
}

bool ratInMaze(int **a, int r, int c, int n, int **ans)
{
    if (r == (n - 1) && c == (n - 1))
    {
        ans[r][c] = 1;
        return 1;
    }
    if (isSafe(a, r, c, n))
    {
        ans[r][c] = 1;
        if (ratInMaze(a, r + 1, c, n, ans) || ratInMaze(a, r, c + 1, n, ans))
        {
            return 1;
        }
        ans[r][c] = 0;
        return 0;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int **ans = new int *[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = 0;
        }
    }
    if (ratInMaze(a, 0, 0, n, ans))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ans[i][j]<< " ";
            }
            cout<<endl;
        }
    }

    return 0;
}