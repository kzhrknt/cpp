#include <iostream>
using namespace std;

class Monster
{
	int power;

    public:
	//Constructer
	Monster(int p);
	//Setter&Getter
	void setPower(int p);
	int  getPower() const;
	//Method
	void walk();
	bool eat(int f);
};

//contructer
Monster::Monster(int p){
	p < 0 ? power = 0 : power = p;
}
//setter getter
void Monster::setPower(int p) {
	power = p;
}
int Monster::getPower() const {
	return power;
}
//method
void Monster::walk(){
	if (power > 0){
		cout << "tekuteku..." <<endl;
		--power;
	}else{
		cout << "I can't walk anymore..." << endl;
		cout << "HE WAS DEAD!!!" << endl;
		exit(1);
	}
}

bool Monster::eat(int f){
	bool flag = false;
	if ( f < 0 ) {
		cout << "I can't eat it..." << endl;
		flag = false;
		return flag;
	}
	else {
		cout << "mogumogu!!!" << endl;
		power += f;
		flag = true;
		return flag;
	}
}

//==============MAIN================//
int main()
{
	Monster m(10);
	cout << "Generated Monster" <<endl;
	cout << "Let's play with him!!" << endl;
	cout << "1.walk 2.eat 3.bye" << endl;
	int choice;
	cin >> choice;
	
	cout << "How many times let him walk?" << endl;
	int numWalk;
	cin >> numWalk;
	for (int i = 0; i < numWalk; i++){
		m.walk();
		cout << "POWER:" << m.getPower() << endl;
	}
	bool flag = false;
	while(!flag){
		cout << "He seems to be hungry. Give him something to eat!!" << endl;
		int ans;
		cin >> ans;
		flag = m.eat(ans);
		cout << "POWER:" << m.getPower() << endl;
	}

}
