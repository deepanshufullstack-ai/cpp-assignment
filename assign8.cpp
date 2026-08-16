#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setValues(int x, int y)
    {
        a = x;
        b = y;
    }
    void showValues()
    {
        cout << "a=" << a << " & " << "b=" << b;
    }
};

class Time
{
private:
    int h, m, s;

public:
    void setValues(int x, int y, int z)
    {
        h = x;
        m = y;
        s = z;
    }
    void showValues()
    {
        cout << "Time is " << h << " hr " << m << " min " << s << " sec";
    }
};

class Date
{
private:
    int d, m, y;

public:
    void setValues(int a, int b, int c)
    {
        d = a;
        m = b;
        y = c;
    }
    void showValues()
    {
        cout << d << "/" << m << "/" << y << endl;
    }
    void shotDate()
    {
        cout << d << "-" << m << "-" << y << endl;
    }
    void showDateWithMonthName()
    {
        switch (m)
        {
        case 1:
            cout << d << "-" << "Jan" << "-" << y << endl;
            break;

        case 2:
            cout << d << "-" << "Fab" << "-" << y << endl;
            break;

        case 3:
            cout << d << "-" << "Mar" << "-" << y << endl;
            break;

        case 4:
            cout << d << "-" << "Apr" << "-" << y << endl;
            break;

        case 5:
            cout << d << "-" << "May" << "-" << y << endl;
            break;

        case 6:
            cout << d << "-" << "Jun" << "-" << y << endl;
            break;
        case 7:
            cout << d << "-" << "Jul" << "-" << y << endl;
            break;
        case 8:
            cout << d << "-" << "Aug" << "-" << y << endl;
            break;
        case 9:
            cout << d << "-" << "Sep" << "-" << y << endl;
            break;
        case 10:
            cout << d << "-" << "Oct" << "-" << y << endl;
            break;
        case 11:
            cout << d << "-" << "Nov" << "-" << y << endl;
            break;

        case 12:
            cout << d << "-" << "Dec" << "-" << y << endl;
            break;

        default:
            cout << d << "-" << "Invalid" << "-" << y << endl;
            break;
        }
    }
};

class Circle
{
private:
    int r;

public:
    void setRadius(int x)
    {
        r = x;
    }
    void getRadius()
    {
        cout << "Radius is " << r << endl;
    }
    float calAreaOfCircle()
    {
        return 3.14 * r * r;
    }
    float calCir()
    {
        return 2 * 3.14 * r;
    }
};

int main()
{
    // Complex b1;
    // b1.setValues(3, 4);
    // b1.showValues();

    // Time t1;
    // t1.setValues(1, 25, 30);
    // t1.showValues();

    // Date d1;
    // d1.setValues(14, 8, 2026);
    // d1.showValues();
    // d1.shotDate();
    // d1.showDateWithMonthName();

    Circle c1;
    c1.setRadius(5);
    c1.getRadius();
    cout << c1.calAreaOfCircle() << endl;
    cout << c1.calCir() << endl;
    return 0;
}
