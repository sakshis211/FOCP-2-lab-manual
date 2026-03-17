// #include <iostream>
// using namespace std;

// class Addition
// {
//     int a, b, sum;

// public:
//     void getData();

//     void display();
// };

// void Addition ::getData()

// {
//     cout << "ENTER 1ST NO";
//     cin >> a;
//     cout << "ENTER 2ND NO";
//     cin >> b;
// }

// void Addition :: display()
// {
//     sum = a + b;

//     cout << "SUM OF TWO NO IS" << sum;
// }

// int main()
// {

//     Addition a1;
//     a1.getData();
//     a1.display();

//     return 0;
// }


#include <iostream>
using namespace std;

// class Addition
// {
//     int a, b,c,avg, sum;

// public:
//     void getData();

//     void display();
// };

// void Addition ::getData()

// {
//     cout << "ENTER 1ST NO";
//     cin >> a;
//     cout << "ENTER 2ND NO";
//     cin >> b;
//     cout<<"Enter 3rd marks";
//     cin>>c;
// }
// void Addition :: display()
//  {
//      sum = a + b+c;

//     cout << "SUM OF TWO NO IS" << sum;
//     avg=a+b+c/3;
//     cout<<"\nThe average marks of student is:"<<avg;
// }

// int main()
// {

//     Addition a1;
//     a1.getData();
//     a1.display();
// return 0;}
// QUESTION 2

/*
    class Circle {
        float radius;

    public:
        void getRadius() {
            cout << "Enter radius of the fountain: ";
            cin >> radius;
        }

        void calculateArea() {
            float area = 3.14 * radius * radius;
            cout << "Area of the circular fountain = " << area;
        }
    };

    int main() {
        Circle obj;
        obj.getRadius();
        obj.calculateArea();
        return 0;
}

*/// QUESTION 3

/*

    class Temperature {
        float temp;

    public:
        void getFahrenheit() {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
        }

        void toCelsius() {
            float c = (temp - 32) * 5 / 9;
            cout << "Temperature in Celsius = " << c << endl;
        }

        void getCelsius() {
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
        }

        void toFahrenheit() {
            float f = (temp * 9 / 5) + 32;
            cout << "Temperature in Fahrenheit = " << f << endl;
        }
    };

    int main() {
        Temperature obj;
        obj.getFahrenheit();
        obj.toCelsius();

        obj.getCelsius();
        obj.toFahrenheit();

        return 0;
    }

*/
// QUESTION 4

/*

    class Bill {
        int itemNo, quantity;
        float unitPrice;

    public:
        void getData() {
            cout << "Enter item number: ";
            cin >> itemNo;
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Enter unit price: ";
            cin >> unitPrice;
        }

        void calculateBill() {
            float amount = quantity * unitPrice;
            float discount = amount * 0.20;
            float total = amount - discount;

            cout << "Total amount before discount = " << amount << endl;
            cout << "Discount (20%) = " << discount << endl;
            cout << "Final bill amount = " << total << endl;
        }
    };

    int main() {
        Bill obj;
        obj.getData();
        obj.calculateBill();
        return 0;
    }

*/// QUESTION 5


    // class Swap {
    //     int a, b;

    // public:
    //     void getData() {
    //         cout << "Enter two numbers: ";
    //         cin >> a >> b;
    //     }

    //     void usingTemp() {
    //         int temp = a;
    //         a = b;
    //         b = temp;
    //         cout << "After swapping using temp: " << a << " " << b << endl;
    //     }

    //     void withoutTemp() {
    //         a = a + b;
    //         b = a - b;
    //         a = a - b;
    //         cout << "After swapping without temp: " << a << " " << b << endl;
    //     }
    // };

    // int main() {
    //     Swap obj;
    //     obj.getData();
    //     obj.usingTemp();
    //     obj.withoutTemp();
    //     return 0;
    // }

// Question:6
// class Salary {
//     int empCount;
//     float basic;

// public:
//     void getData() {
//         cout << "Enter number of employees: ";
//         cin >> empCount;
//     }

//     void calculateSalary() {
//         for (int i = 1; i <= empCount; i++) {
//             cout << "\nEnter basic salary of employee " << i << ": ";
//             cin >> basic;

//             float bonus = basic * 0.12;
//             float netSalary = basic + bonus;

//             cout << "Bonus (12%) = " << bonus << endl;
//             cout << "Net Salary = " << netSalary << endl;
//         }
//     }
// };

// int main() {
//     Salary obj;
//     obj.getData();
//     obj.calculateSalary();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Pattern
// {
// public:

//     // Q20 Reverse Seating Pattern
//     void reverseSeating(int n)
//     {
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = n; j > i; j--)
//             {
//                 cout << j << " ";
//             }
//             cout << endl;
//         }
//     }

//     // Q21 Hollow Rectangle Pattern
//     void hollowRectangle(int rows, int cols)
//     {
//         for(int i = 1; i <= rows; i++)
//         {
//             for(int j = 1; j <= cols; j++)
//             {
//                 if(i==1 || i==rows || j==1 || j==cols)
//                     cout << "* ";
//                 else
//                     cout << "  ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main()
// {
//     Pattern obj;

//     cout << "Q20 Pattern:\n";
//     obj.reverseSeating(5);

//     cout << "\nQ21 Pattern:\n";
//     obj.hollowRectangle(7,8);

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Pattern
// {
// public:

//     // Q22 Hollow Diamond
//     void hollowDiamond(int n)
//     {
//         // upper part
//         for(int i=1;i<=n;i++)
//         {
//             for(int s=1;s<=n-i;s++)
//                 cout<<" ";

//             for(int j=1;j<=i;j++)
//             {
//                 if(j==1 || j==i)
//                     cout<<"* ";
//                 else
//                     cout<<"  ";
//             }
//             cout<<endl;
//         }

//         // lower part
//         for(int i=n-1;i>=1;i--)
//         {
//             for(int s=1;s<=n-i;s++)
//                 cout<<" ";

//             for(int j=1;j<=i;j++)
//             {
//                 if(j==1 || j==i)
//                     cout<<"* ";
//                 else
//                     cout<<"  ";
//             }
//             cout<<endl;
//         }
//     }

//     // Q23 Butterfly Pattern
//     void butterfly(int n)
//     {
//         // upper
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=i;j++)
//                 cout<<"*";

//             for(int s=1;s<=2*(n-i);s++)
//                 cout<<" ";

//             for(int j=1;j<=i;j++)
//                 cout<<"*";

//             cout<<endl;
//         }

//         // lower
//         for(int i=n;i>=1;i--)
//         {
//             for(int j=1;j<=i;j++)
//                 cout<<"*";

//             for(int s=1;s<=2*(n-i);s++)
//                 cout<<" ";

//             for(int j=1;j<=i;j++)
//                 cout<<"*";

//             cout<<endl;
//         }
//     }
// };

// int main()
// {
//     Pattern obj;

//     cout<<"Q22 Hollow Diamond:\n";
//     obj.hollowDiamond(5);

//     cout<<"\nQ23 Butterfly Pattern:\n";
//     obj.butterfly(4);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Pattern
// {
// public:
//     void alphabetPyramid(int n)
//     {
//         for(int i=1;i<=n;i++)
//         {
//             for(char ch='A'; ch<'A'+i; ch++)
//                 cout<<ch;
//             cout<<endl;
//         }
//     }
// };

// int main()
// {
//     Pattern obj;
//     obj.alphabetPyramid(5);
// }


// #include<iostream>
// #include<cstring>
// using namespace std;

// class Password
// {
// public:
//     void check(char p[])
//     {
//         int u=0,l=0,d=0,s=0;

//         for(int i=0;p[i]!='\0';i++)
//         {
//             if(isupper(p[i])) u=1;
//             else if(islower(p[i])) l=1;
//             else if(isdigit(p[i])) d=1;
//             else if(p[i]=='@'||p[i]=='#'||p[i]=='$'||p[i]=='%'||p[i]=='!'||p[i]=='&'||p[i]=='*') s=1;
//         }

//         if(u&&l&&d&&s)
//             cout<<"Strong Password";
//         else
//             cout<<"Weak Password";
//     }
// };

// int main()
// {
//     Password obj;
//     char pass[50];
//     cin>>pass;
//     obj.check(pass);
// }

// #include<iostream>
// using namespace std;

// class Result
// {
// public:
//     void calc()
//     {
//         int m[5],sum=0;
//         for(int i=0;i<5;i++)
//         cin>>m[i];

//         for(int i=0;i<5;i++)
//         sum+=m[i];

//         cout<<"Total="<<sum<<endl;
//         cout<<"Percentage="<<sum/5.0;
//     }
// };

// int main()
// {
//     Result r;
//     r.calc();
// }


// #include<iostream>
// using namespace std;

// class Price
// {
// public:
//     void maxPrice()
//     {
//         int a[10],max;

//         for(int i=0;i<10;i++)
//         cin>>a[i];

//         max=a[0];

//         for(int i=1;i<10;i++)
//             if(a[i]>max)
//             max=a[i];

//         cout<<"Max Price="<<max;
//     }
// };

// int main()
// {
//     Price p;
//     p.maxPrice();
// }

// #include<iostream>
// using namespace std;

// class Number
// {
// public:
//     void sumEO()
//     {
//         int a[5],se=0,so=0;

//         for(int i=0;i<5;i++)
//         cin>>a[i];

//         for(int i=0;i<5;i++)
//         {
//             if(a[i]%2==0) se+=a[i];
//             else so+=a[i];
//         }

//         cout<<"Even Sum="<<se<<endl;
//         cout<<"Odd Sum="<<so;
//     }
// };

// int main()
// {
//     Number n;
//     n.sumEO();
// }

// #include<iostream>
// using namespace std;

// class Temp
// {
// public:
//     void minTemp()
//     {
//         int t[30],min;

//         for(int i=0;i<30;i++)
//         cin>>t[i];

//         min=t[0];

//         for(int i=1;i<30;i++)
//             if(t[i]<min)
//             min=t[i];

//         cout<<"Minimum Temp="<<min;
//     }
// };

// int main()
// {
//     Temp obj;
//     obj.minTemp();
// }


// #include<iostream>
// using namespace std;

// class Salary
// {
// public:
//     void calc()
//     {
//         int s[10],sum=0;

//         for(int i=0;i<10;i++)
//         cin>>s[i];

//         for(int i=0;i<10;i++)
//         sum+=s[i];

//         cout<<"Total Salary="<<sum<<endl;
//         cout<<"Average="<<sum/10.0;
//     }
// };

// int main()
// {
//     Salary obj;
//     obj.calc();
// }

// #include<iostream>
// using namespace std;

// class Check
// {
// public:
//     void countNum()
//     {
//         int a[5],c=0;

//         for(int i=0;i<5;i++)
//         cin>>a[i];

//         for(int i=0;i<5;i++)
//             if(a[i]%3==0 && a[i]%5==0)
//             c++;

//         cout<<"Count="<<c;
//     }
// };

// int main()
// {
//     Check obj;
//     obj.countNum();
// }

// #include<iostream>
// using namespace std;

// class Largest
// {
// public:
//     void find()
//     {
//         int a[5],max1,max2;

//         for(int i=0;i<5;i++)
//         cin>>a[i];

//         max1=max2=a[0];

//         for(int i=0;i<5;i++)
//         {
//             if(a[i]>max1)
//             {
//                 max2=max1;
//                 max1=a[i];
//             }
//             else if(a[i]>max2 && a[i]!=max1)
//                 max2=a[i];
//         }

//         cout<<"Largest="<<max1<<endl;
//         cout<<"Second="<<max2;
//     }
// };

// int main()
// {
//     Largest obj;
//     obj.find();
// }

// #include<iostream>
// using namespace std;

// class Marks
// {
// public:
//     void show()
//     {
//         int m[3][5];

//         for(int i=0;i<3;i++)
//             for(int j=0;j<5;j++)
//             cin>>m[i][j];

//         cout<<"2nd subject of 1st student="<<m[0][1]<<endl;
//         cout<<"5th subject of 3rd student="<<m[2][4];
//     }
// };

// int main()
// {
//     Marks obj;
//     obj.show();
// }

// #include<iostream>
// using namespace std;

// class Matrix
// {
// public:
//     void add()
//     {
//         int a[3][3],b[3][3],c[3][3];

//         for(int i=0;i<3;i++)
//             for(int j=0;j<3;j++)
//             cin>>a[i][j];

//         for(int i=0;i<3;i++)
//             for(int j=0;j<3;j++)
//             cin>>b[i][j];

//         for(int i=0;i<3;i++)
//         {
//             for(int j=0;j<3;j++)
//             {
//                 c[i][j]=a[i][j]+b[i][j];
//                 cout<<c[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main()
// {
//     Matrix obj;
//     obj.add();
// }

// #include<iostream>
// using namespace std;

// class Transpose
// {
// public:
//     void show()
//     {
//         int a[3][3];

//         for(int i=0;i<3;i++)
//             for(int j=0;j<3;j++)
//             cin>>a[i][j];

//         for(int i=0;i<3;i++)
//         {
//             for(int j=0;j<3;j++)
//             cout<<a[j][i]<<" ";

//             cout<<endl;
//         }
//     }
// };

// int main()
// {
//     Transpose obj;
//     obj.show();
// }

// #include<iostream>
// using namespace std;

// class Multiply
// {
// public:
//     void mul()
//     {
//         int a[2][2],b[2][2],c[2][2]={0};

//         for(int i=0;i<2;i++)
//             for(int j=0;j<2;j++)
//             cin>>a[i][j];

//         for(int i=0;i<2;i++)
//             for(int j=0;j<2;j++)
//             cin>>b[i][j];

//         for(int i=0;i<2;i++)
//             for(int j=0;j<2;j++)
//                 for(int k=0;k<2;k++)
//                     c[i][j]+=a[i][k]*b[k][j];

//         for(int i=0;i<2;i++)
//         {
//             for(int j=0;j<2;j++)
//             cout<<c[i][j]<<" ";
//             cout<<endl;
//         }
//     }
// };

// int main()
// {
//     Multiply obj;
//     obj.mul();
// }

// #include<iostream>
// #include<cstring>
// using namespace std;

// class User
// {
// public:
//     void check(char s[])
//     {
//         for(int i=0;s[i]!='\0';i++)
//         {
//             if(!(isalnum(s[i])))
//             {
//                 cout<<"Invalid Username";
//                 return;
//             }
//         }
//         cout<<"Valid Username";
//     }
// };

// int main()
// {
//     User obj;
//     char u[50];
//     cin>>u;
//     obj.check(u);
// }

// #include<iostream>
// using namespace std;

// class Pascal
// {
// public:
//     void show(int n)
//     {
//         for(int i=0;i<n;i++)
//         {
//             int num=1;
//             for(int j=0;j<=i;j++)
//             {
//                 cout<<num<<" ";
//                 num=num*(i-j)/(j+1);
//             }
//             cout<<endl;
//         }
//     }
// };

// int main()
// {
//     Pascal obj;
//     obj.show(5);
// }

// #include<iostream>
// #include<cstring>
// using namespace std;

// class StringOp
// {
// public:
//     void process()
//     {
//         char s[100];
//         cin.getline(s,100);

//         int words=0,digits=0,special=0;

//         for(int i=0;s[i]!='\0';i++)
//         {
//             if(isdigit(s[i])) digits++;
//             else if(!(isalnum(s[i]) || s[i]==' '))
//             special++;
//         }

//         for(int i=0;s[i]!='\0';i++)
//             if((i==0 && s[i]!=' ') || (s[i]==' ' && s[i+1]!=' '))
//             words++;

//         if(islower(s[0]))
//         s[0]=toupper(s[0]);

//         for(int i=1;s[i]!='\0';i++)
//         s[i]=tolower(s[i]);

//         cout<<"Words="<<words<<endl;
//         cout<<"Digits="<<digits<<endl;
//         cout<<"Special="<<special<<endl;

//         if(special==0)
//         cout<<"Valid String";
//         else
//         cout<<"Invalid String";
//     }
// };

// int main()
// {
//     StringOp obj;
//     obj.process();
// }

