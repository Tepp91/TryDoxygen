/*
 * @file HelloWorld.cpp
 * @brief Hello, Worldの出力を行います
 */

#include <iostream>
#include "HelloWorld.h"

namespace App{
	//--------------------------------------------------------------------------
	void HelloWorld::OutputEnglish()
	{
		std:: cout << "Hello world." << std::endl;
	}

	//--------------------------------------------------------------------------
	void HelloWorld::OutputJapanese()
	{
		std:: cout << "おはよう　世界" << std::endl;
	}

	//--------------------------------------------------------------------------
	void HelloWorld::OutputGermany()
	{
		std:: cout << "Hallo welt." << std::endl;
	}

	//--------------------------------------------------------------------------
	void HelloWorld::OutputFrench()
	{
		std:: cout << "Bonjour le monde." << std::endl;
	}

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
			OutputEnglish();
			break;

		case Language::kJapanese:
			OutputJapanese();
			break;

		case Language::kGermany:
			OutputGermany();
			break;

		case Language::kFrench:
			OutputFrench();
			break;
		}
	}

} // namespace App
