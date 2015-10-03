#include <iostream>
#include <cmath>

void z1();

void z2();

void z3();

using namespace std;

int main() {
    //z1();
    //z2();
    //z3();
    int n;
    cin >> n;
    int t = n;
    int k = 0;
    int s = 0;
    int last;
    while (t>0) {
        last = t % 10;
        s = s + last;
        t = t / 10;
        k++;
    }
    int kn = 0;
    t = n;
    while (t > 0) {
        t = t/5;
        kn = kn + t;
    }
    cout << k << endl;
    cout << s << endl;
    cout << last << endl;
    cout << kn << endl;
    return 0;
}

void z3() {
    int n;
    double x;
    cin >> x >> n;
    double s = 0;
    double a = sin(x);
    double t = a;
    for (int i=0; i<n; i++) {
        s = s + a;
        a = a * t;
    }
    cout << s << endl;

    double z = 0;
    double b = x;
    for (int i=0; i<n; i++) {
        z = z + sin(b);
        b = b * x;
    }
    cout << z << endl;

    double q = 0;
    double c = sin(x);
    for (int i=0; i<n; i++) {
        q = q + c;
        c = sin(c);
    }
    cout << q << endl;
}

void z2() {
    double x;
    cin >> x;
    double a = x;
    double s = 0;
    int znak = 1;
    for (int i=1; i<8; i++) {
        s = s + znak*a;
        znak = -znak;
        a = a * x * x / ((2*i)*(2*i+1));
    }
    cout << s << endl;
}

void z1() {
    int n;
    double x, a;
    double s;
    cin >> x >> a >> n;
    s = x;
    for (int i=0; i<n; i++) {
        s = (s + a)*(s + a);
    }
    s = s + a;
    cout << s << endl;
}