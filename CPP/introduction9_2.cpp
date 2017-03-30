#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int total,query;
    cin>>total>>query;
    int **arr = new int*[total];
    int answer[query][2];


    for(int i = 0 ; i < total ; i++){
        int tmp;
        cin>>tmp;
        arr[i] = new int[tmp];

        for(int j = 0; j<tmp ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0 ; i<query ; i++){
        cin>>answer[i][0]>>answer[i][1];
    }

    for(int i = 0 ; i<query ; i++){
        cout<<arr[answer[i][0]][answer[i][1]]<<endl;
    }

    return 0;
}
