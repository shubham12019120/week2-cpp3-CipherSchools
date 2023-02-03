QUESTION - 1





#include <iostream>
#include<bits/stdc++.h>


using namespace std;
double sum(vector<double>&v, int def = 0) {
    int s = def;

    for(int ele:v) {
        s+=ele;
    }
    return s;
}







int main()
{
    vector<int>v = {1,2,3,4,5,6,7,8,9};
    vector<double>v2 = {1.15,2.25,3.35,4.45,5.55,6.65,7.75,8.85,9.95};



    cout << sum(v2) <<endl;



    return 0;
}







QUESTION ---2




#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int sum(vector<int>&v, int def = 0) {
    int s = def;

    for(int ele:v) {
        s+=ele;
    }
    return s;
}


double sum(vector<double>&v, int def = 0) {
    int s = def;

    for(int ele:v) {
        s+=ele;
    }
    return s;
}







int main()
{
    vector<int>v = {1,2,3,4,5,6,7,8,9};
    vector<double>v2 = {1.15,2.25,3.35,4.45,5.55,6.65,7.75,8.85,9.95};



    cout << sum(v2) <<endl;
    cout << sum(v) <<endl;




    return 0;
}




QUESTION -3



#include <iostream>
#include<bits/stdc++.h>


using namespace std;

template <typename T>

T sum(vector<T>&v, T def = 0) {
    T s = def;

    for(T ele:v) {
        s+=ele;
    }
    return s;
}


//double sum(vector<double>&v, int def = 0) {
//    int s = def;
 //
   // for(int ele:v) {
     //   s+=ele;
   // }
   // return s;
//}

int main()
{
    vector<int>v = {1,2,3,4,5,6,7,8,9};
    vector<double>v2 = {1.15,2.25,3.35,4.45,5.55,6.65,7.75,8.85,9.95};
    cout << sum(v2) <<endl;
    cout << sum(v) <<endl;

    return 0;
}






QUESTION -4



#include <iostream>
#include<bits/stdc++.h>


using namespace std;

template <typename T>

T sum(vector<T>&v, T def = 0) {
    T s = def;

    //for(T ele:v) {
    //    s+=ele;
   // }
   T a;
   for(int i =0; i<v.size(); i++) {
       s +=v[i];
   }
    return s;
}




int main()
{
    vector<int>v = {1,2,3,4,5,6,7,8,9};
    vector<double>v2 = {1.15,2.25,3.35,4.45,5.55,6.65,7.75,8.85,9.95};
    vector<string>vs = {"templates", ", ","are",",","magical.!"};

    cout << sum<double>(v2) <<endl;
    cout << sum<int>(v) <<endl;
     cout << sum<string>(vs," ") <<endl;


    return 0;
}






QUESTION - 5



#include <iostream>

using namespace std;


template <typename T1, typename T2>
class Cal{
    public:
    T1 x;
    T2 y;

    Cal(T1 x,T2 y) {
        this->x = x;
        this->y = y;

    }

    T1 sum() {
        return x+y;
    }

    T1 sub() {
        return x-y;
    }

};

int main () {
    Cal <int,int>c1(2,5);
    Cal <double,int>c2(2.25,5);


    return 0;
}
