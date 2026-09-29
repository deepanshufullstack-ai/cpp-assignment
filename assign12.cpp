// #include<iostream>
// using namespace std;
// class Complex {
//     private:
//     int a, b;
//     public:
//     void setData(int x, int y){
//         a=x;
//         b=y;
//     }
//     void showData(){
//         cout<<a<<endl;
//         cout<<b<<endl;
//     }
//     Complex operator+(Complex c){
//         Complex temp;
//         temp.a=a+c.a;
//         temp.b=b+c.b;
//         return temp;
//     }
//     Complex operator-(Complex c){
//         Complex temp;
//         temp.a=a-c.a;
//         temp.b=b-c.b;
//         return temp;
//     }
//     Complex operator*(Complex c){
//         Complex temp;
//         temp.a=a*c.a - b*c.b;
//         temp.b=a*c.b + b*c.a;
//         return temp;
//     }
//     bool operator==(Complex c){
//         if(a==c.a && b==c.b){
//             return true;
//         } else {
//             return false;
//         }
//     }
// };
// int main(){
//     Complex c1, c2;
//     c1.setData(10, 20);
//     c2.setData(30, 40);
//     Complex c3;
//     c3=c1+c2;
//     c3.showData();
//     c3=c1-c2;
//     c3.showData();
//     c3=c1*c2;
//     c3.showData();
//     if(c1==c2){
//         cout<<"c1 & c2 are equal";
//     } else {
//         cout<<"c1 & c2 are not equal";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Time{
//     private:
//     int hour, min, second;
//     public:
//     void setTime(int h, int m, int s){
//         hour=h;
//         min=m;
//         second=s;
//     }
//     void showTime(){
//         cout<<hour<<":"<<min<<":"<<second;
//     }
//     void normalize(){
//         if (second >= 60) { 
//             min = min + second / 60; 
//             second = second % 60; 
//         } 
//         if (min >= 60) { 
//             hour = hour + min / 60; 
//             min = min % 60; 
//         } 
//         if (hour >= 24) { 
//             hour = hour % 24; 
//         } 
//     }
//     bool operator>(Time t){
//         if(hour>t.hour){
//             return true;
//         } else if (hour<t.hour){
//             return false;
//         } else if(min>t.min){
//             return true;
//         } else if(min<t.min){
//             return false;
//         } else if(second>t.second){
//             return true;
//         } else {
//             return false;
//         }
//     }
//     // pre-increment ++t
//     Time operator++(){
//         second++;
//         normalize();
//         return *this;
//     }
//     // post-increment ++t
//     Time operator++(int){
//         Time temp=*this;
        
//         second++;
//         normalize();
        
//         return *this;
//     }
//     Time operator+(Time t){
//         Time temp;
//         temp.hour=hour+t.hour;
//         temp.min=min+t.min;
//         temp.second=second+t.second;
//         temp.normalize();
//         return temp;
//     }
// };
// int main(){
//     Time t1, t2;
//     t1.setTime(2, 45, 05);
//     t2.setTime(3, 45, 10);
//     if(t1>t2){
//         cout<<"t1 greatest"<<endl;
//     } else {
//         cout<<"t2 greatest"<<endl;
//     }
    
//     ++t2;
//     t2.showTime();

//     cout<<endl;
    
//     t2++;
//     t2.showTime();

//     cout<<endl;

//     Time t3;
//     t3=t1+t2;
//     t3.showTime();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Matrix{
//     private:
//     int m[2][2];
//     public:
//     void setMatrix(){
//         cout<<"Enter 4 elements: ";
//         for(int i=0; i<2; i++){
//             for(int j=0; j<2; j++){
//                 cin>>m[i][j];
//             }
//         }
//     }
//     void showMatrix(){
//         for(int i=0; i<2; i++){
//             for(int j=0; j<2; j++){
//                 cout<<m[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     Matrix operator+(Matrix M){
//         Matrix temp;
//         for(int i=0; i<2; i++){
//             for(int j=0; j<2; j++){
//                 temp.m[i][j]=m[i][j]+M.m[i][j];
//             }
//         }
//         return temp;
//     }
//     Matrix operator-(Matrix M){
//         Matrix temp;
//         for(int i=0; i<2; i++){
//             for(int j=0; j<2; j++){
//                 temp.m[i][j]=m[i][j]-M.m[i][j];
//             }
//         }
//         return temp;
//     }
//     Matrix operator*(Matrix M){
//         Matrix temp;
//         int sum, k;
//         for(int i=0; i<2; i++){
//             for(int j=0; j<2; j++){
//                 for(int k=0, sum=0; k<2; k++){
//                     sum+=m[i][k]*M.m[k][j];
//                 }
//                 temp.m[i][j]=sum;
//             }
//         }
//         return temp;
//     }
// };
// int main(){
//     Matrix m1, m2;
//     m1.setMatrix();
//     m2.setMatrix();
//     Matrix m3;
//     m3=m1+m2;
//     m3.showMatrix();
//     m3=m1-m2;
//     m3.showMatrix();
//     m3=m1*m2;
//     m3.showMatrix();
//     return 0;
// }
















