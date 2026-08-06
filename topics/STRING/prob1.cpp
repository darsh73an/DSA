#include<iostream>
#include<string>
using namespace std;

// Count how many times lowercase vowels occurred in a String entered by the user



int main () {

    string str;
    int count = 0;

    cout << "Enter your string :";
    getline(cin,str);

    

    for(int i=0; i<str.length(); i++){          // idx element of string entered bu user
            if(str[i] == 'a' || str[i] ==  'e' || str[i] ==  'i' || str[i] ==  'o' || str[i] ==  'u'){
                count++;
            }
    }

    cout << "No. of times lowercase vowels occured in your string :"<<count<<endl;

    return 0;
}