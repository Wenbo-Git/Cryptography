#include <iostream>
using namespace std; 
  
int euclidean_algorithm(int a, int b)
{
    if(b == 0){
        return a;
    }
    else{
        return euclidean_algorithm(b, a%b);
    }
}

int main() 
{ 
    int a = 30;
    int b = 60;
    int res = euclidean_algorithm(a, b);
    cout<<"a="<<a<<" b="<<b<<" gcd="<<res;
} 