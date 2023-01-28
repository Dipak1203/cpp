#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void set_number(int m, int n)
    {
        a = m;
        b = n;
    }
    friend Complex add(Complex o1, Complex o2);
    void showData()
    {
        cout << "Your Complex number is " << a << " + " << b << "i" << endl;
    }
};
Complex add(Complex o1, Complex o2)
{
    Complex o3;
    o3.set_number((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    int x, y;

    Complex obj1, obj2, sum;
    cout << "Enter the two number " << endl;
    cin >> x >> y;
    obj1.set_number(x, y);
    obj1.showData();

    obj2.set_number(2, 4);
    obj2.showData();

    sum = add(obj1, obj2);
    sum.showData();

    return 0;
}