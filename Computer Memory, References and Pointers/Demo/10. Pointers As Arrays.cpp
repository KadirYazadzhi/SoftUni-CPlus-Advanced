#include <iostream>

using namespace std;

int main() {
    int arr[3] {13, 42, 69};
    int* p = arr;
    p[1] = -42;
    cout << arr[1] << endl;
    cout << *(p + 1) << endl;
    cout << p[1] << endl;

    return 0;
}
