#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m[n][n];
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <n ; ++j) {
            cin >> m[i][j];
        }
    }
    int top=0,down=n-1,left=0,right=n-1,dir=0;
    while (top<=down && left<=right){
        if (dir==0){
            for (int i = left; i <=right ; ++i) {
                cout << m[top][i] << " | ";
            }
            top++;
        }
        if (dir==1){
            for (int i = top; i <=down ; ++i) {
                cout << m[i][right] << " | ";
            }
            right--;
        }
        if (dir==2){
            for (int i = right; i >=left ; --i) {
                cout << m[down][i] << " | ";
            }
            down--;
        }
        if (dir==3){
            for (int i = down; i >=top ; --i) {
                cout << m[i][left] << " | ";
            }
            left++;
        }
        dir = (dir+1)%4;
    }
}