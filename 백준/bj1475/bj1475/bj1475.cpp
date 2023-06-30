#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	//방번호
	int n;
	cin >> n;

	int room[10] = { 0 };

	while (true)
	{
		room[n % 10]++;

		n /= 10;
		if(n == 0){
			break;
		}
	}

	//소수점이 나올 경우 +1을 해줘야 한다. 어차피 세트를 쓰는거니까
	int six_nine = (room[6] + room[9] + 1) / 2;
	room[6] = six_nine;
	room[9] = six_nine;

	//배열의 최대값 출력
	cout << *max_element(room, room + 10) << "\n";
}