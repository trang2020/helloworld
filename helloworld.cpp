#include <iostream>
#define PI 3.14;
#define Area(l, w) l*w

const double PI_ = 3.14;

using namespace std;

namespace n1 
{
    int x; 
    void m() {
        cout << "I like the weather" << endl;
    }
}
int main() 
{
    cout<<"Hello, World wow wow wow!"<<endl;
    int number;
    cout<<"Enter a number"<< endl;
    cin>>number;
    cout<<"The number is: "<<number<<endl;

    int x=2;
    int y=3;
    cout << Area(x,y) << endl;
    n1::m();
    return 0;
}