#include<iostream>
#include<string.h>

using namespace std;

class student{
 public:
  int grid;
  int marks;


  student(int grid, int marks){
    this->grid = grid;
    this ->marks = marks;
  }

  student ( const student &std){
    this->grid = std.grid;
    this->marks = std.marks;
  }
};

class product{
  public:
      int id ;


      product(){
         cout << "product created" <<endl;
      }
    product(int id){
        this->id = id;
        cout << "product id:" << id << endl;
    }
    product(const product &obj){
        this->id =obj.id;
    }
};

int main(){

    student std(10072,80);

    cout << std.grid << endl;
    cout << std.marks << endl;

    student std1(std);
    cout << std1.grid << endl;
    cout << std1.marks << endl;


















    // product std1, std2(10);
    
    // cout << std2.id << endl; 

    // product std3(std2);

    // cout << std3.id << endl;

    return 0;
}