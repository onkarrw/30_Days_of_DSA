#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool areAnagrams(string s1, string s2)
{
    
    s1.erase(remove(s1.begin(), s1.end(), ' '), s1.end());
    s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());

    if (s1.length() != s2.length()) {
        return false;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}

int main()
{
    string str1 = "listen";
    string str2 = "silent";

    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
