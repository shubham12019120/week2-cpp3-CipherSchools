QUESTION -1




#include <iostream>
#include<bits/stdc++.h>

using namespace std;




int main () {
    vector<string> solar_sys = { "mer","venus","earth","mars","jupiter","saturn","uranus","neptune"};

    vector<string>::iterator shiv = solar_sys.begin();
    vector<string>::iterator vansh = solar_sys.begin();

    cout<<*next(shiv,5)<<endl;

    cout<<"Distance from Shiv"<<distance(vansh, shiv)<<endl;




    return 0;
}


QUESTION - 2




#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    vector<int> v= {1,2,3,4,5,6,7,8,9};
    for(vector<int> :: iterator it = v.begin(); it!= v.end(); it++)
    {
        cout<<*it<<" ";
    }



    return 0;
}




QUESTION - 3





#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    list<int>l;
    l.push_back(10);
    l.push_back(20);
    l.push_front(30);

    list<int>::iterator it = l.begin();

    for(;it!=l.end();it++) {
        cout<<*it<<" ";
    }


    return 0;
}








QUESTION - 4




#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    list<int>l;
    l.push_back(10);
    l.push_back(20);
    l.push_front(30);

    list<int>::iterator it = l.begin();

    for(;it!=l.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
    l.push_front(120);
    l.pop_back();
    l.pop_front();

      for(list<int> :: iterator it = l.begin(); it!= l.end(); it++)
    {
        cout<<*it<<" ";
    }

    l.reverse();
    l.sort();



    return 0;
}
