#include <iostream>
#include <string>

using namespace std;



void make_upper_case(string& s)
{
    for(unsigned int i=0; i<s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= ('a'-'A');
    }
}

void make_lower_case(string& s)
{
    for(unsigned int i=0; i<s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += ('a'-'A');
    }
}


int main()
{
    string a = "a1w2f4h7";
    string b = "A1S3J6D";

    make_upper_case(a);
    cout<<a<<endl;

    make_lower_case(b);
    cout<<b;

    return 0;
}

/*
output:

A1W2F4H7
a1s3j6d
*/
