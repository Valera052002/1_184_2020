#include <iostream>
#include <string>
using namespace std; 
class dog {
private:
	string breed;
	string age;
	long long name;
public:
	dog(string n, string r, long long p) {
		this->breed = n;
		this->age = r;
		this->name = p;
	}
	dog(string n, long  long p) {
		this->breed = "dogskin";
		this->age = r;
		this->name = p;
	}
	void Subscriber() {
		cout << "This subscriber's name is " << name << ". His breed " << breed << ". His age " << age << "." << endl;
	}
	void  Picture() {
		string picture = R""""(
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠛⠻⠿⠿⠿⠿⠿⠿⠟⠛⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⠟⣻⡟⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢻⣟⠻⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⠟⠁⢰⡟⠄⠄⣠⣄⠄⠄⠄⠄⠄⠄⣠⣄⠄⠄⢻⡆⠈⠻⣿⣿⣿⣿
⣿⣿⠟⠁⠄⠄⢸⡇⠄⠸⣿⣿⠇⠄⠄⠄⠄⠐⣿⣿⠇⠄⢸⡇⠄⠄⠈⠻⣿⣿
⣿⡇⠄⠄⠄⠄⢸⣇⠄⠄⠈⠁⠄⢀⣀⣀⡀⠄⠈⠁⠄⠄⢸⡇⠄⠄⠄⠄⢸⣿
⣿⣧⠄⠄⠄⠄⠈⣿⠄⠄⠄⠄⣾⣿⣿⣿⣿⣷⠄⠄⠄⠄⣿⠁⠄⠄⠄⠄⣼⣿
⣿⣿⡆⠄⠄⠄⠄⣿⣇⠄⠄⠄⠈⠻⠋⠙⠟⠁⠄⠄⠄⣸⣿⠄⠄⠄⠄⢠⣿⣿
⣿⣿⣿⣆⠄⠄⢠⣿⣿⡆⠻⣦⣤⣴⢾⡷⣦⣤⣴⠾⢢⣿⣿⡄⠄⠄⣠⣿⣿⣿
⣿⣿⣿⣿⣿⣶⣼⣿⠉⢻⣆⢸⡇⠄⢸⡇⠄⢸⡇⣠⡟⠁⣿⣧⣶⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⡇⠄⠄⠹⣿⣿⠄⠸⠇⠄⣿⣿⠏⠄⠄⢸⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⠄⠄⠄⠄⠈⣿⠄⠄⠄⠄⣿⠁⠄⠄⠄⠄⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⡏⠄⠄⠄⠄⠄⠈⠻⠶⠶⠟⠋⠄⠄⠄⠄⠄⢸⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⠇⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠘⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣿⣿⣿⣿⣿⣿
)"""";
		cout << picture << endl;
	}
	void Change(long long p) {
	this->age = r; 
	}
	~dog() {}
};
int main() {
	dog one("Rej", "dogskin", 3);
	one.Subscriber();
	return 0;
}
