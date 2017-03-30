#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int total;
    cin>>total;
    vector<int> v;

    while(total--){
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }

    sort(v.begin(),v.end());

    for(int i = 0 ; i<v.size() ;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
