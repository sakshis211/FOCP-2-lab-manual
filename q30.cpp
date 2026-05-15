#include<iostream>
using namespace std;
class Weather{
    float temp[30];
    float min;
    public:
    void getData(){
        cout<<"Enter temperatures for 30 days:\n";
        for(int i=0;i<30;i++){
            cin>>temp[i];
        }
    }
    void findMin(){
        min = temp[0];
        for(int i=1;i<30;i++){
            if(temp[i] < min){
                min = temp[i];
            }
        }
    }
    void display(){
        cout<<"Minimum temperature = "<<min<<endl;
    }
};
int main(){
    Weather w;
    w.getData();
    w.findMin();
    w.display();
    return 0;
}