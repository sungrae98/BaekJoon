#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	//���ȣ
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

	//�Ҽ����� ���� ��� +1�� ����� �Ѵ�. ������ ��Ʈ�� ���°Ŵϱ�
	int six_nine = (room[6] + room[9] + 1) / 2;
	room[6] = six_nine;
	room[9] = six_nine;

	//�迭�� �ִ밪 ���
	cout << *max_element(room, room + 10) << "\n";
}