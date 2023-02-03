QUESTION -1


#include <iostream>
#include<bits/stdc++.h>


using namespace std;
class A{};
class B:public A{};


class A{};
class B{};
class C: public A, public B{};

class A{};
class B : public A{};
class C : public B{};


class A{};
class B : public A{};
class C : public A{};



class A{};
class B{};
class C:public A, public B{};
class D:public C{};
class E:public C{};

}


int main()
{



    return 0;
}





QUESTION - 2


#include <iostream>
#include<bits/stdc++.h>


using namespace std;
class A {
    int a;
    protected:
    int b;
    public:
    int c;
};

class B: public A {
    public :


}



int main()
{
    //A obj;
    B obj;



    return 0;
}


QUESTION - 3


#include <iostream>
#include<bits/stdc++.h>


using namespace std;
class Animal {
    public:
    void speak() {
        cout << "They made a sound.! " << endl;
    }
};
class Dog:public Animal {
    public:
    void speak() {
        cout << "woffffffffffff bhaavvvvvvvvvv gggggggggrrrrrrrrrrrrrr " << endl;
    }
};
class Cat:public Animal {
    public:
    void speak() {
        cout << "Meowwwwwwwwwwww" << endl;
    }
};


int main()
{
    Dog d;
    Animal a;
    Cat c;

    a.speak();
    d.speak();
    c.Animal::speak();




    return 0;
}



QUESTION - 4


#include <iostream>
#include<bits/stdc++.h>


using namespace std;
class A {
    public:
    A() {
        cout << "A's const."<< endl;
    }
    ~A() {
        cout << "A's dest."<< endl;
    }

};
class B: public A{
    public:
    B() {
        cout << "B's const."<< endl;
    }
    ~B() {
        cout << "B's dest."<< endl;
    }
}
;


int main()
{
    B obj;
    return 0;
}
