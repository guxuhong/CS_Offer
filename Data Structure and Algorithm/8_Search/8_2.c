int SeqSearch(RecordList l,  KeyType k)
/*����"������"������˳����в��ҹؼ��ֵ���k��Ԫ��*/
{
	int i;
	i=l.length;
	while (i>=1&&l.r[i].key!=k)  i--;
	if (i>=1) 
		return(i);
	else
		return (0);
}