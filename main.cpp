#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
struct stud_node//����ṹ�� 
{ 
	char num[20]; 
	char name[20]; 
	char className[3][20];
	double regularScore[3];
	double experimentalScore[3];
	double testScore[3];
	double totalScore[3];
	double totalScoreAll;
	char grade[20];
	struct stud_node *next; 
}stud[100];
void displayAll(struct stud_node *head)//���ȫ����Ϣ�ĺ��� 
{
	struct stud_node *p;
	p=(struct stud_node*)malloc(sizeof(struct stud_node));
	printf("\n\n\t\t����\t\tѧ��\t\t�༶\t\t�γ���\t\tƽʱ�ɼ�\t\tʵ��ɼ�\t\t���Գɼ�\t\t�����ɼ�\t\t�ܳɼ�");//�����Ӧ�ĸ�ʽ 
	printf("\n    --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	for(p=head;p!=NULL;p=p->next)//�����Ϣ 
	{
		printf("\n\t\t%-10s\t%-10s\t%-10s\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->name,p->num,p->grade,p->className[0],p->regularScore[0],p->experimentalScore[0],p->testScore[0],p->totalScore[0],p->totalScoreAll);
		for(int i=1;i<3;i++)
		{
			printf("\t\t\t\t\t\t\t\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->className[i],p->regularScore[i],p->experimentalScore[i],p->testScore[i],p->totalScore[i]);
		}
	}
	printf("\n\n\t\t");
}
void search1(struct stud_node *head,char n[])//ͨ��ѧ��Ѱ�� 
{
	int flag=1;
	struct stud_node *p;
	p=(struct stud_node *)malloc(sizeof(struct stud_node));
	for(p=head;p!=NULL;p=p->next)
	{
		if(strcmp(p->num,n)==0)//�Ƚ������ѧ�ź������е�ѧ���Ƿ���� 
		{
			printf("\n\n\t\t����\t\tѧ��\t\t�༶\t\t�γ���\t\tƽʱ�ɼ�\t\tʵ��ɼ�\t\t���Գɼ�\t\t�����ɼ�\t\t�ܳɼ�");//��ӡ��ص���Ϣ 
			printf("\n    --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
			printf("\n\t\t%-10s\t%-10s\t%-10s\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->name,p->num,p->grade,p->className[0],p->regularScore[0],p->experimentalScore[0],p->testScore[0],p->totalScore[0],p->totalScoreAll);
			for(int i=1;i<3;i++)
			{
				printf("\t\t\t\t\t\t\t\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->className[i],p->regularScore[i],p->experimentalScore[i],p->testScore[i],p->totalScore[i]);
			}
			flag=0;
			printf("\n\n\n\t\t");
			break;
		}
	}
	//��ѧ�Ų�����ʱ 
	if(flag){
		printf("\n\n\n\t\t\t\t����ѯ��ѧ��������\n\n\n\t\t");
	}
}  
void search2(struct stud_node *head,char n[])//ͨ���������� 
{
	int flag=1;
	struct stud_node *p;
	p=(struct stud_node *)malloc(sizeof(struct stud_node));
	for(p=head;p!=NULL;p=p->next)
	{
		if(strcmp(p->name,n)==0)//�Ƚ�����������������е������Ƿ���� 
		{
			printf("\n\n\t\t����\t\tѧ��\t\t�༶\t\t�γ���\t\tƽʱ�ɼ�\t\tʵ��ɼ�\t\t���Գɼ�\t\t�����ɼ�\t\t�ܳɼ�");//�����Ӧ�ĸ�ʽ����Ϣ 
			printf("\n    --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
			printf("\n\t\t%-10s\t%-10s\t%-10s\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->name,p->num,p->grade,p->className[0],p->regularScore[0],p->experimentalScore[0],p->testScore[0],p->totalScore[0],p->totalScoreAll);
			for(int i=1;i<3;i++)
			{
				printf("\t\t\t\t\t\t\t\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->className[i],p->regularScore[i],p->experimentalScore[i],p->testScore[i],p->totalScore[i]);
			}
			flag=0;
			printf("\n\n\n\t\t");
			break;
		}
	}
	//�����������������ʱ 
	if(flag){
		printf("\n\n\n\t\t\t\t����ѯ��ѧ��������\n\n\n\t\t");
	}
}  
void search3(struct stud_node *head,char n[])//ͨ���γ������� 
{
	int flag=1,i=0;
	struct stud_node *p;
	p=(struct stud_node *)malloc(sizeof(struct stud_node));
	for(p=head;p!=NULL;p=p->next)
	{
		for(int j=0;j<3;j++)
		{
			if(strcmp(p->className[j],n)==0)
			{
				if(i==0)
				{
					i++;
					printf("\n\n\t\t����\t\tѧ��\t\t�༶\t\t�γ���\t\tƽʱ�ɼ�\t\tʵ��ɼ�\t\t���Գɼ�\t\t�����ɼ�\t\t�ܳɼ�");//�����Ӧ�ĸ�ʽ�������Ϣ 
					printf("\n    --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				}
				printf("\n\t\t%-10s\t%-10s\t%-10s\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->name,p->num,p->grade,p->className[0],p->regularScore[0],p->experimentalScore[0],p->testScore[0],p->totalScore[0],p->totalScoreAll);
				for(int i=1;i<3;i++)
				{
					printf("\t\t\t\t\t\t\t\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->className[i],p->regularScore[i],p->experimentalScore[i],p->testScore[i],p->totalScore[i]);
				}
				flag=0;
			}	
		}
	}
	if(i!=0)
	{
		printf("\n\n\n\t\t");
	}
	//��������ʱ 
	if(flag){
		printf("\n\n\n\t\t\t\t����ѯ��ѧ��������\n\n\n\t\t");
	}
}  
void insert(struct stud_node* &head,int n)//����ѧ���Ĳ��� 
{
	FILE *fp;
	if((fp=fopen("score.dat","wb"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	int score;
	char num[20],name[20],className[20],grade[20];
	double regularScore,experimentalScore,testScore,totalScore;
	struct stud_node *p,*q;
	p=(struct stud_node *)malloc(sizeof(struct stud_node));
	q=(struct stud_node *)malloc(sizeof(struct stud_node));
	q=head;
	printf("\n\t\t\t\t�����������ѧ����ѧ��(1800000000-1899999999):");//������ʾ������ص���Ϣ 
	scanf("%s",&num);
	while(!(strcmp(num,"1800000000")>=0&&strcmp(num,"1899999999")<=0))
	{
		printf("\t\t\t\t������������������ѧ����ѧ��(1800000000-1899999999):");
		scanf("%s",&num);
	}
	printf("\t\t\t\t�����������ѧ���İ༶��(18000000-18999999):");
	scanf("%s",grade);
	while(!(strcmp(grade,"1800000")>=0&&strcmp(grade,"18999999")<=0))
	{
		printf("\t\t\t\t������������������ѧ���İ༶��(18000000-18999999):");
		scanf("%s",grade);
	}
	printf("\t\t\t\tѧ��Ϊ%sѧ��������:",num);
	scanf("%s",name);
	p->totalScoreAll=0;
	for(int i=0;i<3;i++)
	{
		printf("\t\t\t\tѧ��Ϊ%sѧ���Ŀγ���:",num);
		scanf("%s",className);
		printf("\t\t\t\tѧ��Ϊ%sѧ����ƽʱ�ɼ�(0-100):",num);
		scanf("%lf",&regularScore);
		while(!(regularScore>=0&&regularScore<=100)){
			printf("\t\t\t\t������������������ѧ����ƽʱ�ɼ�(0-100):");
			scanf("%lf",&regularScore);
		}
		printf("\t\t\t\tѧ��Ϊ%sѧ����ʵ��ɼ�(0-100):",num);
		scanf("%lf",&experimentalScore);
		
		while(!(experimentalScore>=0&&experimentalScore<=100)){
			printf("\t\t\t\t������������������ѧ����ʵ��ɼ�(0-100):");
			scanf("%lf",&experimentalScore);
		}
		printf("\t\t\t\tѧ��Ϊ%sѧ���Ĳ��Գɼ�(0-100):",num);
		scanf("%lf",&testScore);
		while(!(testScore>=0&&testScore<=100)){
			printf("\t\t\t\t������������������ѧ���Ĳ��Գɼ�(0-100):");
			scanf("%lf",&testScore);
		}
		//����Ϣ���浽�ṹ��ָ���� 
		p->totalScore[i]=regularScore*0.2+experimentalScore*0.2+testScore*0.6;
		strcpy(p->className[i],className);
		strcpy(p->grade,grade);
		p->regularScore[i]=regularScore;
		p->experimentalScore[i]=experimentalScore;
		p->testScore[i]=testScore;
		p->totalScoreAll+=p->totalScore[i];
		p->next=NULL; 
	}
	strcpy(p->num,num); 
	strcpy(p->name,name); 
	if(head==NULL)
	{
		head=p; 
	} 
	else
	{
		if(n==1)
		{
			p->next=q;
			head=p;
		}
		else
		{
			for(int i=0;i<n-2&&q->next!=NULL;i++)
			{
				q=q->next;
			}
			if(q->next!=NULL)
			{
				p->next=q->next;
				q->next=p;
			}
			else
			{
				q->next=p;
			}
		}
	}
	//������Ӧ�ĸ�ʽ�����ѧ������Ϣ 
	printf("\n\n\t\t����\t\tѧ��\t\t�༶\t\t�γ���\t\tƽʱ�ɼ�\t\tʵ��ɼ�\t\t���Գɼ�\t\t�����ɼ�\t\t�ܳɼ�");
	printf("\n    --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	for(p=head;fwrite(p,sizeof(struct stud_node),1,fp),p!= NULL;p=p->next)
	{
		printf("\n\t\t%-10s\t%-10s\t%-10s\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->name,p->num,p->grade,p->className[0],p->regularScore[0],p->experimentalScore[0],p->testScore[0],p->totalScore[0],p->totalScoreAll);
		for(int i=1;i<3;i++)
		{
				printf("\t\t\t\t\t\t\t\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->className[i],p->regularScore[i],p->experimentalScore[i],p->testScore[i],p->totalScore[i]);
		}	
	}
	fclose(fp);
	printf("\n\n\n\t\t");
} 
void deleteNode(struct stud_node* &head,int n)//ɾ������صĲ��� 
{
	FILE *fp;
	if((fp=fopen("score.dat","wb"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	int score,i,flag=1;
	char num[20],name[20];
	struct stud_node *p,*q;
	p=(struct stud_node *)malloc(sizeof(struct stud_node));
	q=(struct stud_node *)malloc(sizeof(struct stud_node));
	p=q=head;
	//������Ӧ�Ľڵ� 
	if(n==1)
	{
		p=p->next;
		head=p;
	}
	else
	{
		for(i=0;i<n-2&&q!=NULL;i++)
		{
			q=q->next;
		}
		if(i==n-2)
		{
			p=q->next;
			q->next=p->next;
		} 
		else
		{
			printf("\n\t\t\t\t��ɾ����ѧ����Ϣ������\n");
		}
	} 
	//�����Ӧ�ĸ�ʽ�����ѧ������Ϣ 
	printf("\n\n\t\t����\t\tѧ��\t\t�༶\t\t�γ���\t\tƽʱ�ɼ�\t\tʵ��ɼ�\t\t���Գɼ�\t\t�����ɼ�\t\t�ܳɼ�");
	printf("\n    --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	for(p=head;fwrite(p,sizeof(struct stud_node),1,fp),p!= NULL;p=p->next)
	{
		printf("\n\t\t%-10s\t%-10s\t%-10s\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->name,p->num,p->grade,p->className[0],p->regularScore[0],p->experimentalScore[0],p->testScore[0],p->totalScore[0],p->totalScoreAll);
		for(int i=1;i<3;i++)
		{
				printf("\t\t\t\t\t\t\t\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->className[i],p->regularScore[i],p->experimentalScore[i],p->testScore[i],p->totalScore[i]);
		}
	}
	printf("\n\n\n\t\t");
	fclose(fp); 
} 
void gai(struct stud_node* head,int n)//�޸�ѧ����Ϣ�ĺ��� 
{
	FILE *fp;
	if((fp=fopen("score.dat","wb"))==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	int score;
	char num[20],name[20],className[20],grade[20];
	double regularScore,experimentalScore,testScore,totalScore;
	struct stud_node *p;
	p=(struct stud_node *)malloc(sizeof(struct stud_node));
	p=head;
	//������Ӧ�Ľڵ� 
	for(int i=0;i<n-1&&p!=NULL;i++)
	{
		p=p->next;
	}
	//������ʾ������ص���Ϣ 
	if(p!=NULL) 
	{
		printf("\n\t\t\t\t�����������ѧ����ѧ��(1800000000-1899999999):");
		scanf("%s",&num);
		while(!(strcmp(num,"180000000")>=0&&strcmp(num,"1899999999")<=0))
		{
			printf("\t\t\t\t������������������ѧ����ѧ��(1800000000-1899999999):");
			scanf("%s",&num);
		}
		printf("\t\t\t\t�����������ѧ���İ༶��(18000000-18999999):");
		scanf("%s",grade);
		while(!(strcmp(grade,"1800000")>=0&&strcmp(grade,"18999999")<=0))
		{
			printf("\t\t\t\t������������������ѧ���İ༶��(18000000-18999999):");
			scanf("%s",grade);
		}
		printf("\t\t\t\tѧ��Ϊ%sѧ��������:",num);
		scanf("%s",name);
		p->totalScoreAll=0;
		for(int i=0;i<3;i++)
		{
			printf("\t\t\t\tѧ��Ϊ%sѧ���Ŀγ���:",num);
			scanf("%s",className);
			printf("\t\t\t\tѧ��Ϊ%sѧ����ƽʱ�ɼ�(0-100):",num);
			scanf("%lf",&regularScore);
			while(!(regularScore>=0&&regularScore<=100)){
				printf("\t\t\t\t������������������ѧ����ƽʱ�ɼ�(0-100):");
				scanf("%lf",&regularScore);
			}
			printf("\t\t\t\tѧ��Ϊ%sѧ����ʵ��ɼ�(0-100):",num);
			scanf("%lf",&experimentalScore);
			
			while(!(experimentalScore>=0&&experimentalScore<=100)){
				printf("\t\t\t\t������������������ѧ����ʵ��ɼ�(0-100):");
				scanf("%lf",&experimentalScore);
			}
			printf("\t\t\t\tѧ��Ϊ%sѧ���Ĳ��Գɼ�(0-100):",num);
			scanf("%lf",&testScore);
			while(!(testScore>=0&&testScore<=100)){
				printf("\t\t\t\t������������������ѧ���Ĳ��Գɼ�(0-100):");
				scanf("%lf",&testScore);
			}
			p->totalScore[i]=regularScore*0.2+experimentalScore*0.2+testScore*0.6;
			strcpy(p->grade,grade); 
			strcpy(p->className[i],className);
			p->regularScore[i]=regularScore;
			p->experimentalScore[i]=experimentalScore;
			p->testScore[i]=testScore;
			p->totalScoreAll+=p->totalScore[i];
		}
		strcpy(p->num,num); 
		strcpy(p->name,name);  
		//�����Ӧ�ĸ�ʽ�����ѧ������Ϣ 
		printf("\n\n\t\t����\t\tѧ��\t\t�༶\t\t�γ���\t\tƽʱ�ɼ�\t\tʵ��ɼ�\t\t���Գɼ�\t\t�����ɼ�\t\t�ܳɼ�");
		printf("\n    --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		for(p=head;p!= NULL;p=p->next)
		{
			printf("\n\t\t%-10s\t%-10s\t%-10s\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->name,p->num,p->grade,p->className[0],p->regularScore[0],p->experimentalScore[0],p->testScore[0],p->totalScore[0],p->totalScoreAll);
			for(int i=1;i<3;i++)
			{
					printf("\t\t\t\t\t\t\t\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->className[i],p->regularScore[i],p->experimentalScore[i],p->testScore[i],p->totalScore[i]);
			}
		}
		printf("\n\n\n\t\t");
	} 
	else
	{
		printf("\t\t\t\t���޸ĵ�ѧ����Ϣ������");
		//�����Ӧ�ĸ�ʽ�����ѧ������Ϣ 
		printf("\n\n\t\t����\t\tѧ��\t\t�༶\t\t�γ���\t\tƽʱ�ɼ�\t\tʵ��ɼ�\t\t���Գɼ�\t\t�����ɼ�\t\t�ܳɼ�");
		printf("\n    --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		for(p=head;fwrite(p,sizeof(struct stud_node),1,fp),p!= NULL;p=p->next)
		{
			printf("\n\t\t%-10s\t%-10s\t%-10s\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->name,p->num,p->grade,p->className[0],p->regularScore[0],p->experimentalScore[0],p->testScore[0],p->totalScore[0],p->totalScoreAll);
			for(int i=1;i<3;i++)
			{
					printf("\t\t\t\t\t\t\t\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->className[i],p->regularScore[i],p->experimentalScore[i],p->testScore[i],p->totalScore[i]);
			}
		}
		printf("\n\n\n\t\t");
	}
	fclose(fp);
} 
void testScoreSort(struct stud_node* &head)//�����ܲ��Գɼ����� 
{
	struct stud_node *q,*p,*m,*t;
	int j=1;
	p=(struct stud_node *)malloc(sizeof(struct stud_node));
	t=(struct stud_node *)malloc(sizeof(struct stud_node));
	q=(struct stud_node *)malloc(sizeof(struct stud_node));
	m=(struct stud_node *)malloc(sizeof(struct stud_node));
	p=q=head;
	//���� 
	for(;p!=NULL;p=p->next)
	{
		t=p;
		for(q=p->next;q!=NULL;q=q->next)
		{
			if(t->testScore[0]+t->testScore[1]+t->testScore[2]+t->testScore[3]+t->testScore[4]<q->testScore[0]+q->testScore[1]+q->testScore[2]+q->testScore[3]+q->testScore[4])
			{
				t=q;
			} 
		}
		if(t!=p)
		{
			strcpy(m->name,t->name);
			strcpy(t->name,p->name);
			strcpy(p->name,m->name);
			strcpy(m->num,t->num);
			strcpy(t->num,p->num);
			strcpy(p->num,m->num);
			strcpy(m->grade,t->grade);
			strcpy(t->grade,p->grade);
			strcpy(p->grade,m->grade); 
			for(int i=0;i<3;i++)
			{
				m->regularScore[i]=t->regularScore[i];
				t->regularScore[i]=p->regularScore[i];
				p->regularScore[i]=m->regularScore[i];
				m->experimentalScore[i]=t->experimentalScore[i];
				t->experimentalScore[i]=p->experimentalScore[i];
				p->experimentalScore[i]=m->experimentalScore[i];
				m->testScore[i]=t->testScore[i];
				t->testScore[i]=p->testScore[i];
				p->testScore[i]=m->testScore[i];
				m->totalScore[i]=t->totalScore[i];
				t->totalScore[i]=p->totalScore[i];
				p->totalScore[i]=m->totalScore[i];
				strcpy(m->className[i],t->className[i]);
				strcpy(t->className[i],p->className[i]);
				strcpy(p->className[i],m->className[i]);
				m->totalScoreAll=t->totalScoreAll;
				t->totalScoreAll=p->totalScoreAll;
				p->totalScoreAll=m->totalScoreAll;
			}
		}
	}
	//�����Ӧ�ĸ�ʽ�����ѧ������Ϣ 
	printf("\n\n\t\t����\t\tѧ��\t\t�༶\t\t�γ���\t\tƽʱ�ɼ�\t\tʵ��ɼ�\t\t���Գɼ�\t\t�����ɼ�\t\t�ܳɼ�");
	printf("\n    --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	for(p=head;p!= NULL;p=p->next)
	{
		printf("\n\t\t%-10s\t%-10s\t%-10s\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->name,p->num,p->grade,p->className[0],p->regularScore[0],p->experimentalScore[0],p->testScore[0],p->totalScore[0],p->totalScoreAll);
		for(int k=1;k<3;k++)
		{
			printf("\t\t\t\t\t\t\t\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->className[k],p->regularScore[k],p->experimentalScore[k],p->testScore[k],p->totalScore[k]);
		}
		j++;
	}
	printf("\n\n\n\t\t"); 
}
void totalScoreSort(struct stud_node* &head)//�����ܳɼ����� 
{
	int i=1;
	struct stud_node *q,*p,*m,*t;
	p=(struct stud_node *)malloc(sizeof(struct stud_node));
	t=(struct stud_node *)malloc(sizeof(struct stud_node));
	q=(struct stud_node *)malloc(sizeof(struct stud_node));
	m=(struct stud_node *)malloc(sizeof(struct stud_node));
	p=q=head;
	//���� 
	for(;p!=NULL;p=p->next)
	{
		t=p;
		for(q=p->next;q!=NULL;q=q->next)
		{
			if(t->totalScoreAll<q->totalScoreAll)
			{
				t=q;
			}
		}
		if(t!=p)
		{
			strcpy(m->name,t->name);
			strcpy(t->name,p->name);
			strcpy(p->name,m->name);
			strcpy(m->num,t->num);
			strcpy(t->num,p->num);
			strcpy(p->num,m->num);
			strcpy(m->grade,t->grade);
			strcpy(t->grade,p->grade);
			strcpy(p->grade,m->grade);
			for(int j=0;j<3;j++)
			{
				m->regularScore[j]=t->regularScore[j];
				t->regularScore[j]=p->regularScore[j];
				p->regularScore[j]=m->regularScore[j];
				m->experimentalScore[j]=t->experimentalScore[j];
				t->experimentalScore[j]=p->experimentalScore[j];
				p->experimentalScore[j]=m->experimentalScore[j];
				m->testScore[j]=t->testScore[j];
				t->testScore[j]=p->testScore[j];
				p->testScore[j]=m->testScore[j];
				strcpy(m->className[j],t->className[j]);
				strcpy(t->className[j],p->className[j]);
				strcpy(p->className[j],m->className[j]);
				m->totalScore[j]=t->totalScore[j];
				t->totalScore[j]=p->totalScore[j];
				p->totalScore[j]=m->totalScore[j];
			}
		}
	}
	//�����Ӧ�ĸ�ʽ�����ѧ������Ϣ 
	printf("\n\n\t\t����\t\tѧ��\t\t�༶\t\t�γ���\t\tƽʱ�ɼ�\t\tʵ��ɼ�\t\t���Գɼ�\t\t�����ɼ�\t\t�ܳɼ�");
	printf("\n    --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	for(p=head;p!= NULL;p=p->next)
	{
		printf("\n\t\t%-10s\t%-10s\t%-10s\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->name,p->num,p->grade,p->className[0],p->regularScore[0],p->experimentalScore[0],p->testScore[0],p->totalScore[0],p->totalScoreAll);
		for(int k=1;k<3;k++)
		{
			printf("\t\t\t\t\t\t\t\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",p->className[k],p->regularScore[k],p->experimentalScore[k],p->testScore[k],p->totalScore[k]);
		}
		i++;
	}
	printf("\n\n\n\t\t"); 
}
void maxScore(struct stud_node* head,char n[])//�����ؿγ����ֵ�ĺ��� 
{
	struct stud_node *q,*p;
	p=(struct stud_node *)malloc(sizeof(struct stud_node));
	q=(struct stud_node *)malloc(sizeof(struct stud_node));
	int t=-1;
	p=head;
	//ѭ�������õ����ֵ 
	for(;p!=NULL;p=p->next)
	{
		for(int k=0;k<3;k++)
		{
			if(strcmp(p->className[k],n)==0)
			{
				if(t==-1)
				{
					strcpy(q->grade,p->grade);
					strcpy(q->name,p->name);
					strcpy(q->num,p->num);
					for(int m=0;m<3;m++)
					{
						strcpy(q->className[m],p->className[m]);
						q->regularScore[m]=p->regularScore[m];
						q->experimentalScore[m]=p->experimentalScore[m];
						q->testScore[m]=p->testScore[m];
						q->totalScore[m]=p->totalScore[m];
					}
					t=1;
				}
				else
				{
					if(q->totalScore[k]<p->totalScore[k])
					{
						strcpy(q->name,p->name);
						strcpy(q->num,p->num);
						strcpy(q->grade,p->grade);
						q->totalScoreAll=p->totalScoreAll;
						for(int m=0;m<3;m++)
						{
							strcpy(q->className[m],p->className[m]);
							q->regularScore[m]=p->regularScore[m];
							q->experimentalScore[m]=p->experimentalScore[m];
							q->testScore[m]=p->testScore[m];
							q->totalScore[m]=p->totalScore[m];
						}
					}
				}
			}
		}
	}
	//�����ؿγ̵����ֵ����Ϣ 
	if(t==-1)
	{
		printf("\n\n\n\t\t���ֵ\t\t�ÿγ̲�����\n");
	}
	else
	{
		printf("\n\n\t\t����\t\tѧ��\t\t�༶\t\t�γ���\t\tƽʱ�ɼ�\t\tʵ��ɼ�\t\t���Գɼ�\t\t�����ɼ�\t\t�ܳɼ�");
		printf("\n    --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("\n���ֵ\t\t%-10s\t%-10s\t%-10s\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",q->name,q->num,q->grade,q->className[0],q->regularScore[0],q->experimentalScore[0],q->testScore[0],q->totalScore[0],q->totalScoreAll);
		for(int k=1;k<3;k++)
		{
			printf("\t\t\t\t\t\t\t\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",q->className[k],q->regularScore[k],q->experimentalScore[k],q->testScore[k],q->totalScore[k]);
		}
	}
}
void minScore(struct stud_node* head,char n[])//�����ؿγ̵���Ϣ 
{
	struct stud_node *q,*p;
	p=(struct stud_node *)malloc(sizeof(struct stud_node));
	q=(struct stud_node *)malloc(sizeof(struct stud_node));
	int t=-1;
	p=head;
	//ѭ�������õ����ֵ 
	for(;p!=NULL;p=p->next)
	{
		for(int k=0;k<3;k++)
		{
			if(strcmp(p->className[k],n)==0)
			{
				if(t==-1)
				{
					q->totalScoreAll=p->totalScoreAll;
					strcpy(q->grade,p->grade);
					strcpy(q->name,p->name);
					strcpy(q->num,p->num);
					for(int m=0;m<5;m++)
					{
						strcpy(q->className[m],p->className[m]);
						q->regularScore[m]=p->regularScore[m];
						q->experimentalScore[m]=p->experimentalScore[m];
						q->testScore[m]=p->testScore[m];
						q->totalScore[m]=p->totalScore[m];
					}
					t=1;
				}
				else
				{
					if(q->totalScore[k]>p->totalScore[k])
					{
						strcpy(q->name,p->name);
						strcpy(q->num,p->num);
						for(int m=0;m<5;m++)
						{
							strcpy(q->className[m],p->className[m]);
							q->regularScore[m]=p->regularScore[m];
							q->experimentalScore[m]=p->experimentalScore[m];
							q->testScore[m]=p->testScore[m];
							q->totalScore[m]=p->totalScore[m];
						}
					}
				}
			}
		}
	}
	//�����ؿγ̵����ֵ����Ϣ 
	if(t==-1)
	{
		printf("\t\t���ֵ\t\t�ÿγ̲�����\n\n\n\t\t");
	}
	else
	{
		printf("��Сֵ\t\t%-10s\t%-10s\t%-10s\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",q->name,q->num,q->grade,q->className[0],q->regularScore[0],q->experimentalScore[0],q->testScore[0],q->totalScore[0],q->totalScoreAll);
		for(int k=1;k<3;k++)
		{
			printf("\t\t\t\t\t\t\t\t%-10s\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\t\t%-10.1lf\n",q->className[k],q->regularScore[k],q->experimentalScore[k],q->testScore[k],q->totalScore[k]);
		}
		printf("\n\n\n\t\t"); 
	}
}
void outStandingRate(struct stud_node* &head,char n[])//�����ؿγ����ֵ����Ϣ 
{
	int i=0,j=0;
	double t;
	struct stud_node* p;
	p=(struct stud_node *)malloc(sizeof(struct stud_node));
	p=head;
	//ѭ�����������õ���ؿγ������ѧ������ 
	for(;p!=NULL;p=p->next)
	{
		for(int m=0;m<3;m++)
		{
			if(strcmp(p->className[m],n)==0)
			{
				if(p->totalScore[m]>=90)
				{
					i++;
				}
				j++;
			}
		}
	}
	//�����صĽ�� 
	if(i==0&&j==0)
	{
		printf("\n\n\n\t\t\t\t�ÿγ̲�����");
	}
	else
	{
		t=100*i/j*1.0;
		printf("\n\n\n\t\t\t\t%s��������:%.2lf%\n",n,t);
	}
}
void failRate(struct stud_node* &head,char n[])//�����ؿγ̵Ĳ������ʵ������Ϣ 
{
	int i=0,j=0;
	double t;
	struct stud_node* p;
	p=(struct stud_node *)malloc(sizeof(struct stud_node));
	p=head;
	//ѭ�����������ۼƲ������ѧ������ 
	for(;p!=NULL;p=p->next)
	{
		for(int m=0;m<3;m++)
		{
			if(strcmp(p->className[m],n)==0)
			{
				if(p->totalScore[m]<=60)
				{
					i++;
				}
				j++;
			}
		}
	}
	//����������� 
	if(i==0&&j==0)
	{
		printf("\n\t\t\t\t�ÿγ̲�����");
		printf("\n\n\n\t\t"); 
	}  
	else
	{
		t=100*i/j*1.0;
		printf("\t\t\t\t%s�Ĳ�������:%.2lf%\n",n,t); 
		printf("\n\n\n\t\t"); 
	}
}
int main()
{ 
	FILE *fp;
	if((fp=fopen("score.dat","rb"))==NULL)//���ļ� 
	{
		printf("cannot open file\n");
		exit(0);
	}
	struct stud_node *head,*tail,*p;
	int i=0,flag3=1,flag1,m;
	char n[20]; 
	int size = sizeof(struct  stud_node); 
	head=tail=NULL; 
	printf("\n\n                                                                                    Welcome your envoy\n");
	printf("                 ***************************************************                 ѧ����Ϣ����ϵͳ                 ***************************************************                 \n\n");
	printf("    **************************************************************************************************************************************************************************************\n\n\n");
	fread(&stud[i],sizeof(struct stud_node),1,fp);
	while(!feof(fp))//��ȡ�ļ�����ӡ 
	{
		p=(struct stud_node*)malloc(size); 
		strcpy(p->num,stud[i].num); 
		strcpy(p->name,stud[i].name); 
		strcpy(p->className[0],stud[i].className[0]);
		strcpy(p->className[1],stud[i].className[1]);
		strcpy(p->className[2],stud[i].className[2]);
		strcpy(p->grade,stud[i].grade);
		p->regularScore[0]=stud[i].regularScore[0];
		p->regularScore[1]=stud[i].regularScore[1];
		p->regularScore[2]=stud[i].regularScore[2];
		p->experimentalScore[0]=stud[i].experimentalScore[0];
		p->experimentalScore[1]=stud[i].experimentalScore[1];
		p->experimentalScore[2]=stud[i].experimentalScore[2];
		p->testScore[0]=stud[i].testScore[0];
		p->testScore[1]=stud[i].testScore[1];
		p->testScore[2]=stud[i].testScore[2];
		p->totalScore[0]=stud[i].totalScore[0];
		p->totalScore[1]=stud[i].totalScore[1];
		p->totalScore[2]=stud[i].totalScore[2];
		p->totalScoreAll=stud[i].totalScoreAll;
		p->next=NULL; 
		i++;
		if(i==1)
			head=tail=p;
		else
		{
			tail->next=p;
			tail=p;
		 } 
		 fread(&stud[i],sizeof(struct stud_node),1,fp);
	} 
	//�䴦�˵��� 
	printf("\n    **************************************************************************************************************************************************************************************\n");
	printf("\t\t�˵���\n");
	printf("\n\t\t\t\t[0].��ʾȫ��\t\t\t[1].��ѯ(ͨ��ѧ��)\t\t\t[2].��ѯ(ͨ������)\t\t\t[3].��ѯ(ͨ���γ�����)\n"); 
	printf("\n\t\t\t\t[4].����\t\t\t[5].ɾ��\t\t\t    [6].�޸�ѧ����Ϣ\t\t\t[7].����(ͨ�����Գɼ�)\n");
	printf("\n\t\t\t\t[8].����(ͨ�������ɼ�)\t\t[9].�γ����ֵ/��Сֵ\t\t\t[10].�γ�������/��������\t\t��������ֹͣ");
	printf("\n    **************************************************************************************************************************************************************************************\n");
	printf("\t\t�˵���������:");
	scanf("%d",&flag1);
	while(flag3)
	{
		switch(flag1)//ѡ����Ӧ����ʾ���������Ӧ���� 
		{
			case 1:
				printf("\t\t���������ѧ����ѧ�ţ�1800300000-1899999999��:");
				scanf("%s",&n);
				break;
			case 2:
				printf("\t\t���������ѧ��������:");
				scanf("%s",&n);
				break;
			case 3:
				printf("\t\t��������ҵĿγ���:");
				scanf("%s",&n);
				break;
			case 4:
				printf("\t\t���������ѧ����λ��:");
				scanf("%d",&m);
				break;
			case 5:
				printf("\t\t������ɾ��ѧ����λ��:");
				scanf("%d",&m);
				break;
			case 6:
				printf("\t\t�������޸�ѧ����λ��:");
				scanf("%d",&m);
				break;
			case 9:
			case 10:
				printf("\t\t������γ̵�����:");
				scanf("%s",&n);
				break;
			default:
				break;
		} 
		switch(flag1)//ѡ��ִ�еĺ��� 
		{
			case 0:displayAll(head);break;
			case 1:search1(head,n);break;
			case 2:search2(head,n);break;
			case 3:search3(head,n);break;
			case 4:insert(head,m);break;
			case 5:deleteNode(head,m);break;
			case 6:gai(head,m);break;
			case 7:testScoreSort(head);break;
			case 8:totalScoreSort(head);break;
			case 9:maxScore(head,n);minScore(head,n);break;
			case 10:outStandingRate(head,n);failRate(head,n);break;
			default:flag3=0; 
		}
		if(flag3!=0)//����˵��� 
		{
			system("pause");
			system("cls");
			printf("\n\n                                                                                    Welcome your envoy\n");
			printf("                 ***************************************************                 ѧ����Ϣ����ϵͳ                 ***************************************************                 \n\n");
			printf("    **************************************************************************************************************************************************************************************\n\n\n");
			printf("\n    **************************************************************************************************************************************************************************************\n");
			printf("\t\t�˵���\n");
			printf("\n\t\t\t\t[0].��ʾȫ��\t\t\t[1].��ѯ(ͨ��ѧ��)\t\t\t[2].��ѯ(ͨ������)\t\t\t[3].��ѯ(ͨ���γ�����)\n"); 
			printf("\n\t\t\t\t[4].����\t\t\t[5].ɾ��\t\t\t        [6].�޸�ѧ����Ϣ\t\t\t[7].����(ͨ�����Գɼ�)\n");
			printf("\n\t\t\t\t[8].����(ͨ�������ɼ�)\t\t[9].�γ����ֵ/��Сֵ\t\t\t[10].�γ�������/��������\t\t��������ֹͣ");
			printf("\n    **************************************************************************************************************************************************************************************\n");
			printf("\t\t�˵���������:");
			scanf("%d",&flag1);//������ѡ�Ĳ˵�ѡ�� 
		}
	}
	fclose(fp);
	return 0;
}
