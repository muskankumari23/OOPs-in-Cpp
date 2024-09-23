#include <iostream>
#include <string>
 using namespace std;
  class Teacher (string name, string dept, string subject );
  this->name =name; 
  this->dept =dept;
  this->subject=subject;
  void getInfo(){
    cout<< "name :"<< name <<endl;
  }
  int main(){
    Teacher t1 ("abc ", "def ","ghi");
    t1.getInfo();
    return 0;

  }
  