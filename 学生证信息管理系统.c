#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
struct hero
{
	char number[30];  //��� 
	char title[20];  //�ƺ� 
	char name[20];    //���� 
	char skill[100];   //���� 
	char area[30];     //���� 
	struct 	hero *next;	
}; 

struct user
{
	char usename[30];
	char number[30];
}one;

void LOL();                               //LOLͼ�� 
struct hero *CreatList(); 					//ͷָ���ʼ�� 
void Creat_end(struct hero *head);			//β�巨�������� 
void Creat_head(struct hero *head);			//ͷ�巨��������	 
void Delete_1(struct hero *head);			//���ձ��ɾ�� 
void Delete_2(struct hero *head);			//���ճƺ�ɾ�� 
void Delete_3(struct hero *head);			//��������ɾ�� 
void remake_1(struct hero *head);			//���ձ���޸���Ϣ 
void remake_2(struct hero *head);			//���ճƺ��޸���Ϣ 
void remake_3(struct hero *head);			//���������޸���Ϣ 
void search_1(struct hero *head);			//���ձ�Ų�ѯ 
void search_2(struct hero *head);			//���ճƺŲ�ѯ 
void search_3(struct hero *head);			//����������ѯ	 
void insert_head(struct hero *head);		//��ͷ������ 
void insert_end(struct hero *head);			//��β������ 
void insert(struct hero *head);				//������λ�ò��� 
void sort_1(struct hero *head);				//���ձ������ 
void sort_2(struct hero *head);				//���ճƺ����� 
void sort_3(struct hero *head);				//������������ 
void print(struct hero *head);				//��ӡ 
void save(struct hero *head);				//�����ļ� 
void read(struct hero *head);				//����ļ�����	 
struct hero *import(struct hero *head);		//�����ļ� 
int iCount(struct hero *head);				//��Ա����ͳ�� 
void menu();								//���˵� 
void interaction();							//ѡ����� 
void registeruser();						//ע�� 
void login();								//��¼ 
void ID();									//��¼ʱ����� 
void help();								//������� 

struct hero *CreatList()     //��ʼ������ 
{
	struct hero *head;
	head = (struct hero *)malloc(sizeof(struct hero));
	head->next = NULL;
	return head;
}

void LOL()
{
	printf("\t\t\t\t\t----------------------------------------------\n");
	printf("\t\t\t\t\t----**-----------*************---**-----------\n");
	printf("\t\t\t\t\t----**-----------*-----------*---**-----------\n");
	printf("\t\t\t\t\t----**-----------*-----------*---**-----------\n");
	printf("\t\t\t\t\t----**-----------*-----------*---**-----------\n");
	printf("\t\t\t\t\t----**-----------*-----------*---**-----------\n");
	printf("\t\t\t\t\t----**-----------*-----------*---**-----------\n");
	printf("\t\t\t\t\t----**-----------*-----------*---**-----------\n");
	printf("\t\t\t\t\t----***********--*-----------*---***********--\n");
	printf("\t\t\t\t\t----***********--*************---***********--\n");
	printf("\t\t\t\t\t----------------------------------------------\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
}

void Creat_end(struct hero *head)   //β�巨�������� 
{
	LOL();
	int num;
	struct hero *r,*s;
	r = head;
	while(1)
	{	
		printf("\t\t\t\t\t������ѡ�\n");
		printf("\t\t\t\t\t1.����¼��\n");
		printf("\t\t\t\t\t2.�˳�\n"); 
		printf("\t\t\t\t\t");
		scanf("%d",&num);
		printf("\n");
		if(num == 2)
		{
			break;
		}
		else if(num != 1 )
		{
			printf("\t\t\t\t\t��������ȷ��ѡ��\n"); 
			system("PAUSE");
			break;
		}
		s = (struct hero *)malloc(sizeof(struct hero));
		printf("\t\t\t\t\t�������Ӣ�۵ı��:\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->number);
		printf("\n");
		printf("\t\t\t\t\t�������Ӣ�۵ĳƺ�:\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->title );
		printf("\n");
		printf("\t\t\t\t\t�������Ӣ�۵�����:\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->name );
		printf("\n");
		printf("\t\t\t\t\t�������Ӣ�۵Ĵ���:\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->skill );
		printf("\n");
		printf("\t\t\t\t\t�������Ӣ������������\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->area );
		printf("\n");
		printf("\t\t\t\t\t********\n"); 
		//β�巨�������� 
		r->next = s;
		r = s; 		
	 } 
	 s->next = NULL;
}

void Creat_head(struct hero *head)   //ͷ�巨��������  
{
	LOL();
	int num;
	struct hero *s;
	while(1)
	{
		printf("\t\t\t\t\t������ѡ�\n");
		printf("\t\t\t\t\t1.����¼��\n");
		printf("\t\t\t\t\t2.�˳�\n");
		printf("\t\t\t\t\t"); 
		scanf("%d",&num);
		printf("\n");
		if(num == 2)
		{
			break;
		}
		else if(num != 1 )
		{
			printf("��������ȷ��ѡ��\n"); 
			system("PAUSE");
			break; 
		} 
		s = (struct hero *)malloc(sizeof(struct hero));
		printf("\t\t\t\t\t�������Ӣ�۵ı��:\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->number);
		printf("\n");
		printf("\t\t\t\t\t�������Ӣ�۵ĳƺ�:\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->title );
		printf("\n");
		printf("\t\t\t\t\t�������Ӣ�۵�����:\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->name );
		printf("\n");
		printf("\t\t\t\t\t�������Ӣ�۵Ĵ���:\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->skill );
		printf("\n");
		printf("\t\t\t\t\t�������Ӣ������������\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->area );
		printf("\n");
		printf("\t\t\t\t\t********\n");
		//ͷ�巨�������� 
		s->next = head->next ;
		head->next = s;
	}
}

void Delete_1(struct hero *head)   //�����ɾ�� 
{
	LOL();
	struct hero *q,*p;
	char num[30];
	p = head;
	printf("\t\t\t\t\t��������Ҫɾ��Ӣ�۵ı��\n");
	printf("\t\t\t\t\t");
	scanf("%s",&num);
	printf("\n");
	while(p)
	{
		if(strcmp(num,p->next->number ) != 0 && p)
		{
			p = p->next;
		}
		else
		{
			break;
		}
	}
	//��ʱpָ����Ҫɾ���Ľ���ǰһ�����
	if(p == NULL || p->next == NULL)
	{
		printf("\t\t\t\t\t����ȷ������Ҫɾ���ı��\n");
	} 
	 else
	{
		printf("\t\t\t\t\tɾ���ɹ�\n");
		q = p->next;
		p->next = q->next ;
		free(q);
	}
} 

void Delete_2(struct hero *head)  //���ƺ�ɾ�� 
{
	LOL();
	struct hero *q,*p;
	char num[30];
	p = head;
	printf("\t\t\t\t\t��������Ҫɾ��Ӣ�۵ĳƺ�\n");
	printf("\t\t\t\t\t");
	scanf("%s",&num);
	printf("\n");
	while(p)
	{
		if(strcmp(num,p->next->title  ) != 0 && p)
		{
			p = p->next;
		}
		else
		{
			break;
		}
	}
	//��ʱpָ����Ҫɾ���Ľ���ǰһ�����
	if(p == NULL || p->next == NULL)
	{
		printf("\t\t\t\t\t����ȷ������Ҫɾ���ĳƺ�\n");
	} 
	 else
	{
		printf("\t\t\t\t\tɾ���ɹ�\n");
		q = p->next;
		p->next = q->next ;
		free(q);
	}
} 

void Delete_3(struct hero *head)  //������ɾ�� 
{
	LOL();
	struct hero *q,*p;
	char num[30];
	p = head;
	printf("\t\t\t\t\t��������Ҫɾ��Ӣ�۵�����\n");
	printf("\t\t\t\t\t");
	scanf("%s",&num);
	printf("\n");
	while(p)
	{
		if(strcmp(num,p->next->name ) != 0 && p)
		{
			p = p->next;
		}
		else
		{
			break;
		}
	}
	//��ʱpָ����Ҫɾ���Ľ���ǰһ�����
	if(p == NULL || p->next == NULL)
	{
		printf("\t\t\t\t\t����ȷ������Ҫɾ��������\n");
	} 
	 else
	{
		printf("\t\t\t\t\tɾ���ɹ�\n");
		q = p->next;
		p->next = q->next ;
		free(q);
	}
}

void remake_1(struct hero *head)   //���ݱ���޸���Ϣ 
{
	LOL();
	char num[30];
	printf("\t\t\t\t\t��������Ҫ�޸�Ӣ����Ϣ�ı��\n");
	printf("\t\t\t\t\t");
	scanf("%s",&num);
	printf("\n");
	struct hero *temp = head;
	while(temp)
	{
		if(strcmp(num,temp->number) != 0 )
		{
			temp = temp->next;
		}
		else 
		{
			break;
		}
	}
	if(temp == NULL)
	{
		printf("\t\t\t\t\t��������ȷ�ı��\n");
	}
	else
	{
		printf("\t\t\t\t\t****ԭӢ����Ϣ���£�****\n");
		printf("\t\t\t\t\t��ţ�%s\n",temp->number );
		printf("\t\t\t\t\t�ƺţ�%s\n",temp->title );
		printf("\t\t\t\t\t����: %s\n",temp->name );
		printf("\t\t\t\t\t����: %s\n",temp->skill );
		printf("\t\t\t\t\t����: %s\n",temp->area );
		printf("\t\t\t\t\t************************\n"); 
		printf("\t\t\t\t\t��������Ҫ�޸ĵ�Ӣ����Ϣ:\n");
		printf("\t\t\t\t\t���: ");
		scanf("%s",&temp->number );
		printf("\n");  
		printf("\t\t\t\t\t�ƺ�: ");
		scanf("%s",&temp->title );
		printf("\n");
		printf("\t\t\t\t\t����: ");
		scanf("%s",&temp->name );
		printf("\n");
		printf("\t\t\t\t\t����: ");
		scanf("%s",&temp->area );
		printf("\n");
		printf("����:");
		scanf("%s",&temp->skill );
		printf("\n"); 
	}
}

void remake_2(struct hero *head)  //���ݳƺ��޸� 
{
	LOL();
	char num[30];
	printf("\t\t\t\t\t��������Ҫ�޸�Ӣ����Ϣ�ĳƺ�\n");
	printf("\t\t\t\t\t");
	scanf("%s",&num);
	printf("\n");
	struct hero *temp = head;
	while(temp)
	{
		if(strcmp(num,temp->number) != 0 )
		{
			temp = temp->next;
		}
		else 
		{
			break;
		}
	}
	if(temp == NULL)
	{
		printf("\t\t\t\t\t��������ȷ�ĳƺ�\n");
	}
	else
	{
		printf("\t\t\t\t\t****ԭӢ����Ϣ���£�****\n");
		printf("\t\t\t\t\t��ţ�%s\n",temp->number );
		printf("\t\t\t\t\t�ƺţ�%s\n",temp->title );
		printf("\t\t\t\t\t����: %s\n",temp->name );
		printf("\t\t\t\t\t����: %s\n",temp->skill );
		printf("\t\t\t\t\t����: %s\n",temp->area );
		printf("\t\t\t\t\t************************\n"); 
		printf("\t\t\t\t\t��������Ҫ�޸ĵ�Ӣ����Ϣ:\n");
		printf("\t\t\t\t\t���: ");
		scanf("%s",&temp->number );
		printf("\n");  
		printf("\t\t\t\t\t�ƺ�: ");
		scanf("%s",&temp->title );
		printf("\n");
		printf("\t\t\t\t\t����: ");
		scanf("%s",&temp->name );
		printf("\n");
		printf("\t\t\t\t\t����: ");
		scanf("%s",&temp->area );
		printf("\n");
		printf("\t\t\t\t\t����: ");
		scanf("%s",&temp->skill );
		printf("\n"); 
	}
}

void remake_3(struct hero *head)   //���������޸� 
{
	LOL();
	char num[30];
	printf("\t\t\t\t\t��������Ҫ�޸�Ӣ����Ϣ������\n");
	printf("\t\t\t\t\t");
	scanf("%s",&num);
	printf("\n");
	struct hero *temp = head;
	while(temp)
	{
		if(strcmp(num,temp->number) != 0 )
		{
			temp = temp->next;
		}
		else 
		{
			break;
		}
	}
	if(temp == NULL)
	{
		printf("\t\t\t\t\t��������ȷ������\n");
	}
	else
	{
		printf("\t\t\t\t\t****ԭӢ����Ϣ���£�****\n");
		printf("\t\t\t\t\t��ţ�%s\n",temp->number );
		printf("\t\t\t\t\t�ƺţ�%s\n",temp->title );
		printf("\t\t\t\t\t����: %s\n",temp->name );
		printf("\t\t\t\t\t����: %s\n",temp->skill );
		printf("\t\t\t\t\t����: %s\n",temp->area );
		printf("\t\t\t\t\t************************\n"); 
		printf("\t\t\t\t\t��������Ҫ�޸ĵ�Ӣ����Ϣ:\n");
		printf("\t\t\t\t\t���: ");
		scanf("%s",&temp->number );
		printf("\n");  
		printf("\t\t\t\t\t�ƺ�: ");
		scanf("%s",&temp->title );
		printf("\n");
		printf("\t\t\t\t\t����: ");
		scanf("%s",&temp->name );
		printf("\n");
		printf("\t\t\t\t\t����: ");
		scanf("%s",&temp->area );
		printf("\n");
		printf("\t\t\t\t\t����: ");
		scanf("%s",&temp->skill );
		printf("\n");  
	}
}

void search_1(struct hero *head)    //���ձ�Ų��� 
{
	LOL();
	char num[30];
	struct hero *temp = head;
	printf("\t\t\t\t\t��������Ҫ��ѯ�ı��:\n");
	printf("\t\t\t\t\t");
	scanf("%s",&num);
	printf("\n");
	while(temp)
	{
		if(strcmp(num,temp->number) != 0 )
		{
			temp = temp->next;
		}
		else 
		{
			break;
		}
	}
	if(temp == NULL)
	{
		printf("\t\t\t\t\t��������ȷ�ı��\n");
	}
	else
	{
	printf("\t\t\t\t\t****��Ӣ����Ϣ���£�****\n");
	printf("\t\t\t\t\t��ţ�%s\n",temp->number );
	printf("\t\t\t\t\t�ƺţ�%s\n",temp->title );
	printf("\t\t\t\t\t����: %s\n",temp->name );
	printf("\t\t\t\t\t����: %s\n",temp->skill );
	printf("\t\t\t\t\t����: %s\n",temp->area );
	printf("\t\t\t\t\t************************\n"); 
	}
}

void search_2(struct hero *head)  //���ճƺŲ��� 
{
	LOL();
	char num[30];
	struct hero *temp = head;
	printf("\t\t\t\t\t��������Ҫ��ѯ�ĳƺ�:\n");
	printf("\t\t\t\t\t");
	scanf("%s",&num);
	printf("\n");
	while(temp)
	{
		if(strcmp(num,temp->title ) != 0 )
		{
			temp = temp->next;
		}
		else 
		{
			break;
		}
	}
	if(temp == NULL)
	{
		printf("\t\t\t\t\t��������ȷ�ĳƺ�\n");
	}
	else
	{
	printf("\t\t\t\t\t****��Ӣ����Ϣ���£�****\n");
	printf("\t\t\t\t\t��ţ�%s\n",temp->number );
	printf("\t\t\t\t\t�ƺţ�%s\n",temp->title );
	printf("\t\t\t\t\t����: %s\n",temp->name );
	printf("\t\t\t\t\t����: %s\n",temp->skill );
	printf("\t\t\t\t\t����: %s\n",temp->area );
	printf("\t\t\t\t\t************************\n"); 
	}
}

void search_3(struct hero *head)   //������������ 
{
	LOL();
	char num[30];
	struct hero *temp = head;
	printf("\t\t\t\t\t��������Ҫ��ѯ������:\n");
	printf("\t\t\t\t\t");
	scanf("%s",&num);
	printf("\n");
	while(temp)
	{
		if(strcmp(num,temp->name ) != 0 )
		{
			temp = temp->next;
		}
		else 
		{
			break;
		}
	}
	if(temp == NULL)
	{
		printf("\t\t\t\t\t��������ȷ������\n");
	}
	else
	{
	printf("\t\t\t\t\t****��Ӣ����Ϣ���£�****\n");
	printf("\t\t\t\t\t��ţ�%s\n",temp->number );
	printf("\t\t\t\t\t�ƺţ�%s\n",temp->title );
	printf("\t\t\t\t\t����: %s\n",temp->name );
	printf("\t\t\t\t\t����: %s\n",temp->skill );
	printf("\t\t\t\t\t����: %s\n",temp->area );
	printf("\t\t\t\t\t************************\n"); 
	}
}

void insert_head(struct hero *head)  //ͷ������ 
{
	LOL();
	struct hero *s;
	printf("\t\t\t\t\t��������Ҫ����Ӣ�۵���Ϣ\n");
	s = (struct hero *)malloc(sizeof(struct hero));
	printf("\t\t\t\t\t������Ӣ�۵ı�ţ�\n");
	printf("\t\t\t\t\t");
	scanf("%s",&s->number );
	printf("\n");
	printf("\t\t\t\t\t������Ӣ�۵ĳƺ�: \n");
	printf("\t\t\t\t\t");
	scanf("%s",&s->title );
	printf("\n");
	printf("\t\t\t\t\t�������Ӣ�۵�����: \n");
	printf("\t\t\t\t\t");
	scanf("%s",&s->name );
	printf("\n");
	printf("\t\t\t\t\t�������Ӣ�۵Ĵ���: \n");
	printf("\t\t\t\t\t");
	scanf("%s",&s->skill );
	printf("\n");
	printf("\t\t\t\t\t�������Ӣ������������\n");
	printf("\t\t\t\t\t");
	scanf("%s",&s->area );
	printf("\n");
	//
	s->next = head->next;
	head->next = s; 
} 

void insert_end(struct hero *head)   //β������ 
{
	LOL();
	struct hero *r,*s;
	r = head;
	int i = 0;
	while(r->next && r)
	{
		r = r->next ;
		i++;
	}
	if(r)
	{
		s = (struct hero *)malloc(sizeof(struct hero));
		printf("\t\t\t\t\t��������Ҫ����Ӣ�۵���Ϣ\n");
		s = (struct hero *)malloc(sizeof(struct hero));
		printf("\t\t\t\t\t������Ӣ�۵ı�ţ�\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->number );
		printf("\n");
		printf("\t\t\t\t\t������Ӣ�۵ĳƺ�: \n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->title );
		printf("\n");
		printf("\t\t\t\t\t�������Ӣ�۵�����: \n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->name );
		printf("\n");
		printf("\t\t\t\t\t�������Ӣ�۵Ĵ���: \n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->skill );
		printf("\n");
		printf("\t\t\t\t\t�������Ӣ������������\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->area );
		printf("\n");
		//
		r->next = s;
		s->next = NULL;
	}
}

void insert(struct hero *head)  //����λ�ò��� 
{
	LOL();
	int n;
	struct hero *s;
	struct hero *temp = head;
	printf("\t\t\t\t\t��������Ҫ�����λ��: \n");
	printf("\t\t\t\t\t");
	scanf("%d",&n);
	printf("\n");
	if(n == 0)
	{
		printf("\t\t\t\t\t��������ȷ�Ĳ���λ��\n");		
	}
	else
	{
	int i = 0;
	while(temp && i<n-1)
	{
		temp = temp->next ;
		i++;
	}
	if(temp)
	{
		s = (struct hero *)malloc(sizeof(struct hero));
		printf("\t\t\t\t\t��������Ҫ����Ӣ�۵���Ϣ\n");
		s = (struct hero *)malloc(sizeof(struct hero));
		printf("\t\t\t\t\t������Ӣ�۵ı�ţ�\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->number );
		printf("\n");
		printf("\t\t\t\t\t������Ӣ�۵ĳƺ�: \n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->title );
		printf("\n");
		printf("\t\t\t\t\t�������Ӣ�۵�����: \n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->name );
		printf("\n");
		printf("\t\t\t\t\t�������Ӣ�۵Ĵ���: \n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->skill );
		printf("\n");
		printf("\t\t\t\t\t�������Ӣ������������\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->area );
		printf("\n");
		//
		s->next = temp->next ;
		temp->next = s;
	}
	else
	{
		printf("\t\t\t\t\t��������ȷ��λ����Ϣ\n");
	}
	}
}

void sort_1(struct hero *head)  //���ձ������ 
{
	LOL();
	int n;
	printf("\t\t\t\t\t������ѡ�������ǽ�������\n");
	printf("\t\t\t\t\t1.��������\n");
	printf("\t\t\t\t\t2.��������\n");
	printf("\t\t\t\t\t"); 
	scanf("%d",&n);
	printf("\n");
	struct hero *back,*p;
	struct hero temp;
	switch(n)
	{
		case 1:            //�������� 
			back = head->next ;
			p = head->next ;
			while(back != NULL)
			{
				while(p->next != NULL)
				{
					p = p->next ;
					if(strcmp(back->number ,p->number )>0)
					{
						strcpy(temp.number ,back->number );
						strcpy(temp.title ,back->title );
						strcpy(temp.name ,back->name );
						strcpy(temp.area ,back->area );
						strcpy(temp.skill ,back->skill );
						//
						strcpy(back->number ,p->number  );
						strcpy(back->title,p->title  );
						strcpy(back->name ,p->name  );
						strcpy(back->area ,p->area  );
						strcpy(back->skill ,p->skill  );
						//
						strcpy(p->number  ,temp.number  );
						strcpy(p->title,temp.title   );
						strcpy(p->name ,temp.name   );
						strcpy(p->area ,temp.area   );
						strcpy(p->skill ,temp.skill   );
					}
				}
				back = back->next ;
				p = back;
			}
			break;
		case 2:       //�������� 
			back = head->next ;
			p = head->next ;
			while(back != NULL)
			{
				while(p->next != NULL)
				{
					p = p->next ;
					if(strcmp(back->number ,p->number )<0)
					{
						strcpy(temp.number ,back->number );
						strcpy(temp.title ,back->title );
						strcpy(temp.name ,back->name );
						strcpy(temp.area ,back->area );
						strcpy(temp.skill ,back->skill );
						//
						strcpy(back->number ,p->number  );
						strcpy(back->title,p->title  );
						strcpy(back->name ,p->name  );
						strcpy(back->area ,p->area  );
						strcpy(back->skill ,p->skill  );
						//
						strcpy(p->number  ,temp.number  );
						strcpy(p->title,temp.title   );
						strcpy(p->name ,temp.name   );
						strcpy(p->area ,temp.area   );
						strcpy(p->skill ,temp.skill   );
					}
				}
				back = back->next ;
				p = back;
			}
			break;
	}
	
}

void sort_2(struct hero *head)   //���ճƺ����� 
{
	LOL();
	int n;
	printf("\t\t\t\t\t������ѡ�������ǽ�������\n");
	printf("\t\t\t\t\t1.��������\n");
	printf("\t\t\t\t\t2.��������\n"); 
	printf("\t\t\t\t\t");
	scanf("%d",&n);
	printf("\n");
	struct hero *back,*p;
	struct hero temp;
	switch(n)
	{
		case 1:            //�������� 
			back = head->next ;
			p = head->next ;
			while(back != NULL)
			{
				while(p->next != NULL)
				{
					p = p->next ;
					if(strcmp(back->title  ,p->title  )>0)
					{
						strcpy(temp.number ,back->number );
						strcpy(temp.title ,back->title );
						strcpy(temp.name ,back->name );
						strcpy(temp.area ,back->area );
						strcpy(temp.skill ,back->skill );
						//
						strcpy(back->number ,p->number  );
						strcpy(back->title,p->title  );
						strcpy(back->name ,p->name  );
						strcpy(back->area ,p->area  );
						strcpy(back->skill ,p->skill  );
						//
						strcpy(p->number  ,temp.number  );
						strcpy(p->title,temp.title   );
						strcpy(p->name ,temp.name   );
						strcpy(p->area ,temp.area   );
						strcpy(p->skill ,temp.skill   );
					}
				}
				back = back->next ;
				p = back;
			}
			break;
		case 2:       //�������� 
			back = head->next ;
			p = head->next ;
			while(back != NULL)
			{
				while(p->next != NULL)
				{
					p = p->next ;
					if(strcmp(back->title  ,p->title  )<0)
					{
						strcpy(temp.number ,back->number );
						strcpy(temp.title ,back->title );
						strcpy(temp.name ,back->name );
						strcpy(temp.area ,back->area );
						strcpy(temp.skill ,back->skill );
						//
						strcpy(back->number ,p->number  );
						strcpy(back->title,p->title  );
						strcpy(back->name ,p->name  );
						strcpy(back->area ,p->area  );
						strcpy(back->skill ,p->skill  );
						//
						strcpy(p->number  ,temp.number  );
						strcpy(p->title,temp.title   );
						strcpy(p->name ,temp.name   );
						strcpy(p->area ,temp.area   );
						strcpy(p->skill ,temp.skill   );
					}
				}
				back = back->next ;
				p = back;
			}
			break;
	}
	
}

void sort_3(struct hero *head)   //������������ 
{
	LOL();
	int n;
	printf("\t\t\t\t\t������ѡ�������ǽ�������\n");
	printf("\t\t\t\t\t1.��������\n");
	printf("\t\t\t\t\t2.��������\n"); 
	printf("\t\t\t\t\t");
	scanf("%d",&n);
	printf("\n");
	struct hero *back,*p;
	struct hero temp;
	switch(n)
	{
		case 1:            //�������� 
			back = head->next ;
			p = head->next ;
			while(back != NULL)
			{
				while(p->next != NULL)
				{
					p = p->next ;
					if(strcmp(back->name  ,p->name   )>0)  
					{
						strcpy(temp.number ,back->number );
						strcpy(temp.title ,back->title );
						strcpy(temp.name ,back->name );
						strcpy(temp.area ,back->area );
						strcpy(temp.skill ,back->skill );
						//
						strcpy(back->number ,p->number  );
						strcpy(back->title,p->title  );
						strcpy(back->name ,p->name  );
						strcpy(back->area ,p->area  );
						strcpy(back->skill ,p->skill  );
						//
						strcpy(p->number  ,temp.number  );
						strcpy(p->title,temp.title   );
						strcpy(p->name ,temp.name   );
						strcpy(p->area ,temp.area   );
						strcpy(p->skill ,temp.skill   );
					}
				}
				back = back->next ;
				p = back;
			}
			break;
		case 2:       //�������� 
			back = head->next ;
			p = head->next ;
			while(back != NULL)
			{
				while(p->next != NULL)
				{
					p = p->next ;
					if(strcmp(back->name  ,p->name   )<0)
					{
						strcpy(temp.number ,back->number );
						strcpy(temp.title ,back->title );
						strcpy(temp.name ,back->name );
						strcpy(temp.area ,back->area );
						strcpy(temp.skill ,back->skill );
						//
						strcpy(back->number ,p->number  );
						strcpy(back->title,p->title  );
						strcpy(back->name ,p->name  );
						strcpy(back->area ,p->area  );
						strcpy(back->skill ,p->skill  );
						//
						strcpy(p->number  ,temp.number  );
						strcpy(p->title,temp.title   );
						strcpy(p->name ,temp.name   );
						strcpy(p->area ,temp.area   );
						strcpy(p->skill ,temp.skill   );
					}
				}
				back = back->next ;
				p = back;
			}
			break;
	}
	
}
void print(struct hero *head)   //��ӡ���� 
{
	LOL();
	if(head->next == NULL)
	{
		printf("\t\t\t\t\t����¼����Ч��Ϣ\n"); 
	}
	else
	{
	struct hero *temp = head->next ;
	printf("\t\t\t\t\t*********Ӣ����Ϣ��ʾ���£�*********\n"); 
	while(temp)
	{
		printf("\t\t\t\t\t��ţ�%s\n",temp->number );
		printf("\t\t\t\t\t�ƺţ�%s\n",temp->title );
		printf("\t\t\t\t\t����: %s\n",temp->name );
		printf("\t\t\t\t\t����: %s\n",temp->skill );
		printf("\t\t\t\t\t����: %s\n",temp->area );
		printf("\t\t\t\t\t************************\n");
		temp= temp->next ;
	
	}
	}
}

void save(struct hero *head) //�ļ��洢 
{
	system("cls");
	fflush(stdin);
	FILE *fp;
	struct hero *p;
	fp = fopen("xxx.txt","wb");
	for(p=head; p != NULL; p=p->next )
	{
		fwrite(p,sizeof(struct hero),1,fp);
	}
	fclose(fp);
	LOL();
	printf("\t\t\t\t\t�������!!!!\n");
	system("PAUSE");
	system("cls");
	fflush(stdin); 
}

void read(struct hero *head) //�ļ���� 
{
	system("cls");
	fflush(stdin);
	FILE *fp;
	LOL();
	struct hero *t;
	t = (struct hero *)malloc(sizeof(struct hero));
	if((fp = fopen("xxx.txt","r")) == NULL)
	{
		printf("\t\t\t\t\tδ�ҵ��ļ�\n"); 
	}
	else
	{
		printf("\t\t\t\t\t���\t\t�ƺ�\t\t����\t\t����\t\t����\t\t\n");
		int w;
		fseek(fp,0,2);
		w = ftell(fp);
		fseek(fp,0,0);
		while(w != ftell(fp))
		{
			fread(t,sizeof(struct hero),1,fp);
			printf("\t\t\t\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\n",t->number ,t->title ,t->name ,t->area ,t->skill );
			
		}
		fclose(fp);
	}
	system("PAUSE");
	system("cls");
	fflush(stdin);
}

struct hero *import(struct hero *head)  //�ļ����� 
{
	system("cls");
	fflush(stdin);
	FILE *fp;
	if((fp = fopen("xxx.txt","r")) == NULL)
	{
		printf("\t\t\t\t\tδ�ҵ��ļ�\n"); 
	}
	else
	{
		struct hero *p1,*p2;
		p1 = p2 = (struct hero *)malloc(sizeof(struct hero));
		fread(p1,sizeof(struct hero),1,fp);
		int n = iCount(head);
		while( !feof(fp))
		{
			n += 1;
			if(n == 1)
			{
				head = p1;
			}
			else
			{
				p2->next = p1;
			}
			p2 = p1;
			p1 = (struct hero *)malloc(sizeof(struct hero));
			fread(p1,sizeof(struct hero),1,fp); 
		}
		p2->next = NULL;
		fclose(fp);
		LOL();
		printf("\t\t\t\t\t�ļ�����ɹ�\n");
		system("PAUSE");
		system("cls");
		fflush(stdin);
		return  head;
	}
	system("cls");
	fflush(stdin);
	return NULL;
}

int iCount(struct hero *head) //ͳ������ 
{
	struct hero *temp = head->next ;  //pָ��ָ����Ԫ��� 
	int iCount = 0; //������ 
	while(temp != NULL)
	{
		iCount++;
		temp = temp->next;  //�ƶ�pָ�뵽��һ�����ĵ�ַ 
	}
	return iCount;
}

void menu()    //���˵� 
{
	system("cls");
	printf("\t\t\t\t\t*****************************\n");	
	printf("\t\t\t\t\t*****************************\n");	
	printf("\t\t\t\t\t*****************************\n");
	printf("\t\t\t\t\t******LOLӢ����Ϣ����ϵͳ****\n"); 
	printf("\t\t\t\t\t*****************************\n");
	printf("\t\t\t\t\t*****************************\n");	
	printf("\t\t\t\t\t*****************************\n");	
	printf("\t\t\t\t\t********1.¼��Ӣ����Ϣ*******\n");	
	printf("\t\t\t\t\t********2.ɾ��Ӣ����Ϣ*******\n");	
	printf("\t\t\t\t\t********3.�޸�Ӣ����Ϣ*******\n");	
	printf("\t\t\t\t\t********4.����Ӣ����Ϣ*******\n");
	printf("\t\t\t\t\t********5.���Ӣ����Ϣ*******\n");	
	printf("\t\t\t\t\t********6.Ӣ�۱������*******\n");	
	printf("\t\t\t\t\t********7.��ʾӢ����Ϣ*******\n");	
	printf("\t\t\t\t\t********8.�洢Ӣ����Ϣ*******\n");	
	printf("\t\t\t\t\t********9.��ȡӢ����Ϣ*******\n");	
	printf("\t\t\t\t\t*******10.ͳ��Ӣ������*******\n");	
	printf("\t\t\t\t\t*******11.�ļ��ĵ���*********\n");	
	printf("\t\t\t\t\t*******12.�˳�***************\n");
	printf("\t\t\t\t\t*****************************\n");	
	printf("\t\t\t\t\t*****************************\n");
	printf("\t\t\t\t\t*****************************\n");
	printf("\t\t\t\t\t*****************************\n");
	printf("\t\t\t\t\t*****************************\n");
	printf("\t\t\t\t\t*****************************\n");	
}

void interaction()   //ѡ����� 
{
	struct hero *head;
	head = CreatList();
	int n;
	do
	{
		menu();
		int number;
		printf("\t\t\t\t\t��������Ҫѡ�������\n");
		printf("\t\t\t\t\t");
		scanf("%d",&number);
		printf("\n");
		switch(number)
		{
			case 1:
				system("cls");
				LOL();
				printf("\t\t\t\t\t��ѡ��¼��Ӣ����Ϣ�ķ�ʽ\n");
				printf("\t\t\t\t\t1.����¼����Ϣ\n");
				printf("\t\t\t\t\t2.����¼����Ϣ\n"); 
				printf("\t\t\t\t\t3.������һ��\n");
				printf("\t\t\t\t\t");
				scanf("%d",&n);
				printf("\n");
				switch(n)
				{
					case 1:
					system("cls");
					Creat_head(head);
					break;
					case 2:
					system("cls");
					Creat_end(head);
					break;
					case 3:
					break;
				} 
				break;
			case 2:
				system("cls");
				LOL();
				printf("\t\t\t\t\t��ѡ��ɾ��Ӣ����Ϣ�ķ�ʽ\n");
				printf("\t\t\t\t\t1.���ձ��ɾ��Ӣ����Ϣ\n");
				printf("\t\t\t\t\t2.���ճƺ�ɾ��Ӣ����Ϣ\n");
				printf("\t\t\t\t\t3.��������ɾ��Ӣ����Ϣ\n");
				printf("\t\t\t\t\t4.������һ��\n");
				printf("\t\t\t\t\t");
				scanf("%d",&n);
				printf("\n");
				switch(n)
				{
					case 1:
						system("cls");
						Delete_1(head);
						system("PAUSE");
						break;
					case 2:
						system("cls");
						Delete_2(head);
						system("PAUSE");
						break;
					case 3:
						system("cls");
						Delete_3(head);
						system("PAUSE");
						break;
					case 4:
						break;
						
				} 
				break; 
			case 3:
				system("cls");
				LOL();
				printf("\t\t\t\t\t��ѡ���޸�Ӣ����Ϣ�ķ�ʽ\n");
				printf("\t\t\t\t\t1.���ݱ���޸�\n");
				printf("\t\t\t\t\t2.���ݳƺ��޸�\n");
				printf("\t\t\t\t\t3.���������޸�\n");
				printf("\t\t\t\t\t4.������һ��\n");
				printf("\t\t\t\t\t");
				scanf("%d",&n);
				printf("\n");
				switch(n)
				{
					case 1:
						system("cls");
						remake_1(head);
						system("PAUSE");
						break;
					case 2:
						system("cls");
						remake_2(head);
						system("PAUSE");
						break;
					case 3:
						system("cls");
						remake_3(head);
						system("PAUSE");
						break;
					case 4:
						break;
				}
				break; 
			case 4:
				system("cls");
				LOL();
				printf("\t\t\t\t\t��ѡ���ѯӢ����Ϣ�ķ�ʽ\n");
				printf("\t\t\t\t\t1.ѡ���Ų�ѯ\n");
				printf("\t\t\t\t\t2.ѡ��ƺŲ�ѯ\n");
				printf("\t\t\t\t\t3.ѡ��������ѯ\n");
				printf("\t\t\t\t\t4.������һ��\n");
				printf("\t\t\t\t\t");
				scanf("%d",&n);
				printf("\n");
				switch(n)
				{
					case 1:
						system("cls");
						search_1(head);
						system("PAUSE");
						break;
					case 2:
						system("cls");
						search_2(head);
						system("PAUSE");
						break;
					case 3:
						system("cls");
						search_3(head);
						system("PAUSE");
						break;
					case 4:
						break; 
					
				 } 
				 break;
			case 5:
				system("cls");
				LOL();
				printf("\t\t\t\t\t��ѡ�����Ӣ����Ϣ�ķ�ʽ\n");
				printf("\t\t\t\t\t1.��ͷ������\n");
				printf("\t\t\t\t\t2.��β������\n");
				printf("\t\t\t\t\t3.��ѡ��λ�ò���\n");
				printf("\t\t\t\t\t4.������һ��\n");
				printf("\t\t\t\t\t");
				scanf("%d",&n);
				printf("\n");
				switch (n)
				{
					case 1:
						system("cls");
						insert_head(head);
						system("PAUSE"); 
						break;
					case 2:
						system("cls");
						insert_end(head);
						system("PAUSE");
						break; 
					case 3:
						system("cls");
						insert(head);
						system("PAUSE");
						break;
					case 4:
						break;
				}
				break;
			case 6:
				system("cls");
				LOL();
				printf("\t\t\t\t\t�����밴��ʲô����\n");
				printf("\t\t\t\t\t1.���ձ������\n");
				printf("\t\t\t\t\t2.���ճƺ�����\n");
				printf("\t\t\t\t\t3.������������\n");
				printf("\t\t\t\t\t4.������һ��\n");
				printf("\t\t\t\t\t"); 
				scanf("%d",&n);
				printf("\n");
				switch(n)
				{
					case 1:
						system("cls");
						sort_1(head);
						system("PAUSE");
						break;
					case 2:
						system("cls");
						sort_2(head);
						system("PAUSE");
						break;
					case 3:
						system("cls");
						sort_3(head);
						system("PAUSE");
						break;
					case 4:
						break;
				}
				break; 
			case 7:
				system("cls");
				print(head);
			    system("PAUSE");
				break;
			case 8:
				save(head);
				break;
			case 9:
				read(head);
				break;
			case 10:
				printf("\t\t\t\t\tһ����%d����Ա\n",iCount(head));
				system("pause");
				break;
		    case 11:
		    	head = import(head);
		    	break; 
		    case 12:
			exit(0);
			break;
			default:
				printf("\t\t\t\t\t��������ȷ��ѡ��\n");
				system("pause");
				break;
		} 
	}while(1);
}

void registeruser()  //ע�� 
{
	system("cls");
	LOL();
	
	char name[30];
	char num[30];
	char num2[30];
	printf("\t\t\t\t\t----------*-------*--------\n");
	printf("\t\t\t\t\t----------*-------*--------\n");
	printf("\t\t\t\t\t--------   ע��     -------\n");
	printf("\t\t\t\t\t---------------------------\n");
	FILE *fp;
	fp = fopen("�˺�����.txt","ab");
	printf("\t\t\t\t\t--------�������˺�---------\n");
	printf("\t\t\t\t\t�˺ţ�");
	scanf("%s",&name);
	printf("\n");
	strcpy(one.usename ,name);
	printf("\t\t\t\t\t--------����������---------\n");
	printf("\t\t\t\t\t(����ɰ�������,��ĸ,�ַ�) \n");
	printf("\t\t\t\t\t���룺");
	scanf("%s",&num); 
	printf("\n");
	strcpy(one.number ,num);
	printf("\t\t\t\t\t���ٴ�ȷ������\n");
	printf("\t\t\t\t\t���룺");
	scanf("%s",&num2);
	printf("\n");
	int flag = 0;
	while(1)
	{
		if(strcmp(one.number,num2) == 0)
		{
			flag = 1;
			break;
		}
		else
		{
			printf("\t\t\t\t\t�������벻һ��\n");
			printf("\t\t\t\t\t������\n");
			break;
		}
	}
	if(flag == 1)
	{
		fprintf(fp,"�˺�\t����\n");
		fprintf(fp,"%s\t%s\n",one.usename ,one.number );
		printf("\t\t\t\t\tע��ɹ�!!!!\n");
		fclose(fp);
		system("pause");
		system("cls");
	}
}

void login()  //��¼ 
{
	system("cls");
	LOL();
	char name[30];
	char num[30];
	printf("\t\t\t\t\t----------*-------*--------\n");
	printf("\t\t\t\t\t----------*-------*--------\n");
	printf("\t\t\t\t\t--------   ��¼     -------\n");
	printf("\t\t\t\t\t---------------------------\n");
	printf("\t\t\t\t\t�˺�:");
	scanf("%s",&name);
	printf("\n");
	printf("\t\t\t\t\t����:");
	scanf("%s",&num);
	printf("\n");
	FILE *fp;
	fp = fopen("�˺�����.txt","r");
	int flag = 0;
	while(!feof(fp))
	{
		fscanf(fp,"%s %s",&one.usename ,&one.number );
		if((strcmp(name,one.usename ) == 0) && (strcmp(num,one.number ) == 0))
		{
			flag = 1;
			fclose(fp);
			break;
		}
	}
	
	if(flag == 1)
	{
		printf("\t\t\t\t\t��¼�ɹ���\n");
		printf("\t\t\t\t\t�����������LOL��Ϣ����ϵͳ\n");
		system("pause");
		system("cls");
		interaction();
		exit(0);
	}
	else
	{
		printf("\t\t\t\t\t�˺Ż������������\n");
	}
}

void ID()   //��¼ʱ��ѡ����� 
{
	system("cls");
	LOL();
	int n;
	printf("\t\t\t\t\t----------*-----*-----*-----*-------\n");
	printf("\t\t\t\t\t------  ��ӭ����LOL��Ϣ����ϵͳ  ---\n");
	printf("\t\t\t\t\t------------------------------------\n");
	printf("\t\t\t\t\t1.��¼\n");
	printf("\t\t\t\t\t2.ע��\n");
	printf("\t\t\t\t\t3.�˳�\n");
	printf("\t\t\t\t\t");
	scanf("%d",&n);
	printf("\n");
	switch(n)
	{
		case 1:
			login();
			break;
		case 2:
			registeruser();
			break;
		case 3:
			exit(0);
			break;
		default:
			printf("\t\t\t\t\t��������ȷѡ��\n");
			break; 
	} 
}

int main()  //������ 
{
	system("color E9");
	while(1)
	{
		ID();
		system("pause");
		system("cls");
	}
	return 0;
}
