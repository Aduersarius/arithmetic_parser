#include <iostream>
using namespace std;
double d;
int main() {
    int a, b;

    char c;

    cin >>a>>c>>b;
    switch (c)
    {
        case '+':
            d = a+b;
            cout << d;
             break;
        case '-' :
            d = a-b;
            cout <<d;
             break;
        case '*':
            d=a*b;
            cout << d;
             break;
        case '/':
            d=a/b;
            cout << d;
             break;
        case '%' :
            d=a%b;
            cout << d;
             break;
        case '^' :
            d=a^b;
            cout << d;
             break;
        case '&':
            d=a*b;
            if (d==0) {cout << "False";}
            if (d==1) {cout << "True";}
            else {cout << "wrong value";}
             break;
        case '|':
            d=a+b-a*b;
            if (d==0) {cout << "False";}
            if (d==1) {cout << "True";}
            else {cout << "wrong value";};
            break;
        case '<':
            d=  a<<b;
            cout << d;
            break;
        case '>':
            d= a>>b;
            cout << d;
            break;
        default:
            cout << "unavailable option";





    }
    return 0;
}