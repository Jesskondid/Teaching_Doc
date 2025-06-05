#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b;
    if (a > b) c = b; else c = a;  // 取较小值
    while (a % c != 0 || b % c != 0) {
		c--;  // 逐渐减小c，直到找到最大公约数
}
    cout << c;
    return 0;
}