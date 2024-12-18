#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	string name;
	int health;
	int age;

public:
	Player(string name_player = "None", int health_val = 0, int age_val = 0);
	Player(const Player& source);
	~Player();
};

Player::Player(string name_player, int health_val, int age_val)
	:name{name_player}, health{health_val}, age{age_val}
{
	cout << "Three args contructor" << endl;
}

Player::Player(const Player& source)
	:name(source.name), health(source.health), age(source.age)
{
	cout << "An copy constructor called for " << name << endl;
}

Player::~Player()
{
	cout << "Destructor called for " << name << endl;
}

int main() {
	Player empty;
	Player Kevin("Kevin De Bruyne");
	Player Rodri("Rodrigo", 100, 28);
	Player TamDao = Kevin;
	return 0;
}