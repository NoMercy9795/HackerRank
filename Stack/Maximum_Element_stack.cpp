#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;


int main() {
     int n,type,data;
    stack<int> s;
    stack<int> m;
     cin >> n;
    while(n--){
        cin >> type;
        if(type == 1){
            cin >> data;
            m.push(data);
            if(s.empty()){
                s.push(data);
            }
            else{
                if(data > s.top() ){
                    s.push(data);
                }
                else{
                    data = s.top();
                    s.push(data);
                    
                }
            }
            
        }
        else if(type == 2){
                s.pop();
                m.pop();
            }
            else{
                cout << s.top() <<"\n";
            }
    }
    return 0;
}
