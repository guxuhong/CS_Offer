int SeqSearch(RecordList  l,  KeyType  k)
/*��˳���l��˳�������ؼ��ֵ���k��Ԫ�أ����ҵ�������ֵΪ��Ԫ���ڱ��е�λ�ã�����Ϊ0*/
{
	int i;
	l.r[0].key=k; 
	i=l.length;
	while (l.r[i].key!=k)  i--;
	return(i);
}