#include "OverAll.h"
#include "Slay_the_Spire.h"
#include "StateVariables.h"

void main()
{
	StateVariables* player = new StateVariables();//���ɳ�ʼ��Ϣ
	/*׼��ս������*/
	//����DrawPile

	/*������ﲢ����*/
	player->draw(player->DrawNum);


	return;
}