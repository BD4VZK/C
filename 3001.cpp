#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    int n, y, m, i, j, cmd, xi, yi;
    cin >> n;
    vector<int> production;
    for (i = 0; i < n; i++)
    {
        cin >> y;
        production.push_back(y);
    }
    cin >> m;
    for (j = 1; j <= m; j++)
    {
        cin >> cmd;
        if (cmd == 1)
        {
            cin >> xi >> yi;
            production[xi - 1] = yi;
        }
        else
        {
            cin >> xi;
            cout << production[xi - 1] << endl;
        }
    }
    return 0;
}