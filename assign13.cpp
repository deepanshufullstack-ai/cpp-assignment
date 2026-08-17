#include<iostream>
using namespace std;

class Distance {
    private:
    int km, m, cm;
    public:
    void setDistance(int km1, int m1, int cm1){
        km=km1;
        m=m1;
        cm=cm1;
    }
    void getDistance(){
        cout<<"km="<<km<<" m="<<m<<" cm="<<cm<<endl;
    }
    void normalize(){
        m=m+cm/100;
        cm=cm%100;
        km=km+m/1000;
        m=m%1000;
    }
    Distance operator +(Distance d){
        Distance temp;
        temp.km=km+d.km;
        temp.m=m+d.m;
        temp.cm=cm+d.cm;
        temp.normalize();
        return temp;
    }
    Distance operator --(){
        Distance temp;
        if(km==0 && m==0 && cm==0){
            temp.km=km;
            temp.m=m;
            temp.cm=cm;
        } else {
            if(cm==0){
                cm=100;
                if(m==0){
                    m=999;
                    --km;
                } else {
                    --m;
                }
            }
            temp.cm=--cm;
            temp.m=m;
            temp.km=km;
        }
        return temp;
    }
    Distance operator --(int){
        Distance temp;
        temp.km=km;
        temp.m=m;
        temp.cm=cm;
        if(km==0 && m==0 && cm==0);
        else{
            if(cm==0){
                cm=100;
                if(m==0){
                    m=999;
                    --km;
                } else {
                    --m;
                }
                cm--;
            }
        }
        return temp;
    }
};
int main(){
    Distance d1, d2, d3;
    d1.setDistance(2, 100, 50);
    d1.getDistance();
    d2.setDistance(4, 500, 100);
    d2.getDistance();
    d3=d1+d2;
    d3.getDistance();
}