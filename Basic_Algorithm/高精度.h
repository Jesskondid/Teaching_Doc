#include <iostream>  
#include <string>  
#include <cstring>  
using namespace std;
struct bigint {
    int digits[1000] = { 0 }, len;
    bigint(string s) {
        len = static_cast<int>(s.size());
        for (int i = 1; i <= len; i++)
            digits[i] = s[len - i] - '0';
    }
};

void print(bigint n) {
    for (int i = n.len; i >= 1; i--)
        cout << n.digits[i];
}

bool b_or_s(bigint a, bigint b) {
    if (a.len > b.len) {
        return true;
    }
    else if (a.len < b.len) {
        return false;
    }
    else {
        for (int i = a.len; i >= 1; i--) {
            if (a.digits[i] > b.digits[i]) {
                return true;
            }
            else if (b.digits[i] > a.digits[i]) {
                return false;
            }
        }
    }
    return true;
}
bigint chu(bigint a, bigint b) {
    bigint c("0");
    c.len = a.len;
    while (b_or_s(a, b)) {
        c.digits[1]++; // �̲����ۼ�1
        // �̽�λ
        for (int i = 1; i <= c.len; i++) {
            if (c.digits[i] == 10) {
                c.digits[i + 1]++;
                c.digits[i] = 0;
            }
        }
        // ��������ȥ����
        for (int i = 1; i <= b.len; i++) {
            a.digits[i] -= b.digits[i];
        }
        // �����λ
        for (int i = 1; i <= a.len; i++) {
            if (a.digits[i] < 0) {
                a.digits[i + 1] -= 1;
                a.digits[i] += 10;
            }
        }
        // ���������ĳ��ȣ�ȥ��ǰ׺0
        while (a.len > 1 && a.digits[a.len] == 0)
            a.len--;
    }
    // �����̵ĳ��ȣ�ȥ��ǰ׺0
    while (c.len > 1 && c.digits[c.len] == 0)
        c.len--;
    return c;
}
#pragma once
