#include<iostream>
using namespace std;

//1- Adding 3 numbers
int adding3numbers()
{
    int a,b,c,d;
    cout<<"Enter your 1st Number:";
    cin>>a;
    cout<<"Enter your 2nd Number:";
    cin>>b;
    cout<<"Enter your 3rd Number:";
    cin>>c;
    d= a+b+c;
    cout<<"The sum of your 3 numbers is: "<<d;
    return 0;
}

//2- Adding 5 numbers
int adding5numbers()
{
    int a,b,c,d,e,f;
    cout<<"Enter your 1st Number:";
    cin>>a;
    cout<<"Enter your 2nd Number:";
    cin>>b;
    cout<<"Enter your 3rd Number:";
    cin>>c;
    cout<<"Enter your 4th Number:";
    cin>>d;
    cout<<"Enter your 5th Number:";
    cin>>e;
    f= a+b+c+d+e;
    cout<<"The sum of your 3 numbers is: "<<f;
    return 0;
}

//3- Comaparing which number is greater from the 3
int comparingnumbers()
{
   int a,b,c;
    cout<<"Enter your 1st Number:";
    cin>>a;
    cout<<"Enter your 2nd Number:";
    cin>>b;
    cout<<"Enter your 3rd Number:";
    cin>>c;
    if(a>b && a>c){
        cout<<"1st number is the Greaterst Number ";
    }
    else if (b>a && b>c){
        cout<<"2nd number is the Greaterst Number";
    }
    else{
        cout<<"3rd number is the Greaterst Number";
    }
    return 0;
}

//4- Find type of roots of a quadratic polynomial
int quadraticroot()
{
    int a,b,c,d;
    cout<<"Enter your 1st coefficient:";
    cin>>a;
    cout<<"Enter your 2nd coefficient:";
    cin>>b;
    cout<<"Enter your 3rd coefficient:";
    cin>>c;

    d= (b*b)-(4*a*c);
    if (d>0)
    {
        cout<< "The quadratic polynomial has Real and Distinct roots!";
    }
    else if (d=0)
    {
        cout<< "The quadratic polynomial has Real and Equal roots!";
    }
    else
    {
        cout<<"The quadratic polynomial has Imaginary Roots!";
    }
    return 0;
}

int main()
{
    adding5numbers();
}