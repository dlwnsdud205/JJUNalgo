//
//  main.cpp
//  15656 N과 M (7)
//
//  Created by 이준영 on 2021/01/02.
//

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<int> vec;
deque<int> deq;

void go(int cnt){
    if(cnt >= M){
        for(int i = 0; i < deq.size(); i++){
            cout << deq[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = 0; i < vec.size(); i++){
        deq.push_back(vec[i]);
        go(cnt+1);
        deq.pop_back();
    }
}

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        int num;
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < vec.size(); i++){
        deq.push_back(vec[i]);
        go(1);
        deq.pop_back();
    }
    return 0;
}
