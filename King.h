#pragma once
#include "Figure.h"
class King : public Figure
{
private:
	bool hasShortLegs;//����� ������ ���� ����� �� 1 ������, ���� ���� �� �������� ����� ����� \ ������ ������
	int mas_of_possible_turns[9]; //"�����", ������������, ���� ����� ������ ������
public:
	King();
	void makeMove();
	void setLength(bool value);
};

