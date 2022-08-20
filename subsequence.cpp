#include <iostream>
#include <vector>
using namespace std;

void sub_sequence(string i, string o)
{
    if(i.length() == 0)
    {
        //means you have reached final
        cout<<o<<endl;
        return;
    }

    //include
    sub_sequence(i.substr(1), o);
    //exclude
    sub_sequence(i.substr(1), o + i[0]);
}
int main()
{
    string in = "abc";
    string op = "";

    sub_sequence(in, op);
    return 0;
}