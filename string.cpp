// #include<iostream>
// using namespace std;
// int main(){
//     char str[]="Harsh";
//     int count=0;
//     for(int i=0; str[i]!='\0'; i++){
//         cout<<str[i]<<endl;
//         count++;
//     }
//     cout<<"Length of string is: "<<count;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char str[]="Deepanshu";
//     char ch='D';
//     int count=0;
//     for(int i=0; str[i]!='\0'; i++){
//         if(ch==str[i]){
//             count++;
//         }
//     }
//     cout<<"occurence of given character is: "<<count;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char str[]="Deepanshu";
//     int count=0;
//     for(int i=0; str[i]!='\0'; i++){
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
//             count++;
//         }
//     }
//     cout<<"The string store "<<count<<" vowels";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char str[]="deepanshu";
//     for(int i=0; str[i]; i++){
//         str[i]=str[i]-32;
//     }
//     cout<<"String: "<<str;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char str[]="DEEPANSHU";
//     for(int i=0; str[i]; i++){
//         str[i]=str[i]+32;
//     }
//     cout<<"String: "<<str;
//     return 0;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char str[]="Deepanshu";
//     int l=strlen(str);
//     char ch;
//     for(int i=0; i<l/2; i++){
//         ch=str[i];
//         str[i]=str[l-1-i];
//         str[l-1-i]=ch;
//     }
//     cout<<str;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char str[]="Deepanshu";
//     int a=0, d, s;
//     for(int i=0; str[i]!='\0'; i++){
//         if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
//             a++;
//         } else if(str[i]>='0' && str[i]<='9'){
//             d++;
//         } else {
//             s++;
//         }
//     }
//     cout<<"Alphabets count: "<<a<<endl;
//     cout<<"Digit count: "<<d<<endl;
//     cout<<"Special character count: "<<s<<endl;
    
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    char str1[10]="Deepanshu";
    char str2[10];
    for(int i=0; str1[i]!='\0'; i++){
        str2[i]=str1[i];
    }
    cout<<str1<<endl;
    cout<<str2<<endl;
    return 0;
}







