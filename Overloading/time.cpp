#include <iostream>
using namespace std;
class timen
{
private:
    int hour, minute, second;

public:
    void showtimen(){
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
    timen operator+(timen t)
    {
        timen temp;
        temp.hour = this->hour + t.hour;
        temp.minute = this->minute + t.minute;
        temp.second = this->second + t.second;

        if(temp.hour>=12){
            temp.hour=1;
        }if(temp.minute>=60){
            temp.minute=0;
            temp.hour++;

        }if(temp.second>=60){
            temp.second=0;
            temp.minute++;
        }
        return temp;
    }
    // timen operator-(timen);
    // bool operator<(timen);

    timen(int h, int m, int s){
        hour=h;
        minute=m;
        second=s;

    }
    timen() {}
    ~timen(){}
};
int main(){
    timen t1(1,58,45),t2(2,33,55),t3;
    t1.showtimen();
    t2.showtimen();
    t3=t1+t2;
    t3.showtimen();


}