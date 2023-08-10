#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Programmingp";
    int i = 0;
    while (i < s.length() - 1)
    {int flag = 0;
     
        for (int j = i + 1; j < s.length(); j++)
        {
            if(s.at(i)==s.at(j)){
                flag = 1;
            }
        }
        if (flag ==0)
        {
            cout<<s[i] <<"     "<<endl;
            break; 
        }
        i++;
    }
 
    return 0;
}
