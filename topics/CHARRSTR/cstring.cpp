#include <iostream>
#include <cstring>   // for strcpy, strcat, strcmp
using namespace std;

int main() {




    // ---------------- strcpy() ----------------
    char src[] = "Hello";
    char dest[20];

    strcpy(dest, src);                      // pasting src to destination
    cout << "After strcpy:" << endl;
    cout << "Source = " << src << endl;
    cout << "Destination = " << dest << endl;

    cout << endl;


    






    // ---------------- strcat() ----------------
    char str1[20] = "Hello ";
    char str2[] = "World";

    strcat(str1, str2);
    cout << "After strcat:" << endl;
    cout << "Result = " << str1 << endl;

    cout << endl;








    // ---------------- strcmp() ----------------
    char s1[] = "apple";
    char s2[] = "banana";

    int result = strcmp(s1, s2);

    cout << "After strcmp:" << endl;
    if (result == 0)
        cout << "Strings are equal" << endl;
    else if (result < 0)
        cout << "apple is smaller than banana" << endl;
    else
        cout << "apple is greater than banana" << endl;

    return 0;
}
