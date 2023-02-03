QUESTION -1


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
    operator int() {
        return (this-> hour*60) +min;
    }
};

int main()
{
    Time t(340);

    int time_to_min = (int)t;
    cout <<" Time in mins "<< time_to_min <<endl;
    return 0;
}





QUESTION -2


#include <iostream>
#include<bits/stdc++.h>


using namespace std;
    class uk {

        public:
        int kms;
        int mts;

        void display() {
            cout << "kms are "<< kms << " and mts is "<< mts<< endl;

        }

    };


class us {
    public:
    int miles;
    int feet;

    us(int m , int f) {
        miles = m;
        feet = f;

    }

    us(uk obj) {
        miles = obj.kms/1.6;
        feet = obj.mts/0.3;

    }

    void display() {
        cout << "miles are "<< miles << " and feet is "<< feet<< endl;

    }

    operator uk() {
        uk duk;
        duk.kms=miles*1.6;
        duk.mts=feet*0.3;

        return duk;
    }



};


int main()
{
    us dus(5,10);

    uk duk;

    duk = (uk)dus;
    //us dus2 = duk;
    us dus2(duk);

    return 0;
}
