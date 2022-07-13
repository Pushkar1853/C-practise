#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int n,cows;
int positions[N];

bool can_place_cows(int minDist){
    int lastPos = -1;
    int cows_cnt = cows;
    for(int i=0; i<n; ++i){
        if(positions[i] - lastPos >= minDist || lastPos == -1){
            cows_cnt--;
            lastPos = positions[i];
        }
        if(cows_cnt == 0) break;
    }
    return cows_cnt == 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin >> n >> cows;
        for (int i = 0; i < n; ++i){
            cin>>positions[i];
        }
    }
    //  TTTTTTTTTTFFFFFFFFF
    int lo = 0 , hi =1e9 ,mid;
    while(hi - lo > 1){
        int mid =(lo+ hi)/2;
        if(can_place_cows(mid)){
            lo = mid;
        }
        else{
            hi = mid - 1;
        }
    } 
    if(can_place_cows(hi)){
        cout << hi << endl;
    }
    else{
        cout << lo << endl;
    }
}