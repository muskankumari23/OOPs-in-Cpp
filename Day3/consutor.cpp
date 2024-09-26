#include <iostream> 
using namespace std;
 class Student {
    public:
     string name;
     double cgpa;
     Student (string name , double cgpa ){
        this-> name =name;
        this -> cgpa =cgpa;

     }
     void getInfo (){
        cout <<"name:" <<name << endl;
        cout <<" cgpa: "<< cgpa<<endl;
     } 
     };
     int main (){
        Student s1 ("Muskan ",8.9);
        s1.getInfo();
        return 0; 
     }
 