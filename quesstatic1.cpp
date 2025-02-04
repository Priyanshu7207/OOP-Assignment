#include<iostream>

using namespace std;
//
class Counter
{
private:
  int count;
  static int totalObjects;
public:
  Counter() = default;

  Counter(int intialCount ){
    count = 0;
    totalObjects++;
  }
  void increment(){
    count++;
  }
  int getCount(){
    return count;
  }
  static int getObjectCount(){
    return totalObjects;
  }
  void display() {
    cout<<"Count: "<<count<<endl;
  }
  
};

int Counter::totalObjects =0;

int main(){
  Counter obj1(0);
  Counter obj2(0);
  Counter obj3(0);

  obj1.increment();
  obj2.increment();
  obj3.increment();

  cout<<"Object1: ";
  obj1.display();

  cout<< "Total Objects: " << Counter::getObjectCount()<<endl;



}



