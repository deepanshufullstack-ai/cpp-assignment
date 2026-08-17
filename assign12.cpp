#include <iostream>
using namespace std;

// class Complex {
//     private:
//     int a, b;
//     public:
//     void setData(int x, int y){
//         a = x;
//         b = y;
//     }
//     void getData(){
//         cout << "The complex number is: " << a << " + " << b << "i" << endl;
//     }
//     Complex operator + (Complex c){
//         Complex temp;
//         temp.a = a + c.a;
//         temp.b = b + c.b;
//         return temp;
//     }
//     Complex operator - (Complex c){
//         Complex temp;
//         temp.a = a - c.a;
//         temp.b = b - c.b;
//         return temp;
//     }
//     Complex operator * (Complex c){
//         Complex temp;
//         temp.a = a * c.a - b * c.b;
//         temp.b = a * c.b + b * c.a;
//         return temp;
//     }
//     bool operator == (Complex c){
//         if(a == c.a && b == c.b){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

// int main(){
//     Complex c1, c2, c3;
//     c1.setData(3, 4);
//     c2.setData(1, 2);
//     c3 = c1 + c2;
//     c3.getData();
//     c3 = c1 - c2;
//     c3.getData();
//     c3 = c1 * c2;
//     c3.getData();
//     if(c1 == c2){
//         cout << "c1 and c2 are equal" << endl;
//     }
//     else{
//         cout << "c1 and c2 are not equal" << endl;
//     }
//     return 0;
// }

// class Time
// {
// private:
//     int hours, minutes, seconds;

// public:
//     void setTime(int h, int m, int s)
//     {
//         hours = h;
//         minutes = m;
//         seconds = s;
//     }
//     void getTime()
//     {
//         cout << "The time is: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
//     }
//     bool operator>(Time t)
//     {
//         if (hours > t.hours)
//         {
//             return true;
//         }
//         else if (hours < t.hours)
//         {
//             return false;
//         }
//         else if (minutes > t.minutes)
//         {
//             return true;
//         }
//         else if (minutes < t.minutes)
//         {
//             return false;
//         }
//         else if (seconds > t.seconds)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     Time operator+(Time t)
//     {
//         Time temp;
//         temp.hours = hours + t.hours;
//         temp.minutes = minutes + t.minutes;
//         temp.seconds = seconds + t.seconds;
//         if (temp.seconds >= 60)
//         {
//             temp.minutes += temp.seconds / 60;
//             temp.seconds = temp.seconds % 60;
//         }
//         if (temp.minutes >= 60)
//         {
//             temp.hours += temp.minutes / 60;
//             temp.minutes = temp.minutes % 60;
//         }
//         return temp;
//     }
// };

// int main()
// {
//     Time t1, t2, t3;
//     t1.setTime(3, 45, 30);
//     t2.setTime(4, 30, 15);

//     if (t1 > t2)
//     {
//         cout << "t1 is greater than t2" << endl;
//     }
//     else
//     {
//         cout << "t1 is not greater than t2" << endl;
//     }
//     t3 = t1 + t2;
//     t3.getTime();
//     return 0;
// }

class Matrix {
    private:
    int a[2][2];
    public: 
    void inputMatrix(){
        cout<<"Enter 4 elements: ";
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                cin>>a[i][j];
            }
        }
    }
    void displayMatrix(){
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                cout<<a[i][j]<<" "; 
            }
            cout<<endl;
        }
    }
    Matrix operator + (Matrix m){
        Matrix temp;
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                temp.a[i][j]=a[i][j]+m.a[i][j];
            }
        }
        return temp;
    }
    Matrix operator - (Matrix m){
        Matrix temp;
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                temp.a[i][j]=a[i][j]-m.a[i][j];
            }
        }
        return temp;
    }
    Matrix operator * (Matrix m){
        Matrix temp;
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                temp.a[i][j]=a[i][j]*m.a[i][j];
            }
        }
        return temp;
    }
};
int main(){
    Matrix m1, m2, m3;
    m1.inputMatrix();
    m1.displayMatrix();
    m2.inputMatrix();
    m2.displayMatrix();
    m3=m1+m2;
    m3.displayMatrix();
    m3=m1-m2;
    m3.displayMatrix();
    m3=m1*m2;
    m3.displayMatrix();
    return 0;
}