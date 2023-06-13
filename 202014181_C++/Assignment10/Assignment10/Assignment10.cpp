#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T>
vector<T>& operator+=(vector<T>& container, const T& data) {
    container.push_back(data);
    return container;
}

template<typename T>
vector<T>& operator-=(vector<T>& container, T& data) {
    data = container.back();
    container.pop_back();
    return container;
}

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& container) {
    if (container.empty()) {
        os << "empty";
    }
    else {
        for (size_t i = 0; i < container.size(); i++) {
            os << container[i];
            if (i < container.size() - 1) {
                os << ", ";
            }
        }
    }
    return os;
}

int main() {
    vector<int> vcont;
    int s1, s2, s3;

    vcont += 1;
    (vcont += 2) += 3;
    cout << vcont << endl;

    vcont -= s1;
    cout << vcont << endl;
    vcont -= s2;
    cout << vcont << endl;
    vcont -= s3;
    cout << s1 << ", " << s2 << ", " << s3 << endl;
    cout << vcont << endl;

    return 0;
}
