#include <stdio.h>

// tree recursion
void fun(int n) {
    if(n > 0) { 
        printf("%d\n", n);
        fun(n - 1);
        fun(n - 1);
    }
}

int main() {
    fun(3);
    return 0;
}

// fun(3)
//  ├─ fun(2)  <-- dikerjakan FULL
//  │    ├─ fun(1)
//  │    │    ├─ fun(0)
//  │    │    └─ fun(0)
//  │    └─ fun(1)
//  │         ├─ fun(0)
//  │         └─ fun(0)
//  └─ fun(2)  <-- baru mulai setelah yang kiri selesai total
//       ├─ fun(1)
//       │    ├─ fun(0)
//       │    └─ fun(0)
//       └─ fun(1)
//            ├─ fun(0)
//            └─ fun(0)
