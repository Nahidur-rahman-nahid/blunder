#include<bits/stdc++.h>
using namespace std;

void fibonacci(int n){
   if(n == 1)return  1;
   if(n == 2)return  1;
   cout << (fibonacci(n - 1)+fibonacci(n - 2)) << " ";

}
int main(){

    int n;
    cin >> n;
    fibonacci(n);

}
