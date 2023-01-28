#include <iostream>
using namespace std;
int size = 3;
template <class T>
class Vector
{
    T *v;

public:
    Vector()
    {
        v = new T[size];
        for (int i = 0; i < size; i++)
        {
            v[i] = 0;
        }
    }
    Vector(T *a)
    {
        for (int i = 0; i < size; i++)
        {
            v[i] = a[i];
        }
    }
    T operator*(Vector &y)
    {
        T sum = 0;
        for (int i = 0; i < size; i++)

            sum += this->v[i] * y.v[i];

        return sum;
    }
    void display(void)
    {
        for (int i = 0; i < size; i++)
        {
            cout << v[i] << endl;
            cout << endl;
        }
    }
};
int main()
{
    int x[3] = {3, 5, 6};
    int y[3] = {4, 6, 3};
    Vector<int> v1;
    Vector<int> v2;
    v1 = x;
    v2 = y;
    cout << "V1 = ";
    v1.display();

    cout << "V2 = ";
    v2.display();

    cout << "V1 * V2 = " << v1 * v2;

    return 0;
}