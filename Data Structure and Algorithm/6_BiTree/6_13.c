void  Inthread(BiTree root)
/* ��root��ָ�Ķ�������������������������preʼ��ָ��շ��ʹ��Ľ�㣬���ֵΪNULL*/
{
	if (root!=NULL)
	{ 
		Inthread(root->LChild);  /* ������������ */
		if (root->LChild==NULL)
		{
			root->Ltag=1; 
			root->LChild=pre;  /*��ǰ������ */
		}
		if (pre!=NULL&& pre->RChild==NULL)  /* �ú������ */
		{
			pre->RChild=root;
			pre->Rtag=1;
		}
	pre=root;
	Inthread(root->RChild);  /*������������*/
	}
}	