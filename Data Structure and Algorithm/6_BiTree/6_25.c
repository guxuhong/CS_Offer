void path(BiTree root, BiTNode *r)
{ 
	BiTNode  *p, *q;
	int i, find=0, top=0;
	BiTNode *s[NUM];
	q = NULL;   /* ��q����ձ������Ľ�� */
	p = root;
	while ( (p != NULL || top != 0) && !find )
	{
		while ( p != NULL )
		{ 
			top++; 
			s[top] = p;
			p = p->LChild; 
		}                /* ���������� */
		if (top > 0)
		{  
			p=s[top];       /* ����� */
			if ( p->RChild == NULL || p->RChild == q )
			{ 
				if(p == r)   /*�ҵ�r��ָ��㣬����ʾ�Ӹ���㵽r��ָ���֮���·��*/
				{
					for(i=1;i<=top;i++) 
						printf("%c  ",s[i]->data);
					find=1;
				}
				else
				{
					q = p;        /* ��q����ձ������Ľ�� */
					top--;
					p = NULL;    /* ����ǰ���������������ջ */
				}
			}
			else
				p = p->RChild;     /* ���������� */
		}
	}  
}