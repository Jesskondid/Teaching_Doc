#include <iostream>
#include "高精度.h"
using namespace std;
void high_precision(){
    string a, b;
    cin >> a >> b;
    bigint ans = chu(bigint(a), bigint(b));
    print(ans);
}
int main() {
	high_precision();
    return 0;
}
