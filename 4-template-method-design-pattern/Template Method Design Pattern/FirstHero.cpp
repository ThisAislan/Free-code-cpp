#include "Heros.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

namespace heros {

	const string *FirstHero::SPRITE = new string("\n\n                   `\\-.   `\n                      \\ `.  `\n                       \\  \\ |\n              __.._    |   \\.       \n       ..---~~     ~ . |    Y\n         ~-.          `|    |\n            `.               `~~--.\n              \\                    ~.\n               \\                     \\__. . -- -  .\n         .-~~~~~      ,    ,            ~~~~~~---...._\n      .-~___        ,'/  ,'/ ,'\\          __...---~~~\n            ~-.    /._\\_( ,(/_. 7,-.    ~~---...__\n           _...>-  P\'\'6=`_/\'6\'~   6)    ___...--~~~\n            ~~--._ \\`--') `---'   9'  _..--~~~\n                  ~\\ ~~/_  ~~~   /`-.--~~\n                    `.  --'    .'   \\_\n                      `. \' _.-'     | ~-.,-------._\n                  ..._../~~   ./       .-'    .-~~~-.\n            ,--~~~ ,'...\\` _./.----~~.'/    /'       `-\n        _.-(      |\\    `/~ _____..-' /    /      _.-~~`.\n       /   |     /. ^---~~~~       ' /    /     ,'  ~.   \\\n      (    /    (  .           _ ' /'    /    ,/      \\   )\n      (`. |     `\\   - - - - ~   /'      (   /         .  |\n       \\.\\|       \\            /'        \\  |`.           /\n       /.'\\\\      `\\         /'           ~-\\         .  /\\\n      /,   (        `\\     /'                `.___..-      \\\n     | |    \\         `\\_/'                  //      \\.     |\n     | |     |                             /' |       |     |\n\n");

	void FirstHero::presentationAfterAttack() {
		cout << *SPRITE << endl;
		cout << "Hi I am Goku!\n\n" << endl;
	}

}