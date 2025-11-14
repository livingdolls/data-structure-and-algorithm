#include <stdio.h>

// Function to demonstrate static variable with recursion
// pertama kali fun(5) dipanggil, static int x diinisialisasi 0
// setiap kali fun dipanggil, x akan diincrement
// nilai x akan dipertahankan di setiap pemanggilan rekursif

int fun(int n) {
    // n = 5 -> n = 4 -> n= 3 -> n = 2 -> n = 1 -> n = 0
    
    static int x = 0; 
    // x = 0 -> x = 1 -> x = 2 -> x = 3 -> x = 4 -> x = 5

    if( n > 0) { 
        // 5 > 0 ? true -> 4 > 0 ? true -> 3 > 0 ? true -> 2 > 0 ? true -> 1 > 0 ? true -> 0 > 0 ? false = selesai rekursi
        // setelah selesai rekursi, akan mulai return nilai. x saat ini sudah final yaitu 5
        x++; 
        // x = 1 ->  x = 2 -> x = 3 -> x = 4 -> x = 5;
        return fun(n - 1) + x; 
        // fun(4) + 1 -> fun(3) + 2 -> fun(2) + 3 -> fun(1) + 4 -> fun(0) + 5 => return 0 + 5 = 5;
        //setelah fun(0) return 0, maka akan kembali ke fun(1): return 0 + 5 = 5
        //kemudian ke fun(2): return 5 + 5 = 10
        //kemudian ke fun(3): return 10 + 5 = 15
        //kemudian ke fun(4): return 15 + 5 = 20
        //kemudian ke fun(5): return 20 + 5 = 25
    }

    return 0;
};

int main() {
    int r;

    r = fun(5);
    printf("Result: %d\n", r);
    return 0;
}