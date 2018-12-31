

//template 実習


1? ????? ???? Sum ??? ????? ???? ????(+,-,*,/,%)? ???
??? ?? ?? ???? ??? ? ?? ????? ?????

`+,-,*,/,%` 演算か出来るtemplateを定義して全ての資料形を演算する事が出来るプログラムを作成しょう
(%演算は定数だけ演算が可能です、定数と実数の演算が出来ます。)

#include<iostream>
using namespace std;

template<typename T1,typename T2>   // 入力する資料形が二つの意味
T1 sum(T1 a,T2 b)   
{
   return a+b;
}
template<typename T1,typename T2>
T1 sub(T1 a,T2 b)
{
   return a-b;
}
template<typename T1,typename T2>
T1 mul(T1 a,T2 b)
{
   return a*b;
}
template<typename T1,typename T2>
T1 div(T1 a,T2 b)
{
   return a/b;
}
template<typename T>
T mok(T a,T b)
{
   return a%b;
}
void main()
{
   int a;
   double b;
   double c;
   a=sum(1,5);   
   b=sum(4.6,7);
   c=sum(3,5.3);
   cout << a << endl;
   cout << b << endl;
   cout << c << endl;
   cout << endl;

   a=sub(9,8);
   b=sub(10.6,5.7);
   c=sub(44,10.8);
   cout << a << endl;
   cout << b << endl;
   cout << c << endl;
   cout << endl;

   a=mul(2,8);
   b=mul(1.6,5.7);
   c=mul(22,5.8);
   cout << a << endl;
   cout << b << endl;
   cout << c << endl;
   cout << endl;

//   a=div(8,2);
   b=div(10.6,2.7);
   c=div(120,25.5);
   cout << a << endl;
   cout << b << endl;
   cout << c << endl;
   cout << endl;

   a=mok(10,2);
   cout << a << endl;
   cout << endl;
}


//Point ClassとSum templateを利用してプログラムを作成します。


#include<iostream>
using namespace std;

class Point{
private:
   int x, y;
public:
   Point(int _x=0, int _y=0): x(_x),y(_y){}
   void ShowPosition();
   Point operator+(const Point& p){
      Point temp(x+p.x, y+p.y);
      return temp;
   }
};

void Point::ShowPosition(){
   cout<< x << "\t"<<y<<endl;
}

template <typename T>
T sum(T a, T b){
   return a+b;
}

void main(){
   Point p1(1,2);
   Point p2(3,4);

   Point p3= sum(p1,p2);
   p3.ShowPosition();
}



//上のPoint Classを利用して資料形が何でも交換が出来るSwapを定義するプログラムを作成しましょう


#include<iostream>
using namespace std;
template<class T>
T Swap(T& a, T& b){   //Swap宣言
   T temp=a;
   a=b;
   b=temp;
   return a,b;
}
class Point{
   int x,y;
public:
   Point(int _x=0,int _y=0):x(_x),y(_y){}
   void ShowPosition(){
      cout<<x<<", "<<y<<endl;
   }
};
void main(){
   Point p1(1,2);
   Point p2(3,4);
   Swap(p1,p2);
   int a=100, b=200;
   Swap(a,b);
   p1.ShowPosition();
   p2.ShowPosition();
   cout<<a<<", " <<b <<endl;
}