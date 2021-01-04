// HowManyRunsTillDream.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
static int BlazesKilled = 305;
static int GoldBartered = 262;
static int BlazeDrops[2] = { 0, 1 };
static int PearlBarters[423] = {2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3 };
static int DreamDrops = 211;
static int DreamPearls = 42;
int LastDrops = 0;
int LastPearls = 0;
long long CurrentRun = 0;
int main(){
	srand(time(NULL)); //initialize the random seed

	while (LastDrops < DreamDrops || LastPearls < DreamPearls) {
		LastDrops = 0;
		LastPearls = 0;
		++CurrentRun;
		for (int i = 0; i <= BlazesKilled; ++i) {
			int RandIndex = rand() % 2;
			if (BlazeDrops[RandIndex] == 1) {
				++LastDrops;
			}
		}
		for (int i = 0; i <= GoldBartered; ++i) {
			int RandIndex = rand() % 423;
			if (PearlBarters[RandIndex] == 2) {
				LastPearls += 2;
			} else if (PearlBarters[RandIndex] == 3) {
				LastPearls += 3;
			}
		}
		printf("Pearls: %d Blaze Rods: %d\n", LastPearls, LastDrops);
	}
	printf("Luck equaled or exceeded Dream with %d blaze rods of 305 and %d ender pearls of 262. This is the %dth iteration", LastDrops, LastPearls, CurrentRun);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
