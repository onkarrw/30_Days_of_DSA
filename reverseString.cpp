// Reverse a string.


#include <iostream>
#include <string>
using namespace std;

void reverse(string s)
{
    if (s.length() == 0) {
        return;
    }

    cout << s.at(s.length() - 1); 

    reverse(s.substr(0, s.length() - 1)); 
}

int main()
{
    string s = "codejam";
    reverse(s);
  
}


//reverse a words from sentence.

/*

#include <iostream>
#include <string>
using namespace std;

void reverse(string s){

    int a=s.length();
    int b=s.length();
    for(int i=s.length();i>=0;i--){
        b--;
        while(s[i]==' '){
            if(b==0){
                cout<<s.substr(b,a);
                return;
            }
            cout<<s.substr(b+1,a);
           string p= s.erase(b+1,a);


            //cout<<s<<" q ";
        }
    }
}

int main(){
    string s="I am Ajay from codejam";
    reverse(s);
}

*/
