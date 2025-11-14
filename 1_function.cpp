#include<iostream>

using namespace std;

struct Reactangle {
    int length;
    int breadth;
};

int add (int a, int b) {
    return a + b;
}

void swap(int &r, int &y) {
    int temp;

    temp = r;
    r = y;
    y = temp;

}

void fun(int a[], int n) {
    int i;

    for(i = 0; i< n; i++) {
        cout << a[i] << endl;
    }
}

int area(struct Reactangle r1) {
    return r1.length * r1.breadth;
}

void changeLength(struct Reactangle *p, int n) {
    p->length = n;
}

void hehe(int *A, int n) {
    A[0] = 100;
}

int * haha(int size) {
    int *p;
    p = new int[size];
    
    for(int i = 0; i < size; i++)
        p[i] = i + 1;

    return p;
}

struct Reactangle *fun1() {
    struct Reactangle *p;

    p = new Reactangle;

    p->length = 15;
    p->breadth = 7;

    return p;
}

int main() {
    // int a = 10;
    // int &r = a; // r is a reference to a

    // int b = 30;
    // r = b; // assigns the value of b to a

    // cout << "value of a: " << a << endl;
    // r++;
    // cout << "value of r after incrementing r: " << r << endl;
    // cout << "value of a after incrementing r: " << a << endl; 

    // struct Reactangle r = {10,5};
    // struct Reactangle *p = &r; // p is a pointer to structure r

    // r.length = 15;
    // (*p).length = 20; // p->length = 20;

    // struct Reactangle r = {10,5};
    // cout <<r.length << endl;
    // cout <<r.breadth << endl;

    // Reactangle *p = &r; // p is a pointer to structure r

    // cout << p->length << endl;
    // cout << p->breadth << endl;

    // Reactangle *p;
    // p = new Reactangle;

    // p->length=15;
    // p->breadth=7;

    // cout << p->length << endl;
    // cout << p->breadth << endl;

    // int x,y, r;

    // x = 10;
    // y = 20;
    // r = add(x,y);

    // cout << "Sum is: " << r << endl;

    // int a,b;
    // a = 10;
    // b = 20;

    // cout << "Before swapping: " << endl;
    // cout << "a: " << a << ", b: " << b << endl;

    // swap(a,b);

    // cout << "After swapping: " << endl;
    // cout << "a: " << a << ", b: " << b << endl;

    // int A[5] = {10,20,30,40,50};

    // fun(A,5);

    // struct Reactangle r = {10,5};
    // cout << "Area is: " << area(r) << endl;

    // changeLength(&r, 20);

    // cout << "Length is: " << r.length << endl;
    // cout << "Area is: " << area(r) << endl;

    // int A[ ]= {2,4,6,8,10};
    // int n=5;
    // hehe(A,n);

    // for(int x:A) {
    //     cout << x << " ";
    // }

    // int *ptr, sz = 5;

    // ptr=haha(sz);

    // for(int i = 0; i < sz; i++) {
    //     cout << ptr[i] << endl;
    // }

    struct Reactangle *ptr = fun1();

    cout << "Length: " << ptr->length << endl;
    cout << "Breadth: " << ptr->breadth << endl;


    return 0;
}