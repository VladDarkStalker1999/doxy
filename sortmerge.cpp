#include "func.h"
//������� ��������� �������
void Merge(char *A, int first, int last)
{
	int middle, start, final, j;
	char *mas=new char[100];
		{
			middle=(first+last)/2; //����� ������
			start=first; //������ ����� �����
			final=middle+1; //������ ������ �����
			for(j=first; j<=last; j++)//�� ������ �� �����
				if ((start<=middle) && ((final>last) || (A[start]<A[final])))
				{
					mas[j]=A[start];
					start++;
				}
				else
				{
					mas[j]=A[final];
					final++;
				}
			//����������� ���������� � ������
			for (j=first; j<=last; j++) A[j]=mas[j];
		}
	delete[]mas;
};
//����������� ��������� ����������
void MergeSort(char *A, int first, int last)
{
	{
		if (first<last)
		{
			MergeSort(A, first, (first+last)/2); //��������� ����� �����
			MergeSort(A, (first+last)/2+1, last); //��������� ������ �����
			Merge(A, first, last); //������� ��� �����
		}
	}
};
void main() //������ �������� ���������
{
	int i, n;
	char *A=new char[100];
	cout<<"The size of the array > ";
	cin>>n;
	cout<<"Enter the array: \n";
	for (i=1; i<=n; i++)
		cin>>A[i];
	//����� ����������� ���������
	MergeSort(A, 1, n);
	//����� ���������������� �������
	cout<<"The result of sorting:"<<endl;
	for (i=1; i<=n; i++) cout<<A[i]<<" ";
	delete []A;
	system("pause>>void");
}