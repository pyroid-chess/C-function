#include <stdio.h>   
#include "function.h"

void print(const char *s) {
    while (*s) putchar(*s++);
}

void println(const char *s) {
    print(s);
    putchar('\n');
}

void print_int(int v) {
    char buf[32];
    int i = 0, neg = 0;

    if (v == 0) { putchar('0'); return; }
    if (v < 0) { neg = 1; v = -v; }

    while (v > 0 && i < (int)sizeof(buf)) {
        buf[i++] = '0' + (v % 10);
        v /= 10;
    }

    if (neg) putchar('-');
    while (i--) putchar(buf[i]);
}

int add(int a, int b){
     return a + b; 
     }
int sub(int a, int b){
     return a - b; 
     }
int mul(int a, int b){ 
     return a * b; 
}
int divi(int a, int b){
     return b ? (a / b) : 0;
      }