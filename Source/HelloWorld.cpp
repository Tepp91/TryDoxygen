/*
 * @file HelloWorld.cpp
 * @brief Hello, Worldの出力を行います
 */

#include <iostream>
#include "HelloWorld.h"

namespace App{
	//--------------------------------------------------------------------------
	HelloWorld::HelloWorld()
		:	language_	( Language::kEnglish )
	{
	}

	//--------------------------------------------------------------------------
	void HelloWorld::Output()
	{
		switch(language_){
		case Language::kEnglish:
			std:: cout << "Hello world." << std::endl;
			break;

		case Language::kJapanese:
			std:: cout << "おはよう　世界" << std::endl;
			break;

		case Language::kGermany:
			std:: cout << "Hallo welt." << std::endl;
			break;

		case Language::kFrench:
			std:: cout << "Bonjour le monde." << std::endl;
			break;
		}
	}

} // namespace App
