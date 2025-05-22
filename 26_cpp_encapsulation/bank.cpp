#include<iostream>

using namespace std;

class bank
{

    private:
      int balance = 21320;
      int pin = 9709;
    public:

     void setbal(int deposit){
        this->balance = this->balance + deposit;
     }


      void getbal(int pin)
       {
         if(this->pin == pin)
            {
                cout<< "bal is: " << this->balance << " /-" << endl;
            }
            else
            {
                cout << "Enter valid password" << endl;
            }
        }
};


int main(){


    bank user1;

    int deposit = 1000;


    int pin;
    cout << "pin:";
    cin >> pin;

    user1.setbal(deposit);
    user1.getbal(pin);

    return 0;
}