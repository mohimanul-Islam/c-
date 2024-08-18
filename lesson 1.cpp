#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
    int num1, num2;
    cout<<"enter two number : "<<endl;
    cin>>num1>>num2;
    int sum = num1+num2;
    cout<<"addition is : "<<sum;
    cout<<endl;
    int sub = num1-num2;
    cout<<"subtraction is : "<<sub;
    cout<<endl;
    int mul = num1*num2;
    cout<<"multiplication is : "<<mul;
    cout<<endl;
    double div = (float)num1/num2;
    cout<<"divition is : "<<div;
    cout<<endl;
    double rem = num1%num2;
    cout<<"remainder is : "<<rem;
    getch();
}
