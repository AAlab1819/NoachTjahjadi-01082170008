#include <bits/stdc++.h>

using namespace std;

int Array[1000000] = {0};
int ArrayIndexMap[1000][1000] = {0};
int ArrayIndex = 1;
int number_picture_viewed = 0;

void flood(string symbol[], int n, int m, int x, int y)
{
    ArrayIndexMap[y][x] = ArrayIndex;
    if(y+1<n) {
        if(symbol[y+1][x] == '.' && ArrayIndexMap[y+1][x] == 0) {
            flood(symbol, n, m, x, y+1);
        } else if(symbol[y+1][x] == '*') {
            number_picture_viewed++;
        }
    }
    if(y-1>=0) {
        if(symbol[y-1][x] == '.' && ArrayIndexMap[y-1][x] == 0) {
            flood(symbol, n, m, x, y-1);
        } else if(symbol[y-1][x] == '*') {
            number_picture_viewed++;
        }
    }
    if(x+1<m) {
        if(symbol[y][x+1] == '.' && ArrayIndexMap[y][x+1] == 0) {
            flood(symbol, n, m, x+1, y);
        } else if(symbol[y][x+1] == '*') {
            number_picture_viewed++;
        }
    }
    if(x-1>=0) {
        if(symbol[y][x-1] == '.' && ArrayIndexMap[y][x-1] == 0) {
            flood(symbol, n, m, x-1, y);
        } else if(symbol[y][x-1] == '*') {
            number_picture_viewed++;
        }
    }
    return;
}

int main()
{
    int n, m, test_case;
    cin >> n >> m >> test_case;
    int x, y;
    string symbol[n];
    for(int i=0; i<n; i++) {
        cin>>symbol[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(symbol[i][j] == '.' && ArrayIndexMap[i][j] == 0) {
                ArrayIndex++;
                number_picture_viewed = 0;
                flood(symbol, n, m, j, i);
                Array[ArrayIndex] = number_picture_viewed;
            }
        }
    }
    for(int i=0; i<test_case; i++) {
        cin >> y >> x;
        cout << Array[ArrayIndexMap[--y][--x]] << endl;
    }

    return 0;
}
