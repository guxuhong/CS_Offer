int	ListLength(LinkList L)
/*���ͷ���ĵ�����L�ĳ���*/
{   
	Node *p;
	int j;
	p=L->next;
	j=0;   /*������ŵ������ĳ���*/
	while(p!=NULL)
	{	  
		p=p->next;
		j++;
	}
	return j;	/*jΪ��õĵ���������*/
}  