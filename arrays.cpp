// find greatest number in the given array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int greatest=arr[0];
//     for(int i=0; i<=9; i++){
//         if(arr[i]>greatest){
//             greatest=arr[i];
//         }
//     }
//     cout<<"Greatest: "<<greatest;
//     return 0;
// }

// find smallest number in the given array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int smallest=arr[0];
//     for(int i=0; i<=9; i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//     }
//     cout<<"Smallest: "<<smallest;
//     return 0;
// }

// sort array of any size
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10];
//     int temp;
//     cout<<"Enter 10 elements in the array: ";
//     for(int i=0; i<=9; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<=9; i++){
//         for(int j=i+1; j<=9; j++){
//             if(arr[i]>arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0; i<=9; i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

// // write a function to rotate an array by n position in d direction 
// #include<iostream>
// using namespace std;
// int main(){
//     int n, d, s, temp;

//     cout<<"Enter the size of array: ";
//     cin>>s;

//     int a[s];

//     cout<<"Enter the "<<s<<" elements in the array: ";
//     for(int i=0; i<s; i++){
//         cin>>a[i];
//     }

//     cout<<"Enter the position to rotate the array: ";
//     cin>>n;

//     cout<<"Enter the direction (0 for left, 1 for right): ";
//     cin>>d;

//     // if(n<0 || (d!=0 && d!=1)){
//     //     cout<<"Invalid input!"<<endl;
//     //     return 0;
//     // }

//     // n=n%5;

//     // while(n!=0){
//     //     int temp;

//     //     if(d==0){
//     //         temp=a[0];
//     //         for(int i=0; i<5-1; i++){
//     //             a[i]=a[i+1];
//     //         }
//     //         a[5-1]=temp;
//     //     } else if(d==1){
//     //         temp=a[5-1];
//     //         for(int i=5-1; i>0; i--){
//     //             a[i]=a[i-1];
//     //         }
//     //         a[0]=temp;
//     //     } else {
//     //         cout<<"Invalid direction!"<<endl;
//     //         return 0;
//     //     }
//     //     n--;
//     // }

//     // for(int i=0; i<=4; i++){
//     //     cout<<a[i]<<" ";
//     // }

//     n=n%s;

//     if(d==0){
//        while(n--){
//           temp=a[0];
//           for(int i=0; i<s-1; i++){
//               a[i]=a[i+1];
//           }
//           a[s-1]=temp;
//        }
//     } else {
//         while(n--){
//             temp = a[s - 1];
//             for(int i = s - 1; i > 0; i--){
//                 a[i] = a[i - 1];
//             }
//             a[0] = temp;
//         }
//     }

//     for(int i=0; i<s; i++){
//         printf("%d", a[i]);
//     }
//     return 0;
// }

// find adjacent duplicate of the element
// #include<iostream>
// using namespace std;
// int main(){
//     int s;
//     cout<<"Enter the size of array: ";
//     cin>>s;
//     int arr[s];
//     cout<<"Enter the "<<s<<" elements in the array: ";
//     for(int i=0; i<s; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<s; i++){
//         if(arr[i]==arr[i+1]){
//             cout<<"adjacent dupicate found for "<<arr[i]<<" at index: "<<arr[i+1];
//             break;
//         }
//     }
//     return 0;
// }

// find duplicate element in array
// #include<iostream>
// using namespace std;
// void func(int arr[] , int n ){ 
//     int count = 0 ;
//     int i ;
    
//     for( i = 0 ; i < n ; i++){
//         count = 0 ;
//         if(arr[i] == arr[i + 1] && arr[i-1] != arr[i]){
//             count++;
//         }
//         if(count == 1){
//             cout<<arr[i]<<" ";
//         }}}
// int main(){int arr[] = {10 , 10 , 10 , 20 , 20 , 30 , 40 , 40};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     func(arr , n);
//     }

// swap elements using specified indices
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1, 2, 3, 4, 5};
//     int a, b;
//     int temp;
    
//     cout<<"Enter the two indices to swap the elements: ";
//     cin>>a>>b;
    
//     temp=arr[a];
//     arr[a]=arr[b];
//     arr[b]=temp;

//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// print all unique element in the array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1, 1, 3, 4, 5};
// for (int i = 0; i < 5; i++)
//     {
//         int count = 0;

//         for (int j = 0; j < 5; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }

//         if (count == 1)
//         {
//             cout << arr[i] << " ";
//         }
//     }
//     return 0;
// }

// #include<iostream>using namespace std ;
// int main(){int arr1[] = { 10 , 20 , 30 , 40 , 50};
//     int n1 = sizeof(arr1)/sizeof(arr1[0]);

//     int arr2[] = { 60 , 70 , 80 , 90 , 100};
//     int n2 = sizeof(arr2)/sizeof(arr2[0]);
//  int arr3[10];
//     for(int i = 0 ; i < n1 ; i++){arr3[i] = arr1[i];
//     }for(int i = 0   ; i < n2  ; i++){arr3[n2 + i] = arr2[i];
//    }for(int i = 0 ; i < 10 ; i++){cout<<arr3[i]<<" ";
//     }}

#include<iostream>
using namespace std;
int main(){
    int arr[5]={7, 0, 2, 4, 0};
    for(int i=0; i<5; i++){
        int count=1;
        if(arr[i]==-1){
            continue;
        }

        for(int j=i+1; j<5; j++){
            if(arr[i]==arr[j]){
                count++; 
                arr[j]=-1;
            }   
        }
        cout<<arr[i]<<" occur "<<count<<" times"<<endl;
            
    }
    return 0;
}



    


































































