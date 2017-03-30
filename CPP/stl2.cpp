#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int total;

    cin>> total;
    vector<int> v;

    while(total--){
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }

    int erase;
    int eraseStart;
    int eraseEnd;

    cin>>erase>>eraseStart>>eraseEnd;

    v.erase(v.begin()+erase-1);
    v.erase(v.begin()+eraseStart-1,v.begin()+eraseEnd-1);

    cout<<v.size()<<endl;

    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }


    return 0;
}
