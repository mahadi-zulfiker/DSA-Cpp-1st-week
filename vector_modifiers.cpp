#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,2,5,2};
    // vector<int> v2 = {100,200,300};
    // vector<int> v2;
    // v2 = v;

    // for(int i = 0; i < v2.size();i++){
    //     cout << v2[i] << " ";
    // }

    // v.insert(v.begin()+2,v2.begin(),v2.end());

    // v.erase(v.begin()+1,v.begin()+5);

    // replace(v.begin(), v.end()-1,2,100);

    auto it = find(v.begin(), v.end(), 100);

    if(it == v.end()){
        cout << "Not Found";
    }
    else{
        cout << "Found";
    }
    return 0;
}