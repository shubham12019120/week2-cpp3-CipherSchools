QUESTION - 1




class Solution {
    public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode *,int>mp;
        ListNode *t = head;

        while(t) {
            if(mp.count(t->next)) return 1;

            mp[t]++;
            t = t->next;
        }
        return 0;
    }
};




QUESTION - 2



#include <iostream>
#include<bits/stdc++.h>

using namespace std;




int main () {

    vector<string> solar_sys = { "mer","venus","earth","mars","jupiter","saturn","uranus","neptune"};
    vector<string>::iterator shiv = solar_sys.begin();
    vector<string>::iterator vansh = solar_sys.begin();

    cout<< "Let's go to the planet -  " <<*(shiv + 2) << endl;


    return 0;
}








QUESTION  - 3


#include <iostream>
#include<bits/stdc++.h>

using namespace std;




int main () {

    vector<string> solar_sys = { "mer","venus","earth","mars","jupiter","saturn","uranus","neptune"};
    vector<string>::iterator shiv = solar_sys.begin();
    vector<string>::iterator vansh = solar_sys.begin();

    //cout<< "Let's go to the planet -  " <<*(shiv + 2) << endl;
    advance(shiv,3);
    cout<<*shiv<<endl;

    return 0;
}




QUESTION  - 4



#include <iostream>
#include<bits/stdc++.h>

using namespace std;




int main () {

    vector<string> solar_sys = { "mer","venus","earth","mars","jupiter","saturn","uranus","neptune"};
    vector<string>::iterator shiv = solar_sys.begin();
    vector<string>::iterator vansh = solar_sys.begin();

    //cout<< "Let's go to the planet -  " <<*(shiv + 2) << endl;
    advance(shiv,3);
    cout<< *next(shiv,1)<<endl;
    //cout<<*shiv<<endl;

    return 0;
}
