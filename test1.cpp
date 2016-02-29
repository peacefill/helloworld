#include<iostream>
#define PI 3.1415926

using namespace std;

int main()
{
    int n,year;
    float x,y;
    cin>>n;
    while(n>0)
    {
        n--;
        cin>>x>>y;
        year=PI*(x*x+y*y)/100;
        cout<<"Property "<<3-n<<": This property ... in year "<<year+1<<"."<<endl;
    }
    cout<<"END OF OUTPUT.";

}
