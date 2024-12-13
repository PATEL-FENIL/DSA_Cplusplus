#include<bits/stdc++.h>
using namespace std;
int fibonacciandPrint(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    int fn_1 = fibonacciandPrint(n - 1);
    int fn_2 = fibonacciandPrint(n - 2);
    int fn = fn_1 + fn_2;
    return fn;
}
int main()
{
    int n;
    cout << "Enter a number you want to find fibonacci series" << endl;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
       cout << fibonacciandPrint(i) << " ";
    }
    cout<<endl;
    int fib = fibonacciandPrint(n);
    cout << "Fibonacci of " << n << " is " << fib;
    return 0;
}