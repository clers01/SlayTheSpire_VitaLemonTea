#pragma once
class Cards
{
public:
	Cards(void);
	~Cards(void);
	unsigned int CardsNum;//���Ʊ��
	unsigned int EnergyCost;//����
	unsigned int EnergyCost_Up;//���������
	int GainBlock;//��û���ֵ
	int GainBlock_Up;//�������û���ֵ
	int Damage;//����˺�ֵ
	int Damage_Up;//����������˺�ֵ
	int LevelUp;//�Ƿ���������1��ʾ������0��ʾδ����
	
	int EnergyConsume(int x, StateVariables* player);
};

