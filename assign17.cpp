#include<iostream>
using namespace std;

class Time {
    private:
    int hr, min, sec;
    public:
    void setTime(int hr, int min, int sec){
        this->hr=hr;
        this->min=min;
        this->sec=sec;
    }
    void showTime(){
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
    
    
};

int main(){
    return 0;
}