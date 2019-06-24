#pragma once
#include "Compressor.h"
class LZ77: public Compressor
{
public:
	LZ77();
	/* 
	 * ��� ������: ������� ������
	 */
	void Compress() override;

	/* 
	 * ��� ������: ������� ������
	 */
	void Decompress() override;

	/* 
	 * ��� ������: �������������� ��������� ���������(�������) ����������� ��� ������
	 */
	void InitEncode();

	/* 
	 * ��� ������: ��������� ������� �� ������ �����, ������� � ������� dictpos
	 */
	unsigned int LoadDict(unsigned int dictpos);

	/*
	��� ������: ������� �� ������� ������ dectpos
	*/
	void DeleteData(unsigned int dictpos);

	/*
	��� ������: �������� ������
	 */
	void HashData(unsigned int dictpos, unsigned int bytestodo);

	/*
	 * ��� ������: ���� � ������� ���������� �� ������� ������� � ������� dictpos
	 */
	void FindMatch(unsigned int dictpos, unsigned int startlen);

	/*
	 * ��� ������: ���� � ������� ���������� �������� ��� �������� �������
	 */
	void DictSearch(unsigned int dictpos, unsigned int bytestodo);

	virtual ~LZ77();
};

