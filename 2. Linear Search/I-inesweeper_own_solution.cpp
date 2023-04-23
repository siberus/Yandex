#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<vector<int>> poleBuild(int m, int n){
    vector<vector<int>> poleNull;
    vector<int> line;
    for(int i = 0; i <= m+1; i++){
        for(int j = 0; j <= n+1; j++){
            line.push_back(0);
        }
    poleNull.push_back(line);
    line.erase(line.begin(), line.end());
    }
    return poleNull;
}
void addMine(vector<vector<int>> *pole, int x, int y, int m, int n){
   if ((*pole)[y][x] != -1)
   {
    for (int  i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((abs(y-i) <= 1) && (abs(x-j) <= 1) && (*pole)[i][j] != -1)
            {
                (*pole)[i][j]++;
            }
            if (i == y && j == x)
            {
                (*pole)[i][j]=-1;
            }
        }
    }
   }
   
    
    return;
}

int main()
{
    int m, n, k, x, y;
    cin >> m >> n >> k;
    vector<vector<int>> pole = poleBuild(m, n);
    for (int i = 0; i < k; i++)
    {
        cin >> y >> x;
        addMine( &pole, x, y, m, n);
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (pole[i][j] == -1)
            {
                cout << "*" << " ";
            }else            
            cout << pole[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}