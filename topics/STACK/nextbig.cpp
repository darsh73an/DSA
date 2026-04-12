#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nxtGreater(vector<int> vec,int n){

    vector<int> ans(n);
    stack<int> s;

    for(int i=n-1;i>=0;i--){

        while(!s.empty() && s.top()<=vec[i]){
            s.pop();
        }

        if(s.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();
        }

        s.push(vec[i]);
    }

    return ans;
}

int main(){

    vector<int> vec = { 100 , 80 , 75 , 90 , 45, 95, 100 };
    int n = vec.size();

    vector<int> res = nxtGreater(vec,n);

    for(int x : res){
        cout<<x<<" ";
    }
    cout << endl;

    return 0;

}