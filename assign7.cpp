// #include <iostream>
// #include <string.h>
// using namespace std;

// void findHcf(int a, int b) {
//   int temp;
//   while (b != 0) {
//     temp = b;
//     b = a % b;
//     a = temp;
//   }
//   cout << "HCF is " << a << endl;
// }

// int calVolume(int l, int w, int b) { return l * w * b; }

// float calVolume(int r, int h) { return (1.0 / 3.0) * 3.14 * r * r * h; }

// float calVolume(int r) { return (4.0 / 3.0) * 3.14 * r * r * r; }

// void printSubString(char str[], int si, int ei = -1) {
//   if (ei == -1) {
//     ei = strlen(str) - 1;
//   }
//   for (int i = si; i <= ei; i++) {
//     cout << str[i];
//   }
// }

// void swapArray(int arr1[], int arr2[], int size){
//     int temp;
//     for(int i=0; i<size; i++){
//         temp=arr1[i];
//         arr1[i]=arr2[i];
//         arr2[i]=temp;
//     }
//     for(int i=0; i<size; i++){
//         cout<<arr1[i];
//     }
//     for(int i=0; i<size; i++){
//         cout<<arr2[i];
//     }
// }

// void mergeArray(int a[], int b[], int s){
//     int size=s*2;
//     int c[size];
//     int temp;

//     for(int i=0; i<=s; i++){
//         c[i]=a[i];
//     }
//     for(int i=0; i<=s; i++){
//         c[s+i]=b[i];
//     }
//     for(int i=0; i<=size; i++){
//         for(int j=i+1; j<=size; j++){
//             if(c[j]>c[i]){
//                 temp=c[i];
//                 c[i]=c[j];
//                 c[j]=temp;
//             }
//         }
//     }
//     for(int i=0; i<=size; i++){
//         cout<<c[i];
//     }
// }

// int main() {
//   findHcf(48, 18);
//   cout << calVolume(10, 20, 30) << endl;
//   cout << calVolume(10, 20) << endl;
//   cout << calVolume(10) << endl;
//   char str[]="deepanshu";
//   printSubString(str, 2, 7);
//   printSubString(str, 2);
//   int arr1[5] = {10, 20, 30, 40, 50};
//   int arr2[5] = {50, 40, 30, 20, 10};
//   swapArray(arr1, arr2, 5);

//   mergeArray(arr1, arr2, 5);
//   return 0;
// }