#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int total;

    cin>>total;
    int num[total];

    for(int i = 0 ; i < total ; i++){
        scanf("%d",&num[i]);
    }

    for(int i = total-1 ; i >=0 ; i--){
        printf("%d ",num[i]);
    }
    return 0;
}
