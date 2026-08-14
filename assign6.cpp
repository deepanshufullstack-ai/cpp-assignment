#include<iostream>
using namespace std;

void sortArrayOfNumbers(int a[], int s, bool asc=true){
    int temp;
    if(!asc){
        for(int i=0; i<s; i++){
            for(int j=i+1; j<s; j++){
                if(a[i]<a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
    } else {
        for(int i=0; i<s; i++){
            for(int j=i+1; j<s; j++){
                if(a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
    }

    for(int i=0; i<s; i++){
        cout<<a[i]<<" ";
    }
}

void sortString(char str[][20], int n, bool asc=true){
    char temp[20];
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(asc){
                if(strcmp(str[j], str[j+1])>0){
                    strcpy(temp, str[j]);
                    strcpy(str[j], str[j+1]);
                    strcpy(str[j+1], temp);
                }
            } else {
                if(strcmp(str[j], str[j+1])<0){
                    strcpy(temp, str[j]);
                    strcpy(str[j], str[j+1]);
                    strcpy(str[j+1], temp);
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<str[i]<<endl;
    }
}

void rotateArray(int a[], int s, int p=1, int d=1){
    int temp;
    if(d==-1){
        while(p--){
            temp=a[0];
            for(int i=0; i<s-1; i++){
                a[i]=a[i+1];
            }
            a[s-1]=temp;
        }
    } else {
        while(p--){
            temp=a[s-1];
            for(int i=s-1; i>0; i--){
                a[i]=a[i-1];
            }
            a[0]=temp;
        }
    }

    for(int i=0; i<s; i++){
        cout<<a[i]<<" ";
    }
} 

void lcmOfThree(int a, int b, int c){
    int max;
    max=a;
    if(b>max){
        max=b;
    }

    if(c>max){
        max=c;
    }

    while(1){
        if(max%a==0 && max%b==0 && max%c==0){
            cout<<"LCM of "<<a<<", "<<b<<" & "<<c<<" is "<<max;
            break;
        }
        max++;
    }
}

void primtFactors(int n){
    for(int i=2; i<=n; i++){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
}



int main(){
    // int a[5]={3, 1, 5, 2, 6};
    // sortArrayOfNumbers(a, 5, true);

    //     char a[5][20]={
    //     "Mango",
    //     "Apple",
    //     "Banana",
    //     "Orange",
    //     "Grapes"
    // };

    // sortString(a, 5, false);

    // int a[5]={3, 1, 5, 2, 6};
    // rotateArray(a, 5, 2, -1);

    // int a=4, b=6, c=8;
    // lcmOfThree(a, b, c);

    primtFactors(60);
    return 0;
}





































