#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
	//테스트 케이스의 개수
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		//고려해야할 선수의 수
		int p;
		cin >> p;

		//가격과 이름을 저장할 vector객체 생성
		vector<int>vPrice(p);
		vector<string>vName(p);
		
		int max = 0;
		string name;

		for (int i = 0; i < p; i++) {
			//가격과 이름을 입력받아 vector에 저장
			cin >> vPrice[i] >> vName[i];

			if (max < vPrice[i]) {
				max = vPrice[i];
				name = vName[i];
			}
		}
		cout << name << endl;
	}
	
}