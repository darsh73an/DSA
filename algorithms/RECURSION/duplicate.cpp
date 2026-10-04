#include<iostream>
#include<string>
using namespace std;

//remove duplicatess in recursion using whole alphabet map[26] with init with false and mapidx using ith element - 'a' for index like frequency

void duplicate(string str,string ans,int i,int map[26]){

    //BC base case
    if( i == str.size()){
        cout << ans << endl;
        return;
    }


    int mapIdx = (int)(str[i] - 'a'); // for idx of every element in alphabet

    if(map[mapIdx]){        // like frequency if not in str then add if there then dont add
        duplicate(str,ans,i+1,map);
    }
    else{ // map[mapIdx] == false
        map[mapIdx] = true;             // for making the map that the idx value is now stored
        duplicate(str,ans+str[i],i+1,map);
    }
}

int main () {

    string str = "apnnacollege";
    string ans = "";
    int map[26] = {false};

    duplicate(str,ans,0,map);

    return 0;
}