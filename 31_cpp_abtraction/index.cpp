#include<iostream>
#include<string.h>

using namespace std;

class research {
    public:
       
      virtual void hydrogenengine() = 0;
      virtual void atuomengine() = 0;
      virtual void electricengine() = 0; 
       
      void dieselengine(){
        cout << "diesel-engine" << endl;
      }
};

class subrearch : public research {

    public:
        void hydrogenengine(){
            cout << "hydrogen-engine" << endl;
        }
        
       void atomengine(){
          cout << "atuom-engine" << endl;
       }
};

int main(){

    subrearch DE, HE;

    DE.dieselengine();
    HE.hydrogenengine();

    return 0;
}