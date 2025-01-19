# include <iostream>
# include <cmath>
# include <iomanip>
# include <windows.h>
using namespace std;
class calc
{
private:
    float a, b, rslt, num1, r, a1, b1, c, D, D1, x1, x2;
    double angle_deg, angle_rad, angle_grade;
    int ch;
public:
    void getab();
    void calculate1();
    void getdata();
    void calculate();
    void getNum1();
    void getAngleDeg();
    void factorial();
    void gamma();
    void getRatio();
};
void calc::getdata()
{
    cout<<"\nInput a, b, c\n";
    cin>>a1>>b1>>c;
}
void calc::calculate()
{
    D=pow(b, 2)-4*a1*c;
    if (D>=0)
    {
        if (D>0)
        {
            cout<<"\nRESULT : Equation has real and distinct roots\n";
            x1=(-b1+sqrt(D))/(2*a1);
            x2=(-b1-sqrt(D))/(2*a1);
            cout<<"\nRoots are "<<x1<<" and "<<x2<<endl;
        }
        else
        {
            cout<<"\nRESULT : Equation has real and equal roots\n";
            x1=-b1/(2*a1);
            x2=-b1/(2*a1);
            cout<<"\nRoots are "<<x1<<" and "<<x2<<endl;
        }
    }
    else
    {
        cout<<"\nRESULT : Roots are imaginary\n";
        D1=-D;
        cout<<"\nRoots are "<<(-b1/(2*a1))<<" + "<<(sqrt(D1)/(2*a1))<<"i and "<<(-b1/(2*a1))<<" - "<<(sqrt(D1)/(2*a1))<<"i"<<endl;
    }
}
void calc::gamma()
{
    if (num1<=0)
    {
        cout<<"\nERROR: Gamma function only valid for positive integers\n";
    }
    else
    {
        int f=1;
        for (int i=1; i<num1; i++)
        {
            f*=i;
        }
        cout<<"\nrslt : "<<f<<endl;
    }
}
void calc::getRatio()
{
    cout<<"\nInput ratio\n";
    cin>>r;
}
void calc::factorial()
{
    if (num1>0)
    {
        int f1=1;
        for (int i=1; i<=num1; i++)
        {
            f1*=i;
        }
        cout<<"\nrslt : "<<f1<<endl;
    }
    else
    {
        cout<<"\nERROR : Factorial function only valid for positive integers\n";
    }
}
void calc::getAngleDeg()
{
    cout<<"\nInput angle in deg\n";
    cin>>angle_deg;
    angle_rad=(M_PI/180)*angle_deg;
}
void calc::getab()
{
    cout<<"\nInput a and b\n";
    cin>>a>>b;
}
void calc::getNum1()
{
    cout<<"\nInput num\n";
    cin>>num1;
}
void calc::calculate1()
{
    do
    {
        cout<<"\n\n====================================================================\n1.sum\t\t2.sub\t\t3.div\t\t4.mul\n5.sqrt\t\t6.cbrt\t\t7.sq\t\t8.cube\n";
        cout<<"9.sin\t\t10.cos\t\t11.tan\t\t12.cosec\n13.sec\t\t14.cot\t\t15.invrs\t16.ln\n";
        cout<<"17.log10\t18.exponent\t19.exp(e^x)\t20.factorial\n21.asin\t\t22.acos\t\t23.atan\t\t24.deg->rad\n";
        cout<<"25.rad->deg\t26.deg->grade\t27.grade->deg\t28.grade->rad\n29.rad->grade\t30.Gamma func.\t31.Quad.Solver\t32.Logarithm (a, b)\n33.EXIT...\n";
        cout<<"\nInput ch\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            getab();
            rslt=a+b;
            cout<<"\nrslt : "<<rslt<<endl;
            break;
        case 2:
            getab();
            rslt=a-b;
            cout<<"\nrslt : "<<rslt<<endl;
            break;
        case 3:
            getab();
            if (b==0)
            {
                cout<<"\nERROR : Can't Divide by 0\n";
            }
            else
            {
                rslt=a/b;
                cout<<"\nrslt : "<<rslt<<endl;
            }
            break;
        case 4:
            getab();
            rslt=a*b;
            cout<<"\nrslt : "<<rslt<<endl;
            break;
        case 5:
            getNum1();
            cout<<"\nrslt : "<<float(sqrt(num1))<<endl;
            break;
        case 6:
            getNum1();
            cout<<"\nrslt : "<<float(cbrt(num1))<<endl;
            break;
        case 7:
            getNum1();
            cout<<"\nrslt : "<<float(pow(num1, 2))<<endl;
            break;
        case 8:
            getNum1();
            cout<<"\nrslt : "<<float(pow(num1, 3))<<endl;
            break;
        case 9:
            getAngleDeg();
            cout<<"\nPrecise rslt : "<<sin(angle_rad)<<endl;
            cout<<"Approx rslt : "<<setprecision(2)<<sin(angle_rad)<<endl;
            break;
        case 10:
            getAngleDeg();
            cout<<"\nPrecise rslt : "<<cos(angle_rad)<<endl;
            cout<<"Approx rslt : "<<setprecision(2)<<cos(angle_rad)<<endl;
            break;
        case 11:
            getAngleDeg();
            if (angle_deg==90)
            {
                cout<<"\nrslt -> Infinity\n";
            }
            else
            {
                cout<<"\nPrecise rslt : "<<tan(angle_rad)<<endl;
                cout<<"Approx rslt : "<<setprecision(2)<<tan(angle_rad)<<endl;
            }
            break;
        case 12:
            getAngleDeg();
            if (sin(angle_deg)==0)
            {
                cout<<"\nrslt -> Infinity\n";
            }
            else
            {
                cout<<"\nPrecise rslt : "<<1/sin(angle_rad)<<endl;
                cout<<"Approx rslt : "<<setprecision(2)<<1/sin(angle_rad)<<endl;
            }
            break;
        case 13:
            getAngleDeg();
            if (cos(angle_deg)==0)
            {
                cout<<"\nrslt -> Infinity\n";
            }
            else
            {
                cout<<"\nPrecise rslt : "<<1/cos(angle_rad)<<endl;
                cout<<"Approx rslt : "<<setprecision(2)<<1/cos(angle_rad)<<endl;
            }
            break;
        case 14:
            getAngleDeg();
            if (tan(angle_deg)==0)
            {
                cout<<"\nrslt -> Infinity\n";
            }
            else if (tan(angle_deg==90))
            {
                cout<<"\nrslt : 0\n";
            }
            else
            {
                cout<<"\nPrecise rslt : "<<1/tan(angle_rad)<<endl;
                cout<<"Approx rslt : "<<setprecision(2)<<1/tan(angle_rad)<<endl;
            }
            break;
        case 15:
            getNum1();
            cout<<"\nrslt : "<<(1/num1)<<endl;
            break;
        case 16:
            getNum1();
            if (num1<=0)
            {
                cout<<"\nERROR : Input positive number\n";
            }
            else
            {
                cout<<"\nrslt : "<<log(num1)<<endl;
            }
            break;
        case 17:
            getNum1();
            if (num1<=0)
            {
                cout<<"\nERROR : Input positive number\n";
            }
            else
            {
                cout<<"\nrslt : "<<log10(num1)<<endl;
            }
            break;
        case 18:
            getab();
            cout<<"\nrslt : "<<pow(a, b)<<endl;
            break;
        case 19:
            getNum1();
            cout<<"\nrslt : "<<pow(2.71, num1)<<endl;
            break;
        case 20:
            getNum1();
            factorial();
            break;
        case 21:
            getRatio();
            if (r>=-1 && r<=1)
            {
                angle_deg=(M_PI/180)*asin(r);
                cout<<"\nrslt : "<<angle_deg<<endl;
            }
            else
            {
                cout<<"\nMATH Error\n";
            }
            break;
        case 22:
            getRatio();
            if (r>=-1 && r<=1)
            {
                angle_deg=(M_PI/180)*acos(r);
                cout<<"\nrslt : "<<angle_deg<<endl;
            }
            else
            {
                cout<<"\nMATH Error\n";
            }
            break;
        case 23:
            getRatio();
            angle_deg=(M_PI/180)*atan(r);
            cout<<"\nrslt : "<<angle_deg<<endl;
            break;
        case 24:
            cout<<"\nInput angle in deg.\n";
            cin>>angle_deg;
            angle_rad=angle_deg*(180/M_PI);
            cout<<"\nrslt : "<<angle_rad<<" rad."<<endl;
            break;
        case 25:
            cout<<"Input angle in rad.\n";
            cin>>angle_rad;
            angle_deg=angle_rad*(M_PI/180);
            cout<<"\nrslt : "<<angle_deg<<" deg."<<endl;
            break;
        case 26:
            cout<<"\nInput angle in deg.\n";
            cin>>angle_deg;
            angle_grade=angle_deg*(10.0/9);
            cout<<"\nrslt : "<<angle_grade<<" grades."<<endl;
            break;
        case 27:
            cout<<"\nInput angle in grades\n";
            cin>>angle_grade;
            angle_deg=angle_grade*0.9;
            cout<<"\nrslt : "<<angle_deg<<" deg."<<endl;
            break;
        case 28:
            cout<<"\nInput angle in grades\n";
            cin>>angle_grade;
            angle_rad=angle_grade*(100.0/M_PI);
            cout<<"\nrslt : "<<angle_rad<<" rad."<<endl;
            break;
        case 29:
            cout<<"\nInput angle in rad.\n";
            cin>>angle_rad;
            angle_grade=angle_rad*(M_PI/100);
            cout<<"\nrslt : "<<angle_grade<<" grades."<<endl;
            break;
        case 30:
            getNum1();
            gamma();
            break;
        case 31:
            getdata();
            calculate();
            break;
        case 32:
            cout<<"\nInput number and base of logarithm\n";
            cin>>a1>>b1;
            cout<<"\nrslt : "<<(log(a1)/log(b1))<<endl;
            break;
        case 33:
            cout<<"\n======[Exiting the program...]======\n";
            exit(0);
            break;
        default:
            cout<<"\nInput valid choice!\n";
        }
    }
    while (ch!=33);
}
int main()
{
    calc c;
    cout<<"=========================[Made with Love by Rishabh Naharwal...]=========================";
    c.calculate1();
    return 0;
}
