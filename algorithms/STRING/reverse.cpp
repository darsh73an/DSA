#include<iostream>
#include <cstring> 
using namespace std;

void reverse(char* word, int n){
   char st = 0 , end = n-1;

   while( st < end ){               // until st < end do swapping 
        swap(word[st++],word[end--]);                             //swap(word[st],word[end]); st++ end--;
   }
   cout <<"reverse of word is :" << word << endl;

}

int main () {

   char word[] = "apple";
   int n = strlen(word);

    reverse(word,n);


    return 0;
}