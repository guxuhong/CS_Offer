LinkList   merge_1(LinkList LA,LinkList LB)
{  /*���㷨����������ͷָ���ѭ������������β��������*/
	Node *p, *q;
	p=LA;
	q=LB;
	while (p->next!=LA)	p=p->next;	/*�ҵ���LA�ı�β����pָ����*/
	while (q->next!=LB)	q=q->next;	/*�ҵ���LB�ı�β����qָ����*/
	q->next=LA;	/*�޸ı�LB ��βָ�룬ʹָ֮���LA ��ͷ���*/
	p->next=LB->next; /*�޸ı�LA��βָ�룬ʹָ֮���LB �еĵ�һ�����*/
	free(LB);
	return(LA);
}