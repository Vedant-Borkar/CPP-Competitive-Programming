#include<iostream>
using namespace std;
class World{
  public:
  int a=5;
  string b="Hello";

  void print(int a,string c){
    cout<<a<<endl;
    cout<<c;
  }
};
int main(){
  World obj;
  obj.print(obj.a,obj.b);
  return 0;
}