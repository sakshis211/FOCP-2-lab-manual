#include<iostream>
using namespace std;
class Numbers{
    int arr[5];
    int evenSum, oddSum;
    public:
    void getData(){
        cout<<"Enter 5 numbers:\n";
        for(int i=0;i<5;i++){
            cin>>arr[i];
        }
    }
    void calculate(){
        evenSum = 0;
        oddSum = 0;
        for(int i=0;i<5;i++){
            if(arr[i] % 2 == 0)
                evenSum += arr[i];
            else
                oddSum += arr[i];
        }
    }
    void display(){
        cout<<"Sum of even numbers = "<<evenSum<<endl;
        cout<<"Sum of odd numbers = "<<oddSum<<endl;
    }
};
int main(){
    Numbers n;
    n.getData();
    n.calculate();
    n.display();
    return 0;
}