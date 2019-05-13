#pragma once
#include "OverAll.h"

class StateVariables
{
public:
	StateVariables(void);
	~StateVariables(void);
	unsigned int HP;//����ֵ
	unsigned int HPMax;//����ֵ����
	unsigned int Energy;//����ֵ
	unsigned int EnergyMax;//����ֵ����
	unsigned int Block;
	int Strength;//����
	int StrengthUp;//�غϽ�����������
	int Dexterity;//����
	int DexterityUp;//�غϽ�����������
	unsigned int Gold;//���
	unsigned int Hand[10];//����
	unsigned int Deck[100];//�ƿ�
	unsigned int DrawNum;
	unsigned int DrawPile[100];//���ƶ�����
	unsigned int DiscardPile[100];
	unsigned int DrawPoint;//���ƶ�ָ��
	unsigned int DiscardPoint;//���ƶ�ָ��
	unsigned int HandPoint;//����ָ��
	int Vulnerable;//����
	int Weak;//����
	int Berserk;//�»غϿ�ʼ���Energy
	int Frail;//�Ƽ�

	void draw(int drawnum);

};

StateVariables* player = new StateVariables();
