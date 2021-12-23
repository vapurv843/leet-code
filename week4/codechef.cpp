#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

class polygon 
{
    protected:
    int width, height;
    public:
    void set_values(int a,int b)
    {
        width = a;
        height = b;

    };
    class output1
    {
        public:
        void output(int i);
    };
void output1::output(int i)
{
    cout<<i<<endl;
}
class rectangle:public output1,public polygon
{
    public:
    int area()
    {
        return width*height;
    }
}
class triangle:public output1,public polygon
{
    public:
    int area()
    {
        return (width*height/2);
    }
}

};

int main()
{
  rectangle rect;
  triangle tr;
  rect.set_values(4,5);
  tr.set_values(4,5);
  rect.output(rect.area());
  tr.output(tr.area());

}