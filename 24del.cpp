#include <iostream>
#include <cmath>
using namespace std;
double f(double x){
    return abs(sin(x)) + exp(x);
}
double g(double x, double y){
    return log(f(x)*f(y)+f(x+y));
}
int main()
{
    int n;
    cin >> n;
    int v[n], w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[n];
        cin >> w[n];
    }
    
    for (int i = 1; i <= n+1; i++)
    {
        cout << (g(v[i-1], w[i-1])*g(v[i-1], w[i-1]) + (g(v[i-1]+w[i-1], v[i-1] - w[i-1])))/(g(w[i-1], 2.7));
    }
    
}*/
