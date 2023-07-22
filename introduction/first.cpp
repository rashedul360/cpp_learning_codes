#include <bits/stdc++.h>
using namespace std;
//===================== namespace declaration====================
namespace my
{
     void printHello()
     {
          cout << "hello from namespace function" << endl;
     }
}
int main()
{
     //========================= swap ========================
     int b = 100, c = 10;
     swap(b, c);
     cout << b << " " << c << endl;
     //======================== min , max =======================
     int a[] = {100, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0};
     int size = sizeof(a) / sizeof(a[0]);
     int mn = a[0], mx = a[size - 1];
     for (int i = 0; i < size; i++)
     {
          mn = min(mn, a[i]); // get the minimum
          mx = max(mx, a[i]); // get the maximum
     }
     cout << "min number: " << mn << " max number: " << mx << endl;
     //===================typecasting==========================
     int e = 100;
     double f = int(e);
     cout << "int to double typecasting " << fixed << setprecision(2) << f << endl;
     //==================dynamic memory allocation========================
     int *dyNamicMemory = new int[10];
     for (int i = 0; i < 10; i++)
     {
          dyNamicMemory[i] = i + 1;
          cout << "dynamic memory allocation value: " << dyNamicMemory[i] << endl;
     }
     //======================using name space============================
     my::printHello();
     //=========================input=================================
     int num;
     cout << "enter  int number: ";
     cin >> num;
     cout << "you are entering number " << num << endl;
     // ----------------------------------------------------------------
     char name[100];
     cout << "enter  your name:";
     // cin >> name; // it's not allow white space.;
     cin.getline(name, 100);
     cout << "your name is : " << name << endl;
     return 0;
}