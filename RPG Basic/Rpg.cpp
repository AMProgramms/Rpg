#include <iostream>
#include <time.h>
#include <string>
#include <conio.h>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <Windows.h>
#include <fstream>
#include <iomanip>
#include <cstdio>
using namespace std;

#pragma warning(disable : 4996);

HANDLE hConsole;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);



enum ConsoleColor {
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magneta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagneta = 13,
	Yellow = 14,
	White = 15
};

void SetColor(int text, int bg) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}

void intro() {
	cout << "\t\t\t\t\t:----------------------------:" << endl;
	cout << "\t\t\t\t\t| Rpg 0.48 PROJECT PC version|" << endl;
	cout << "\t\t\t\t\t|        PC Version!         |" << endl;
	cout << "\t\t\t\t\t|   Created Alexander M      |" << endl;
	cout << "\t\t\t\t\t|--------->New Game<---------|" << endl;
	cout << "\t\t\t\t\t|----------->Exit<-----------|" << endl;
	cout << "\t\t\t\t\t:----------------------------:" << endl;
	getch();
	system("cls");
}

void printVin() {
	SetColor(2, 0);
	cout << "=================" << endl;
	cout << "+++++++Win!++++++" << endl;
	cout << "=================" << endl;
	SetColor(15, 0);
}
void printLose() {
	SetColor(4, 0);
	cout << "=================" << endl;
	cout << "~~~~~Lose...~~~~~" << endl;
	cout << "=================" << endl;
	SetColor(15, 0);

}
class Shop
{
public:
		int sword;
		int armor;
		int ring;
void EnterShop()
{
	cout << "Hi it's shop!" << endl;
}
	
};

class Arena {
protected:
	int attackPower;
public:
	void setAttackPower(int a) {
		attackPower = a;
	}
};
class Hero : public Arena {
public:
	void attack() {
		cout << "Attack Hero -" << attackPower << endl;
	}
};
class Enemy : public Arena {
public:
	void attack() {
		cout << "Attack enemy-" << attackPower << endl;
	}
};
class BaseXaracted
{
public:
	BaseXaracted(int s, int z, int l, int i, int e, int lev, int mg, int el, int def, int mon, int k) :
		str(s), hp(z), lov(l), intel(i), exp(e), lev(l), mag(mg), explevel(el), defend(def), money(mon), kills(k)
	{
	}
	void printDate()
	{
		cout << " Level: " << lev << endl;
		cout << exp << "/" << explevel << endl;
		cout << "Sila =" << str << endl;
		cout << "HitPoints:" << hp << "HP" << endl;
		cout << "Lovkosti = " << lov << endl;
		cout << "Intelect = " << intel << endl;
		cout << "Mage.Power = " << mag << endl;
		cout << "Defend = " << defend << endl;
		cout << "Kills = " << kills << endl;
		cout << money << " Money" << endl;
	}
private:
	int str;
	int hp;
	int lov;
	int intel;
	int exp;
	int lev;
	int mag;
	int explevel;
	int defend;
	int money;
	int kills;
};
class Player
{
public:
	Player(string n, string c, BaseXaracted b) :
		name(n),
		clas(c),
		bxd(b) {
	}

	void printInfo()
	{
		cout << name << endl;
		cout << "(" << clas << ")" << endl;
		cout << "---------------------" << endl;
		bxd.printDate();
		cout << "---------------------" << endl;
	}
private:
	string name;
	string clas;
	BaseXaracted bxd;
};





class myClass {
public:
	myClass(string nm) {
		setName(nm);
	}
	void setName(string x) {
		name = x;
	}
	string getName() {
		return name;
	}
private:
	string name;
};
int main() {
	system("color E0");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	intro();
	int key = 0;
	bool Pause = false;
	Hero h;
	Enemy en;
	Arena*e1 = &h;
	Arena*e2 = &en;
	int str = 10, hp = 500, lov = 50, intel = 200, exp = 0, lev = 1, mag = 0, explevel = 150, defend = 50, kills = 0;
	int str_e = 50, hp_e = 1000, lov_e = 125, intel_e = 300, lev_e = 1, mag_e = 0, defend_e = 75, money = 200, hp_n, hp_en;
	string x, c;
	string Enemy_1, Enemy_2, Enemy_3;
	int y, r,f, cl, hit,ciki, pol, hi, hi2, hi3, hi4, hi5, exit, jp;
	int ht1, ht2, ht3, ht4, ht5, ht6, ht7, ht8, ht9, ht10, hill;
	string hit_1, hit_2, hit_3;
	
	
	cout << "Welcome! I am the guide of this game. Try not to touch anything now , I'll tell you a story. You're in a world called Trope. This world is full of dangers and it needs its own hero tell me what can I call you?" << endl;
	cout << "Your name: ";
	cin >> x;
	myClass ob1(x);
	myClass ob2("Heinous orc");
	cout << "Choose your hero's class:" << endl << "-----------" << endl << "1)|Warrior|" << endl << "2)|Archer |" << endl << "3)|Mage   |" << endl << "-----------" << endl;
	cin >> cl;
	switch(cl){
	case 1:
		c = "Warrior";
		str += 500;
		hp += 200;
		intel += 25;
		lov += 50;
		defend += 100;
		hit_1 = "Wave sword";
		hit_2 = "Hard metall";
		break;
	case 2:
		c = "Archer";
		str += 50;
		hp += 200;
		intel += 75;
		lov += 150;
		defend += 50;
		hit_1 = "Arrow";
		hit_2 = "Posion arrow";
		break;
	case 3:
		c = "Mage";
		str += 50;
		hp += 100;
		intel += 250;
		defend += 50;
		hit_1 = "Electrodamage";
		hit_2 = "Fair ball";
		break;
	};
	cout << "Good. I will show your characteristics:" << endl;
	BaseXaracted bxd(str, hp, lov, intel, exp, lev, mag, explevel, defend, money, kills);
	Player p(x, c, bxd);
	p.printInfo();
	cout << "Now you can act! Let's test your abilities." << endl;
	cout << "Kill Ork!" << endl;
	cout << endl;
	cout << ob1.
	getName() << ":" << hp << "HP" << endl;
	cout << ob2.
		getName() << ":" << hp_e << "HP" << endl;
	hp_n = hp;
	hp_en = hp_e;
	while (hp_e > 0)
	{
		hit = 0;
		r = rand() % str_e;
		cout << "1." << hit_1 << endl << "2." << hit_2 << endl << "3." << endl << hit_3 << endl;
		cin >> f;
		switch (f) {
		case 1:
			hit = 2 * str;
			hit -= (lov_e*0.5);
			hit += (mag*0.5);
			break;
		case 2:
			hit = str;
			hit += (intel*0.5);
			hit -= (lov_e*0.1);
			hit += (mag * 0.2);
			break;
		};
		hp_e = hit;
		hp = str_e + r;
		e1->setAttackPower(hit);
		e2->setAttackPower(str_e + r);
		h.attack();
		cout << ob2.
		getName() << ":" << hp_e << "HP" << endl;
		en.attack();
		cout << ob1.
		getName() << ":" << hp << "HP" << endl;
		cout << endl << endl;
		if (hp <= 0) {
			hp_e = 0;
		}
	}
	if (hp <= 0) {
		cout << ob1.
			getName() << ":" << hp << "HP" << endl;
		cout << endl;
		exp += 10;
		money += 50;
		printLose();
		cout << "I'm sorry, my young" << ob1.getName() << endl << "the world wiil not forget you. You died like a hero" << "..." << endl;
	}
	else {
		cout << ob2.
			getName() << ":" << hp_e << "HP" << endl;
		cout << endl;
		exp += 30;
		money += 100;
		kills += 1;
		printVin();
		cout << "My congratulations, oh great " << ob1.getName() << "You have completed your task. Now you are free!" << endl;
	}
	cout << endl << ob1.getName() << endl;
	cout << " - level: " << lev << endl;
	cout << exp << "/" << explevel << endl;
	cout << money << " - money" << endl;
	cout << "Kills: " << kills << endl;
	cout << endl << endl;
	hp = hp_n;
		myClass ob3("Forest Murder");
	hp_e = hp_en;
	while(lev<=10)
	{
		hp_en = hp_e;
		hp_n = hp;
		cout << ob1.
			getName() << ":" << hp << "HP" << endl;
		cout << ob3.
			getName() << ":" << hp_e << "HP" << endl;
		while (hp_e > 0)
		{
			hit = 0;
			r = rand() % str_e;
			cout << "1." << hit_1 << endl << "2." << hit_2 << endl << "3." << hit_3 << endl;
			cin >> f;
			switch (f) {
			case 1:
				hit = 2 * str;
				hit -= (lov_e*0.1);
				hit += (mag*0.1);
				break;
			case 2:
				hit = str;
				hit += (intel*0.5);
				hit -= (lov_e*0.1);
				hit += (mag * 0.2);
				break;
			case 4:
				Shop magaz;
				magaz.sword = 200;
				magaz.ring = 100;
				magaz.armor = 150;
				magaz.EnterShop();
				cout << "Buy items!" << endl;
				cin >> jp;
				if (jp == 1)
				{
					str += magaz.sword;
					money -= 2000;
					cout << "Thanks " << endl;
					if (money < 2000)
					{
						cout << "don't ";
					}
				}
					break;
			};
			hp_e = hit;
			hp -= str_e + (r*(lev * 1, 2));
			e1->setAttackPower(hit);
			e2->setAttackPower(str_e + r);
			h.attack();
			for (int cikl = 0; cikl >= 10000; cikl++)
			{
			}
			cout << ob3.
				getName() << ":" << hp_e << "HP" << endl;
			en.attack();
			cout << ob1.
				getName() << ":" << hp << "HP" << endl;
			cout << endl << endl;
			if (hp <= 0) {
				hp_e = 0;
			}
		}
		if (hp <= 0) {
			cout << ob1.
				getName() << ":" << hp << "HP" << endl;
			cout << endl;
			exp += 10 * (lev*1.1);
			money += 50;
			printLose();
			Pause = false;
		}
		else {
			cout << ob3.getName() << ":" << hp_e << "HP" << endl;
			cout << endl;
			exp += 30 * (lev * 1.5);
			money += 100;
			kills += 1;
			printVin();
		}
		hp = hp_n;
		hp_e = hp_en;
		if (exp > explevel)
		{
			exp = explevel - exp;
			exp = exp - exp - exp;
			cout << "New level!" << endl;
			explevel += (explevel*1.2);
			lev += 1;
			str += (str * 1.2);
			hp += (hp*1.1);
			str_e += (str_e*1.4);
			BaseXaracted bxd(str, hp, lov, intel, exp, lev, mag, explevel, defend, money, kills);
			p.printInfo();
		}
		else
		{
			cout << endl << ob1.getName() << endl;
		}
	}
cout << "Cooming soon!" << endl;
cout << "Program running time:" << clock() / 1000000.0 << "секунд." << endl;
cout << "version id-20200407 alpha " << endl;
cout << "Press return";
return 0;
};