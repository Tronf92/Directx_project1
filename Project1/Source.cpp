#include <iostream>
#include <string>

using namespace std;

class C{
public:
	void bla(string s);
};

void C::bla(string s){
	cout << s;
}

int main(){
	C unc;
	cout << "Welcome" << endl;
	string d = "damn idiot";
	unc.bla(d);
	system("pause");
	return 0;
}