#include<iostream>
using namespace std;

template<class T>
class Arithmetic {
    private:
        T a;
        T b;
    public:
    Arithmetic(T a, T b);
    T add();
    T sub();
    T barisan(T n);
};
        template<class T>
        Arithmetic<T>::Arithmetic(T a, T b) {
            this->a = a;
            this->b = b;
        };

        template<class T>
        T Arithmetic<T>::add() {
            T c;
            c = a + b;
            return c;
        };
        template<class T>
        T Arithmetic<T>::sub() {
            T c;
            c = a - b;
            return c;
        };

        template<class T>
        T Arithmetic<T>::barisan(T n) {
            T un = 1 + ((n - 1) * 2);  // 1 + (20 - 1)

            return un;
        };

int main() {

    Arithmetic<int> ar(10,5),ar2(15,7);
    Arithmetic<float> ar3(10.5,5.5);

    cout << "Add "<< ar.add() << endl;
    cout << "Sub "<< ar.sub() << endl;

    cout << "Add "<< ar2.add() << endl;
    cout << "Sub "<< ar2.sub() << endl;

    cout << "Add "<< ar3.add() << endl;
    cout << "Sub "<< ar3.sub() << endl;

    cout << "Barisan "<< ar.barisan(20) << endl;

    int *p; // Pointer declaration
    p = new int[5]; // Dynamic memory allocation. save to heap memory

    return 0;
}