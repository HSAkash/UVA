#include<stdio.h>
int main()
{
    int m,d,y,m3;
    int leap,td,lp,b;
    int m1[11]={31,59,90,120,151,181,212,243,273,304,334};
    int m2[11]={31,60,91,121,152,182,213,244,274,305,335};
    while(scanf("%d%d%d",&m,&d,&y)!=EOF){
        if(d==0&&m==0&&y==0)return 0;
        int p=0;
        if(y%4==0){
            if(y>1799){
                if(y%100==0){
                if(y%400==0)p=1;
            }
            else p=1;
            }
            else p=1;
        }
        if(d<1||m<1||y<0||m>12||(m==2&&d>29&&p==1)||(m==1&&d>31)||(m==2&&d>28&&p==0)||(m==3&&d>31)||
           (m==4&&d>30)||(m==5&&d>31)||(m==6&&d>30)||(m==7&&d>31)||(m==8&&d>31)||
            (m==9&&d>30)||(m==10&&d>31)||(m==11&&d>30)||(m==12&&d>31)||(y==1752&&m==9&&d>2&&d<14)){
               printf("%d/%d/%d is an invalid date.\n",m,d,y);
           }
        else {
        if(y<1801)lp=(y-1)/4;
        else lp=(y-1)/4-(y-1)/100+(y-1)/400+13;
        td=lp+(y-1)%7+d;
        if(y>1752||(y==1752&&m==9&&d>=14)||(y==1752&&m>9))td=td-11;
        m3=m-2;
        if(p==0){
            if(m3>=0)td=td+m1[m3];
        }
        else {
            if(m3>=0)td=td+m2[m3];
        }
        b=td%7;
        if(m==1)printf("January");
        else if(m==2)printf("February");
        else if(m==3)printf("March");
        else if(m==4)printf("April");
        else if(m==5)printf("May");
        else if(m==6)printf("June");
        else if(m==7)printf("July");
        else if(m==8)printf("August");
        else if(m==9)printf("September");
        else if(m==10)printf("October");
        else if(m==11)printf("November");
        else if(m==12)printf("December");
        printf(" %d, %d is a ",d,y);
        if(b==1)printf("Saturday\n");
        else if(b==2)printf("Sunday\n");
        else if(b==3)printf("Monday\n");
        else if(b==4)printf("Tuesday\n");
        else if(b==5)printf("Wednesday\n");
        else if(b==6)printf("Thursday\n");
        else if(b==0)printf("Friday\n");
        }
    }
}
//#include <iostream>
//#include <string>
//using namespace std;
//
//string weekDays[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
//
//string monthNames[] = {"January", "February", "March", "April", "May", "June",
//                    "July", "August", "September", "October", "November", "December"};
//
//int daysInMonths[2][12] = {  {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
//                            {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} };
//
//bool isLeapYear(int y)
//{
//    if(y <= 1752) return (y % 4 == 0);
//    else {
//        if(y % 100 == 0)
//            return (y % 400 == 0);
//        else
//            return (y % 4 == 0);
//    }
//}
//
//bool isValid(int d, int m, int y)
//{
//    if(m > 12 || d > daysInMonths[isLeapYear(y)][m-1]) return false;
//
//    if(y == 1752 && m == 9 && 3 <= d && d <= 13) return false;
//
//    return true;
//}
//
//int solve(int d, int m, int y)
//{
//    int result = 0;   // 0 indicates Saturday. That is, 01/01/0001 was Saturday.
//
//    if(y <= 1753) result += (y-1) * 365 + ((y-1)/4);
//    else {
//        result += (y-1) % 7;    // which comes from the expression ((y-1) * 365 ) % 7
//                                // after applying the rule: (a * b) % m = ((a % m) * (b % m)) % m.
//        result += ((y-1)/4 - (y-1)/100 + (y-1)/400) + 1752/100 - 1752/400;
//    }
//
//    bool is_leap_year = isLeapYear(y);
//
//    for(int i = 1; i < m; ++i)
//        result += daysInMonths[is_leap_year][i-1];
//
//    result += d-1;
//
//    if((y > 1752) || (y == 1752 && m > 9) || (y == 1752 && m == 9 && d > 13))
//        result -= 11;
//
//    result %= 7;
//
//    return result;
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//
//    int d, m, y;
//
//    while(cin >> m >> d >> y, d || m || y) {
//        if(!isValid(d, m, y)) {
//            cout << m << '/' << d << '/' << y << " is an invalid date.\n";
//            continue;
//        }
//
//        cout << monthNames[m-1] << ' ' << d << ", " << y
//            << " is a " << weekDays[solve(d, m, y)] << '\n';
//    }
//
//    return 0;
//}
