#include<iostream>
#include<sstream>
#include<string>

using namespace std;
int main()
{
    int t,x,s,sum;
    string num;
    cin >> t;
    for(int i=0; i<t; i++){
        sum = 0;
        cin >> x;
        ostringstream str1;
        str1 << x;
        num = str1.str();
        s = num.size();
        sum = num[0]+num[s-1]-2*'0';
        cout << sum << "\n";

    }
    return 0;
}