void  HeapSort(RecordType  r[],int length)
/* ��r[1..n]���ж�����ִ�б��㷨��r�м�¼���ؼ����ɴ�С�������� */ 
{
	int i,n;
	RecordType b;
	crt_heap(r, length);
		n= length;
	for (  i=n ; i>= 2; --i) 
	{
		b=r[1];              /* ���Ѷ���¼�Ͷ��е����һ����¼���� */ 
		r[1]= r[i];
		r[i]=b; 
		sift(r,1,i-1);  /* ���е�����ʹr[1..i-1]��ɶ� */ 
	}
} /* HeapSort */ 