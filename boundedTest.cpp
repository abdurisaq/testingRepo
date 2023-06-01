#include <iostream>
#include <string>
#include <vector>
using namespace std;

class displacement{
    int x;
    int y;
    int direction;
    public:

    displacement(){
        x=0;
        y=0;
        direction=0;
    }
    string get_position(){
        return "("+to_string(x)+","+to_string(y)+")";
    }
    //GLGL

};

//changes
int main(){
    string command1= "GGLLGG";
    string command2= "GG";
    string command3= "GL";
 

}