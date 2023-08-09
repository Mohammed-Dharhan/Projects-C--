#include <iostream>

class Circle
{
private:
    int radius;
public:
    Circle(int r){
        radius = r;
    }
    void setRadius(int radius){
        this ->radius = radius;
    }
    int getRadius(){
        return radius;
    }
};

class Utility {
public:
    double calculateArea(Circle c){
        int r = c.getRadius();
        return 3.14*r*r;
    }
};

int main(){
    int radius = 0;
    std::cout<<"Please enter radius: "<<std::endl;
    std::cin>>radius;

    Circle obj(radius);
    Utility x1;
    std::cout<<"The circle area is: "<<x1.calculateArea(obj)<<"cm2"<<std::endl
}