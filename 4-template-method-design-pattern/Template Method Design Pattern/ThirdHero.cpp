#include "Heros.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

namespace heros {

	const string *ThirdHero::SPRITE = new string("\n\n                        ..-----..\n                     ,-\'         \'-.\n                   ,'               `.\n                  /                   \\\n                 .                     .\n                 |                     |\n                 |        o   o        |\n              .-.|        o   o        |,-.\n              |(\\| ?b._   o   o   _.dP |/)|\n              |\\d`. |`\'\'=.__ __.=\'\''| .'6/|\n              `.\\_|  -..\'_/   \\_\'..-  |_/,'\n                `._\\  --.. .   .---  /_,'\n                    \\      ___      /\n                     `-.  \'...\'  .-'\n                 ._ .-|.`-._ _.-'.|-. _.\n             _.-/ .' '  \\       /  ` `. \\-._\n        ..--\'   . \\..._).\\_   _/.(_.../ .   \'--..\n       /\\        \\ |\'\'--.._\'=\'_..--\'\'| /        /\\\n      |  \\ .      \\ `.     \'\'\'     .' .      . /  |\n    ./    \\ \\       . `-.       .-'         / /    \\.\n    |_     `|         .  `-. ,-'            |'     _|\n     /\'-.   |           .   \'               |   .-\'\\\n    /    T-. \\      \\      ._      .--.    / .-T    \\\n   .     |  \'-\\       .           /    |  /-\'  |     .\n   |     `    |.        - .     .(\'    / .|    '     |\n   \\   | ._  .'|              _.-\'.-\','  |`.  _. |   /\n   ()  |   \'(   `._________._.._________.'  )\'   |  ()\n   (   `    \\    (========( / /)========)   /    /   )\n\n\n\n");

	void ThirdHero::presentationAfterAttack() {
		cout << *SPRITE << endl;
	}

}