// #include <iostream>
// using namespace std;

// void findHCF(int a, int b)
// {
//     int temp;

//     while (b != 0)
//     {
//         temp = b;
//         b = a % b;
//         a = temp;
//     }
//     printf("HCF is %d", a);
// }

// void calVolume(int l, int w, int h)
// {
//     int v;
//     v = l * w * h;
//     cout << "Volume is " << v;
// }

// void calVolume(int r, int h)
// {
//     float v = 0;
//     v = (1.0 / 3.0) * 3.14 * r * r * h;
//     cout << "Volume is " << v;
// }

// void calVolume(int r)
// {
//     float v;
//     v = (4.0 / 3.0) * 3.14 * r * r * r;
//     cout << "Volume is " << v;
// }

// void printSubString(char str[], int si, int ei = -1)
// {
//     if (ei == -1)
//     {
//         ei = strlen(str) - 1;
//     }
//     for (int i = si; i <= ei; i++)
//     {
//         cout << str[i] << " ";
//     }
// }

// void swapTwoArrays(int a[], int b[], int s)
// {
//     int temp;
//     for (int i = 0; i < s; i++)
//     {
//         temp = a[i];
//         a[i] = b[i];
//         b[i] = temp;
//     }

//     for (int i = 0; i < s; i++)
//     {
//         cout << a[i] << " ";
//     }

//     cout << endl;

//     for (int i = 0; i < s; i++)
//     {
//         cout << b[i] << " ";
//     }
// }

// void mergeArrays(int a[], int b[], int s)
// {
//     int temp;
//     int c[s * 2];
//     for (int i = 0; i < s; i++)
//     {
//         c[i] = a[i];
//     }

//     for (int j = 0; j < s; j++)
//     {
//         c[s + j] = b[j];
//     }

//     for (int i = 0; i < s * 2; i++)
//     {
//         for (int j = i + 1; j < s * 2; j++)
//         {
//             if (c[i] > c[j])
//             {
//                 temp = c[i];
//                 c[i] = c[j];
//                 c[j] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < s * 2; i++)
//     {
//         cout << c[i] << " ";
//     }
// }

// int main()
// {
//     // int a, b;
//     // cout<<"Enter two numbers: ";
//     // cin>>a>>b;
//     // findHCF(a, b);

//     // int l, w, h;
//     // cout<<"Enter l, w & h: ";
//     // cin>>l>>w>>h;
//     // calVolume(l, w, h);

//     // int r1, h1;
//     // cout<<"Enter r & h: ";
//     // cin>>r1>>h1;
//     // calVolume(r1, h1);

//     // int r2;
//     // cout<<"Enter r: ";
//     // cin>>r2;
//     // calVolume(r2);

//     // char str[10];
//     // int si, ei;
//     // cout << "Enter a string: ";
//     // fgets(str, sizeof(str), stdin);
//     // cout << "Enter start index or end index of subString: ";
//     // cin >> si >> ei;
//     // printSubString(str, si, ei);
//     // printSubString(str, si);

//     // int s;
//     // cout << "Enter size of array: ";
//     // cin >> s;

//     // int a[s], b[s];

//     // cout << "Enter " << s << " elements of first array: ";
//     // for (int i = 0; i < s; i++)
//     // {
//     //     cin >> a[i];
//     // }

//     // cout << "Enter " << s << " elements of second array: ";
//     // for (int i = 0; i < s; i++)
//     // {
//     //     cin >> b[i];
//     // }

//     // swapTwoArrays(a, b, s);

//     int s;
//     cout << "Enter size of arrays: ";
//     cin >> s;
//     int a[s], b[s];
//     cout << "Enter " << s << " elements for first array: ";
//     for (int i = 0; i < s; i++)
//     {
//         cin >> a[i];
//     }

//     cout << "Enter " << s << " elements for second array: ";
//     for (int i = 0; i < s; i++)
//     {
//         cin >> b[i];
//     }
//     mergeArrays(a, b, s);

//     return 0;
// }

#include <iostream>
#include <string.h>
using namespace std;

void findHcf(int a, int b) {
  int temp;
  while (b != 0) {
    temp = b;
    b = a % b;
    a = temp;
  }
  cout << "HCF is " << a << endl;
}

int calVolume(int l, int w, int b) { return l * w * b; }

float calVolume(int r, int h) { return (1.0 / 3.0) * 3.14 * r * r * h; }

float calVolume(int r) { return (4.0 / 3.0) * 3.14 * r * r * r; }

void printSubString(char str[], int si, int ei = -1) {
  if (ei == -1) {
    ei = strlen(str) - 1;
  }
  for (int i = si; i <= ei; i++) {
    cout << str[i];
  }
}

void swapArray(int arr1[], int arr2[], int size){
    int temp;
    for(int i=0; i<size; i++){
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
    for(int i=0; i<size; i++){
        cout<<arr1[i];
    }
    for(int i=0; i<size; i++){
        cout<<arr2[i];
    }
}

void mergeArray(int a[], int b[], int s){
    int size=s*2;
    int c[size];
    int temp;

    for(int i=0; i<=s; i++){
        c[i]=a[i];
    }
    for(int i=0; i<=s; i++){
        c[s+i]=b[i];
    }
    for(int i=0; i<=size; i++){
        for(int j=i+1; j<=size; j++){
            if(c[j]>c[i]){
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    for(int i=0; i<=size; i++){
        cout<<c[i];
    }
}

int main() {
  findHcf(48, 18);
  cout << calVolume(10, 20, 30) << endl;
  cout << calVolume(10, 20) << endl;
  cout << calVolume(10) << endl;
  char str[]="deepanshu";
  printSubString(str, 2, 7);
  printSubString(str, 2);
  int arr1[5] = {10, 20, 30, 40, 50};
  int arr2[5] = {50, 40, 30, 20, 10};
  swapArray(arr1, arr2, 5);

  mergeArray(arr1, arr2, 5);
  return 0;
}