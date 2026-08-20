#include <iostream>
using namespace std;

// class Time {
// private:
//   int hr, min, sec;

// public:
//   void setTime(int hr, int min, int sec) {
//     this->hr = hr;
//     this->min = min;
//     this->sec = sec;
//   }
//   void showTime() { cout << hr << ":" << min << ":" << sec << endl; }
//   void setHr(int hr) { this->hr = hr; }
//   void setMin(int min) { this->min = min; }
//   void setSec(int sec) { this->sec = sec; }
//   int getHr() { return hr; }
//   int getMin() { return min; }
//   int getSec() { return sec; }
//   bool operator>(Time t) {
//     if (hr > t.hr) {
//       return true;
//     } else if (hr < t.hr) {
//       return false;
//     } else if (min > t.min) {
//       return true;
//     } else if (min < t.min) {
//       return false;
//     } else if (sec > t.sec) {
//       return true;
//     } else {
//       return false;
//     }
//   }
// };

// void sortTime(Time t[], int s) {
//   Time temp;
//   for (int i = 1; i <= s; i++) {
//     for (int j = 0; j <= s; j++) {
//       if (t[j] > t[j + 1]) {
//         temp = t[j];
//         t[j] = t[j + 1];
//         t[j + 1] = temp;
//       }
//     }
//   }
// }

// void showTimeArray(Time t[], int s){
//     for(int i=0; i<=s; i++){
//         t[i].showTime();
//     }
// }

// int main() {
//   Time t1;
//   t1.setTime(10, 20, 30);
//   Time t2;
//   t2.setTime(12, 20, 30);
//   if (t1 > t2) {
//     cout << "t1 is greater than t2" << endl;
//   } else {
//     cout << "t1 is smaller than t2" << endl;
//   }
  
//   return 0;
// }


class String {
    private:
    char *s;
    int length;
    public: 
    String(){
        s=NULL;
        length=0;
    };
    void printString(){
        cout<<s<<endl;
    }
    void lowerCase(){
        for(int i=0; i<length; i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
    }
    void upperCase(){
        for(int i=0; i<length; i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i]=s[i]-32;
            }
        }
    }
    int getLength(){
        return length; 
    }
    char* getString(){
        return s;
    }
};
int main(){
    String s1;
    s1.lowerCase();
    s1.printString();
    s1.upperCase();
    s1.printString();
    s1.getLength();
    s1.getString();
    return 0;
}