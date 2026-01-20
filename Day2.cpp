#include<iostream>

using namespace std;

int main(){
    // float r,pi=3.14;
    // cout<<"Enter radius:";
    // cin>>r;
    // cout<<"area is:"<<pi*r*r;


    // int itemno,quantity,unit,Total,discount;
    // cout<<"Enter item no:";
    // cin>>itemno;
    // cout<<"enter quantity:";
    // cin>>quantity;
    // cout<<"enter unit:";
    // cin>>unit;
    // Total = quantity*unit;
    // cout<<"total bill:"<<Total;
    // discount=Total*20/100;
    // cout<<"Total amount to pay"<<discount;


    //   int a,b,c;
    
    //   cout<<"Enter first number:";
    //   cin>>a;
    //   cout<<"Enter second number:";
    //   cin>>b;
    // c=a;
    // a=b;
    // b=c;
    //   cout<<"After swapping:"<<a;
    //   cout<<"After swapping:"<<b;
      int num;
    float sal,bonus,result;

    cout<<"no. of employees:";
    cin>>num;

    for(int i=0;i<num;i++){

        cout<<"\nEnter salary:";
        cin>>sal;

        bonus = sal*12/100;
        result= bonus + sal;

        cout<<"\nNet salary after bonus:"<<result;
        
    }



    return 0;
}
