#pragma once
#include "Figure.h"
class King : public Figure
{
private:
	bool has_short_legs;//����� ������ ���� ����� �� 1 ������, ���� ���� �� �������� ����� ����� \ ������ ������
public:
	void makeMove();
	void setLength(bool value);
};

