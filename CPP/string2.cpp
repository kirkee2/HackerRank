#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
    vector<int> vec;
    int count =0;

    stringstream ss(str);

    for(int i = 0 ; i<str.size(); i++){
        if(str[i] == ','){
            count++;
        }
    }
    int arr[count+1];
    char ch;

    for(int i = 0 ; i<count+1; i++){
        ss>>arr[i]>>ch;
        vec.push_back(arr[i]);
    }

    return vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
