#include <iostream>
#include <vector>
using namespace std;

int main() {
	freopen("billboard.in", "r", stdin);	
	freopen("billboard.out", "w", stdout);
    int size = 2001;
    vector<vector<bool>> visible(size, vector<bool>(size, false));
    int var = 0;
    for (int i = 0; i < 2; i++) {
        int x1, y1, x2, y2;
        cin >> x1  >> y1 >> x2 >> y2;
        x1+=1000;
        x2+=1000;
        y1+=1000;
        y2+=1000;

        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                visible[x][y] = true;
                var+=1;
            }
        }
    }

    int x1, y1, x2, y2;
    int cnt = 0;
    cin >> x1 >> y1 >> x2 >> y2;
    x1+=1000;
    x2+=1000;
    y1+=1000;
    y2+=1000;
    for (int x = x1; x < x2; x++) {
        for (int y = y1; y < y2; y++) {
            if (visible[x][y]) {
                var--;
            }
        }
    }
    cout <<var<< endl;

    return 0;
}
