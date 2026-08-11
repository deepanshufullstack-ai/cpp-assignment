#include <iostream>
using namespace std;

void findHCF(int a, int b)
{
    int temp;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("HCF is %d", a);
}

void calVolume(int l, int w, int h)
{
    int v;
    v = l * w * h;
    cout << "Volume is " << v;
}

void calVolume(int r, int h)
{
    float v = 0;
    v = (1.0 / 3.0) * 3.14 * r * r * h;
    cout << "Volume is " << v;
}

void calVolume(int r)
{
    float v;
    v = (4.0 / 3.0) * 3.14 * r * r * r;
    cout << "Volume is " << v;
}

void mergeArrays(int a[], int b[], int s)
{
    int temp;
    int c[s * 2];
    for (int i = 0; i < s; i++)
    {
        c[i] = a[i];
    }

    for (int j = 0; j < s; j++)
    {
        c[s + j] = b[j];
    }

    for (int i = 0; i < s * 2; i++)
    {
        for (int j = i + 1; j < s * 2; j++)
        {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    for (int i = 0; i < s * 2; i++)
    {
        cout << c[i] << " ";
    }
}

void swapTwoArrays(int a[], int b[], int s)
{
    int temp;
    for (int i = 0; i < s; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < s; i++)
    {
        cout << b[i] << " ";
    }
}

void printSubString(char str[], int si, int ei = -1)
{
    if (ei == -1)
    {
        ei = strlen(str) - 1;
    }
    for (int i = si; i <= ei; i++)
    {
        cout << str[i] << " ";
    }
}

int main()
{
    // int a, b;
    // cout<<"Enter two numbers: ";
    // cin>>a>>b;
    // findHCF(a, b);

    // int l, w, h;
    // cout<<"Enter l, w & h: ";
    // cin>>l>>w>>h;
    // calVolume(l, w, h);

    // int r1, h1;
    // cout<<"Enter r & h: ";
    // cin>>r1>>h1;
    // calVolume(r1, h1);

    // int r2;
    // cout<<"Enter r: ";
    // cin>>r2;
    // calVolume(r2);

    // int s;
    // cout << "Enter size of arrays: ";
    // cin >> s;
    // int a[s], b[s];
    // cout << "Enter " << s << " elements for first array: ";
    // for (int i = 0; i < s; i++)
    // {
    //     cin >> a[i];
    // }

    // cout << "Enter " << s << " elements for second array: ";
    // for (int i = 0; i < s; i++)
    // {
    //     cin >> b[i];
    // }
    // mergeArrays(a, b, s);

    // int s;
    // cout << "Enter size of array: ";
    // cin >> s;

    // int a[s], b[s];

    // cout << "Enter " << s << " elements of first array: ";
    // for (int i = 0; i < s; i++)
    // {
    //     cin >> a[i];
    // }

    // cout << "Enter " << s << " elements of second array: ";
    // for (int i = 0; i < s; i++)
    // {
    //     cin >> b[i];
    // }

    // swapTwoArrays(a, b, s);

    char str[10];
    int si, ei;
    cout << "Enter a string: ";
    fgets(str, sizeof(str), stdin);
    cout << "Enter start index or end index of subString: ";
    cin >> si >> ei;
    printSubString(str, si, ei);
    printSubString(str, si);

    return 0;
}
