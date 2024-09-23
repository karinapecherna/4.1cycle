#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int k, N, i;
    double S;
    cout << "k = "; cin >> k;
    cout << "N = "; cin >> N;
    S = 0;
    i = k;
    while (i <= N)
    {
        S += (1 + sqrt(1 + k * k)) / (k * k);
        i++;
    }
    cout << S << endl;
 
        S = 0;
    i = k;
    do {
        S += (1 + sqrt(1 + k * k)) / (k * k);
        i++;
    } while (i <= N);
    cout << S << endl;
    S = 0;
    for (i = k; i <= N; i++)
    {
        S += (1 + sqrt(1 + k * k)) / (k * k);
    }
    cout << S << endl;
    S = 0;
    for (i = N; i >= k; i--)
    {
        S += (1 + sqrt(1 + k * k)) / (k * k);
    }
    cout << S << endl;
    return 0;
}
          
            
            
           
       