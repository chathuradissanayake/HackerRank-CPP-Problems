#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//https://www.hackerrank.com/challenges/arrays-introduction/problem

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i < n; i++){
        cin>>arr[i];
    }
    for(int j=n-1; j>= 0 ; j--)
    {
        cout << arr[j] << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
