#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int total,query;
    cin>>total>>query;
    vector<vector<int>> v;
    int answer[query][2];


    for(int i = 0 ; i < total ; i++){
        int tmp;
        cin>>tmp;
        vector<int> vecTmp;

        for(int j = 0; j<tmp ; j++){
            int tmp2;
            cin>>tmp2;
            vecTmp.push_back(tmp2);
        }
        v.push_back(vecTmp);
    }

    for(int i = 0 ; i<query ; i++){
        cin>>answer[i][0]>>answer[i][1];
    }

    for(int i = 0 ; i<query ; i++){
        cout<<v[answer[i][0]][answer[i][1]]<<endl;
    }

    return 0;
}
