
#include <iostream>

using namespace std;

class Rectangle{
    private:
    
    int length;
    int breadth;

    public:
    
        Rectangle()
        {
            length =0;
            breadth =0;
        }
        Rectangle(int l, int b){
            length = l; 
            breadth = b;
        }
        int Area(){
          return length*breadth;  
        }
        int Perimeter(){
            return 2*(length+breadth);
        }
        void setBreadth(int b){
            breadth = b;
        }
     void setLength(int l){
            length = l;
        }
};





int main()
{
    Rectangle r(10, 4);
    cout<<r.Area()<<endl;
    cout<<r.Perimeter()<<endl;
    
    r.setLength(20);
    r.setBreadth(3);
 cout<<r.Area()<<endl;
    cout<<r.Perimeter();
    
   return 0;
}