#include <iostream>
#include <string>
using namespace std;

bool check(string s, int start, int end)
{
    int r1 = 0, s1 = 0;
    int rc = 0, sc = 0;

    for (int i = start; i <= end; i++)
    {
        if (s.at(i) == '(')
        {
            r1++;
        }
        else if (s.at(i) == '[')
        {
            s1++;
        }
        else if (s.at(i) == ')')
        {
            rc++;
        }
        else if (s.at(i) == ']')
        {
            sc++;
        }

        if (rc > r1 || sc > s1)
        {
            return false;  
        }
        
        if (s.at(i) == '(')
        {
            int j = i + 1;  
            int k = 0;
            
            while (j <= end)
            {
                if (s.at(j) == '(')
                {
                    k++;
                }
                else if (s.at(j) == ')')
                {
                    if (k == 0)
                    {
                        
                        if (!check(s, i + 1, j - 1))
                        {
                            return false; 
                        }
                        i = j;  
                        break;  
                    }
                    else
                    {
                        k--;
                    }
                }
                j++;
            }
        }
        else if (s.at(i) == '[')
        {
            int j = i + 1;  
            int k = 0;
            
            while (j <= end)
            {
                if (s.at(j) == '[')
                {
                    k++;
                }
                else if (s.at(j) == ']')
                {
                    if (k == 0)
                    {
                        
                        if (!check(s, i + 1, j - 1))
                        {
                            return false;  
                        }
                        i = j;  
                        break;  
                    }
                    else
                    {
                        k--;
                    }
                }
                j++;
            }
        }
    }

    return (r1 == rc) && (s1 == sc);
}

bool isValid(string s)
{
    int length = s.length();
    return check(s, 0, length - 1);
}

int main()
{
    string s = "([])";
    cout << isValid(s);
    return 0;
}
