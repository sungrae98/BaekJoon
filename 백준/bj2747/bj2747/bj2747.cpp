#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int fibo[45] = { 0 };

    fibo[0] = 0;
    fibo[1] = 1;

    //�Ǻ���ġ �ݺ��� ����
    for (int i = 2; i <= n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    cout << fibo[n] << "\n";

    return 0;

}