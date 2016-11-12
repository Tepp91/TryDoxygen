#include "HelloWorld.h"

int main()
{
	App::HelloWorld helloWorld;

	helloWorld.SetLanguage( App::HelloWorld::Language::kEnglish );
	helloWorld.Output();

	return 0;
}
