#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
class dog {
private:
	string breed, name;
	long long age;
public:
	dog() {
		this->breed = "Mongrel";
		this->age = 5;
		this->name = "NoName";
	}
	dog(string n, string b, long long a) {
		this->breed = b;
		this->age = a;
		this->name = n;
	}
	void Subscriber() {
		cout << "This subscriber's name is " << name << ". His breed " << breed << ". His age " << age << "." << endl;
	}
	void  Picture() {
		string picture = "";
		if (breed == "Mongrel") {
			picture = R""""(
                .--~~,__
   :-....,-------`~~'._.'
    `-,,,  ,_      ;'~U'
     _,-' ,'`-__; '--.
    (_/'~~      ''''(;
				)"""";
		}
		else if(breed == "Bulldog"){
			picture = R""""(
   ,_____ ,
  ,._ ,_. 7\
 j `-'     /
 |o_, o    \
.`_y_`-,'   !
|/   `, `._ `-,
|_     \   _.'*\
  >--,-'`-'*_*'``---.
  |\_* _*'-'         '
 /    `               \
 \.         _ .       /
  '`._     /   )     /
   \  |`-,-|  /c-'7 /
    ) \ (_,| |   / (_
   ((_/   ((_;)  \_)))
				)"""";
		}
		else if (breed == "Doberman") {
			picture = R""""(
    ___
 __/ / \
|    |/\
|_--\   \              /-
     \   \-___________/ /
      \                :
      |                :
      |       ___ \    )
       \|  __/     \  )
        | /         \  \
        |l           ( l
        |l            ll
        |l            |l
       / l           / l
       --/           --
				)"""";
		}
			else if (breed == "Toy") {
			picture = R""""(
            /)-_-(\
             (o o)  
     .-----__/\o/   
    /  __      /       
\__/\ /  \_\ |/     
     \\     ||  
     //     ||          
     |\     |\    
				)"""";
		}
			else if (breed == "Dalmatian" && age <=3) {
			picture = R""""(
       _=,_
    o_/6 /#\
    \__ |##/
     ='|--\
       /   #'-.
       \#|_   _'-. /
        |/ \_( # |" 
       C/ ,--___/
				)"""";
		}
		cout << picture << endl;
}
	void Change(long long p) {
		this->age = p;
	}
	~dog() {}
};
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	dog doggy("Bully", "Bulldog", 5);
	doggy.Subscriber();
	doggy.Picture();
	dog toy("Sandy", "Toy", 1);
	toy.Subscriber();
	toy.Picture();
	dog dalm("Gekk", "Dalmatian", 2);
	dalm.Subscriber();
	dalm.Picture();
	dog dob("Andy", "Doberman", 7);
	dob.Subscriber();
	dob.Picture();
	dog default_dog_withot_name_and_house;
	default_dog_withot_name_and_house.Subscriber();
	default_dog_withot_name_and_house.Picture();
	return 0;
}
