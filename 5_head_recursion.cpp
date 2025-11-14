#include <stdio.h>

// head recursion
void fun(int n) {
    if(n > 0) { //n = 5 -> n = 4 -> n= 3 -> n = 2 -> n = 1 -> n = 0
        fun(n - 1); // fun(4) -> fun(3) -> fun(2) -> fun(1) -> fun(0)
         // setelah fun(0) selesai, maka akan mulai return ke fun(1), fun(2), fun(3), fun(4), fun(5)
        printf("%d\n", n);
    }
}

// tail recursion
void fun1(int n) {
    if(n > 0) {
        printf("%d\n", n);
        fun1(n - 1);
    }
}

int main() {
    fun(5);
    fun1(5);
    return 0;
}