void  PostOrder(BiTree root)  
/* ���������������rootΪָ�������(��ĳһ����)������ָ��*/
{
	if(root!=NULL)
	{
		PostOrder(root ->LChild); /*�������������*/
		PostOrder(root ->RChild); /*�������������*/
		Visit(root ->data);       /*���ʸ����*/
	}
}