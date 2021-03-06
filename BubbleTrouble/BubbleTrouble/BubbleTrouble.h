#pragma once

#include "resource.h"

struct Bubble
{
	float x, y;
	int ray;
	float xSpeed, ySpeed;
	int r;
};

struct Player
{
	bool dead;
	char name[50];
	int score;
};

struct Gameboard
{
	Player tabPlayer[2];
	int nbPlayer;
	char scoreBoard[200] = { 0 };
	//time
};

struct Position
{
	POINT Player;
	POINT Harpoon;
};
INT_PTR CALLBACK	Inscription(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    Regle(HWND, UINT, WPARAM, LPARAM);
VOID CALLBACK TimerProc(HWND, UINT, UINT_PTR, DWORD);
DWORD WINAPI BubbleThread(LPVOID);
DWORD WINAPI SpecialBubbleThread(LPVOID);
BOOL Collided(POINT, Bubble);
BOOL CollidedHarpoon(POINT, Bubble);
BOOL CollidedCharacter(POINT, Bubble);