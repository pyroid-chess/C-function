#include "function.h"

int main() {
    println("Hello from library!");
    print("2 + 3 = ");
    print_int(add(2, 3));
    println("");
    return 0;
}
