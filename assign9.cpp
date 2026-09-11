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
//         cout<<"a:"<<a<<" b:"<<b<<endl;
//     }
//     Complex add(Complex c){
//         Complex temp;
//         temp.a=a+c.a;
//         temp.b=b+c.b;
//         return temp;
//     }
//     Complex subtract(Complex c){
//         Complex temp;
//         temp.a=a+c.a;
//         temp.b=b+c.b;
//         return temp;
//     }
//     Complex mutliply(Complex c){
//         Complex temp;
//         temp.a=a*c.a-b*c.b;
//         temp.b=a*c.b+b*c.a;
//         return temp;
//     }
// };
// int main(){
//     Complex c1, c2, c3;
//     c1.setData(10, 20);
//     c1.showData();
//     c2.setData(20, 10);
//     c2.showData();
//     c3=c1.add(c2);
//     c3.showData();
//     c3=c1.subtract(c2);
//     c3.showData();
//     c3=c1.mutliply(c2);
//     c3.showData();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Time {
//     private:
//     int h, m, s;
//     public:
//     void setTime(int h1, int m1, int s1){
//         h=h1;
//         m=m1;
//         s=s1;
//     }
//     void showTime(){
//         cout<<h<<"/"<<m<<"/"<<s<<endl;
//     }
//     void normalize(){
//         m=m+s/10;
//         s=s%60;
//         h=h+m/60;
//         m=m%60;
//     }
//     Time add(Time t){
//         Time temp;
//         temp.h=h+t.h;
//         temp.m=m+t.m;
//         temp.s=s+t.s;
//         return temp;
//     }
//     bool greatestTime(Time t){
//         if(h>t.h){
//             return true;
//         } else if (h<t.h){
//             return false;
//         } else if(m>t.m){
//             return true;
//         } else if(m<t.m){
//             return false;
//         } else if(s>t.s){
//             return true;
//         } else {
//             return false;
//         }
//     }
// };
// int main(){
//     Time t1, t2, t3;
//     t1.setTime(4, 00, 00);
//     t1.normalize();
//     t1.showTime();
//     t2.setTime(3, 00, 00);
//     t2.normalize();
//     t2.showTime();
//     t3=t1.add(t2);
//     t3.normalize();
//     t3.showTime();
//     if(t1.greatestTime(t2)){
//         cout<<"T1 is Greatest";
//     } else {
//         cout<<"T2 is Greatest";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class TestResult
// {
//     int rollNo, right, wrong, netScore;
//     static int rightWeightAge, wrongWeightAge;

// public:
//     void set_rollNo(int r)
//     {
//         rollNo = r;
//     }
//     void set_right(int r)
//     {
//         right = r;
//     }
//     void set_wrong(int w)
//     {
//         wrong = w;
//     }
//     void set_netScore(int n)
//     {
//         netScore = n;
//     }
//     static void set_rightWeightAge(int r)
//     {
//         rightWeightAge = r;
//     }
//     static void set_wrongWeightAge(int w)
//     {
//         wrongWeightAge = w;
//     }
//     int show_rollNo()
//     {
//         return rollNo;
//     }
//     int show_right()
//     {
//         return right;
//     }
//     int show_wrong()
//     {
//         return wrong;
//     }
//     int show_netScore()
//     {
//         return netScore;
//     }
//     static int show_rightWeightAge()
//     {
//         return rightWeightAge;
//     }
//     static int show_wrongWeightAge()
//     {
//         return wrongWeightAge;
//     }
// };
// int TestResult::rightWeightAge = 0;
// int TestResult::wrongWeightAge = 0;
// void setTestResult(TestResult &t, int r, int right, int wrong)
// {
//     t.set_rollNo(r);
//     t.set_right(right);
//     t.set_wrong(wrong);
//     t.set_netScore(t.show_right() * TestResult::show_rightWeightAge() - t.show_wrong() * TestResult::show_wrongWeightAge());
// }
// void sortByNetScore(TestResult t[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (t[i].show_netScore() < t[j].show_netScore())
//             {
//                 TestResult temp = t[i];
//                 t[i] = t[j];
//                 t[j] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     TestResult t1;
//     t1.set_rollNo(10);
//     t1.set_right(5);
//     t1.set_wrong(2);
//     t1.set_netScore(0);
//     cout << "Roll no: " << t1.show_rollNo();
//     cout << "Right: " << t1.show_right();
//     cout << "Wrong: " << t1.show_wrong();
//     cout << "Net Score: " << t1.show_netScore();

//     TestResult::set_rightWeightAge(10);
//     cout << "RightWeightAge: " << TestResult::show_rightWeightAge();

//     TestResult t2;
//     setTestResult(t2, 10, 5, 2);
//     cout << "Roll no: " << t2.show_rollNo();
//     cout << "Right: " << t2.show_right();
//     cout << "Wrong: " << t2.show_wrong();
//     cout << "Net Score: " << t2.show_netScore();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Matrix{
//     private:
//     int mat[3][3];
//     public:
//     void setMatrix(){
//         cout<<"Enter 9 elements of matrix: ";
//         for(int i=0; i<=2; i++){
//             for(int j=0; j<=2; j++){
//                 cin>>mat[i][j];
//             }
//         }
//     }
//     void showMatrix(){
//         for(int i=0; i<=2; i++){
//             for(int j=0; j<=2; j++){
//                 cout<<mat[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     Matrix add(Matrix m){
//         Matrix temp;
//         for(int i=0; i<=2; i++){
//             for(int j=0; j<=2; j++){
//                 temp.mat[i][j]=mat[i][j]+m.mat[i][j];
//             }
//         }
//         return temp;
//     }
//     Matrix sabtract(Matrix m){
//         Matrix temp;
//         for(int i=0; i<=2; i++){
//             for(int j=0; j<=2; j++){
//                 temp.mat[i][j]=mat[i][j]-m.mat[i][j];
//             }
//         }
//         return temp;
//     }
//     Matrix multiply(Matrix m){
//         Matrix temp;
//         int sum;
//         for(int i=0; i<=2; i++){
//             for(int j=0; j<=2; j++){
//                 for(int k=0, sum=0; k<=2; k++){
//                     sum=sum+mat[i][k]*m.mat[k][j];
//                 }
//                 temp.mat[i][j]=sum;
//             }
//         }
//         return temp;
//     }
//     Matrix transpose(){
//         Matrix temp;
//         for(int i=0; i<=2; i++){
//             for(int j=0; j<=2; j++){
//                 temp.mat[i][j]=mat[i][j];
//             }
//         }
//         return temp;
//     }
//     bool isSingular(){
//         int s;
//         s=mat[0][0]*(mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1])-mat[0][1]*(mat[1][0]*mat[2][2]-mat[1][2]*mat[2][0])+mat[0][2]*(mat[1][0]*mat[2][1]-mat[1][1]*mat[2][0]);
//         if(s==0){
//             return true;
//         } else {
//             return false;
//         }
//     }
// };
// int main(){
//     Matrix m1, m2, m3;
//     m1.setMatrix();
//     m1.showMatrix();
//     m2.setMatrix();
//     m2.showMatrix();
//     m3=m1.add(m2);
//     m3.showMatrix();
//     return 0;
// }
