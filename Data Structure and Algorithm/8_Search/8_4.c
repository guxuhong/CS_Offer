void InsertBST(BSTree *bst, KeyType key)
/*���ڶ����������в����ڹؼ��ֵ���key��Ԫ�أ������Ԫ��*/
{ 
	BSTree s;
	if (*bst == NULL)/*�ݹ��������*/
	{
		s=(BSTree)malloc(sizeof(BSTNode));/*�����µĽ��s*/
		s-> key=key;
		s->lchild=NULL; 
		s->rchild=NULL;
		*bst=s;
	}
	else 
		if (key < (*bst)->key)
			InsertBST(&((*bst)->lchild), key);/*��s����������*/
		else 
			if (key > (*bst)->key)
				InsertBST(&((*bst)->rchild), key); /*��s����������*/
}