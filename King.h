#pragma once
#include "Figure.h"
class King : public Figure
{
private:
	bool hasShortLegs;//����� ������ ���� ����� �� 1 ������, ���� ���� �� �������� ����� ����� \ ������ ������
public:
	King();
	void makeMove();
	void setLength(bool value);
};

