#include <stdio.h>

/*
Task:
Write a function long long factorial(int n) that computes n!
using a loop (not recursion).

In main():
  - Ask user for an integer n
  - If n is negative, print an error and exit
  - Otherwise, call factorial and print the result


*/

long long factorial(int n) {
long long fact = 1;
for (int i = 1; i <= n; i++) {
    fact = fact * i;
}
return fact;
}

int main(void) {
int n;
printf("Enter an integer n: ");
if (scanf("%d", &n) != 1) {
    printf("Error, invalid input.\n");
    return 1;
}

if (n < 0) {
    printf("Error: n must not be negative.\n");
    return 1;
}
printf("Factorial is: %lld\n", factorial(n));
return 0;

}
