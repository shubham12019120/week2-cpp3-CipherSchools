QUESTION - 1

#include <iostream>
#include<bits/stdc++.h>


using namespace std;
    class Time {
    public:
    int hour;
    int min;

    Time (int mins) {
        hour = mins/60;
        min = mins%60;
    }
    void display() {
        cout <<" the time is "<< hour << " hours and  "<< min<< " mins"<< endl;

    }
};

int main()
{
    int min_from_mid_night = 65;

    Time t = min_from_mid_night;
    //Time t(min_from_mid_night);

    t.display();
    return 0;
}
