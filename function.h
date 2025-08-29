#ifndef FUNCTION_H
#define FUNCTION_H

void print(const char *s);
void println(const char *s);
void print_int(int v);

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divi(int a, int b); // caller must avoid div-by-zero

#endif