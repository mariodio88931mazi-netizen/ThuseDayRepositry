#include "Inumaki.h"
#include "Megumi.h"
#include "Gojo.h"
#include "Sorcerer.h"
int main(void)
{
	Gojo gojo;
	Inumaki inumaki;
	Megumi megumi;

	Sorcerer* sorcerer1 = &megumi;
	Sorcerer* sorcerer2 = &inumaki;
	Sorcerer* sorcerer3 = &gojo;

	sorcerer1->ShowStatus();
	sorcerer1->UseTechnique();

	sorcerer2->ShowStatus();
	sorcerer2->UseTechnique();

	sorcerer3->ShowStatus();
	sorcerer3->UseTechnique();
	return 0;
}