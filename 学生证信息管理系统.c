#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
struct hero
{
	char number[30];  //编号 
	char title[20];  //称号 
	char name[20];    //姓名 
	char skill[100];   //大招 
	char area[30];     //地区 
	struct 	hero *next;	
}; 

struct user
{
	char usename[30];
	char number[30];
}one;

void LOL();                               //LOL图标 
struct hero *CreatList(); 					//头指针初始化 
void Creat_end(struct hero *head);			//尾插法创建链表 
void Creat_head(struct hero *head);			//头插法创建链表	 
void Delete_1(struct hero *head);			//按照编号删除 
void Delete_2(struct hero *head);			//按照称号删除 
void Delete_3(struct hero *head);			//按照姓名删除 
void remake_1(struct hero *head);			//按照编号修改信息 
void remake_2(struct hero *head);			//按照称号修改信息 
void remake_3(struct hero *head);			//按照姓名修改信息 
void search_1(struct hero *head);			//按照编号查询 
void search_2(struct hero *head);			//按照称号查询 
void search_3(struct hero *head);			//按照姓名查询	 
void insert_head(struct hero *head);		//在头部插入 
void insert_end(struct hero *head);			//在尾部插入 
void insert(struct hero *head);				//在任意位置插入 
void sort_1(struct hero *head);				//按照编号排序 
void sort_2(struct hero *head);				//按照称号排序 
void sort_3(struct hero *head);				//按照姓名排序 
void print(struct hero *head);				//打印 
void save(struct hero *head);				//保存文件 
void read(struct hero *head);				//输出文件内容	 
struct hero *import(struct hero *head);		//导入文件 
int iCount(struct hero *head);				//成员人数统计 
void menu();								//主菜单 
void interaction();							//选择面板 
void registeruser();						//注册 
void login();								//登录 
void ID();									//登录时的面板 
void help();								//帮助面板 

struct hero *CreatList()     //初始化链表 
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

void Creat_end(struct hero *head)   //尾插法创建链表 
{
	LOL();
	int num;
	struct hero *r,*s;
	r = head;
	while(1)
	{	
		printf("\t\t\t\t\t请输入选项：\n");
		printf("\t\t\t\t\t1.继续录入\n");
		printf("\t\t\t\t\t2.退出\n"); 
		printf("\t\t\t\t\t");
		scanf("%d",&num);
		printf("\n");
		if(num == 2)
		{
			break;
		}
		else if(num != 1 )
		{
			printf("\t\t\t\t\t请输入正确的选项\n"); 
			system("PAUSE");
			break;
		}
		s = (struct hero *)malloc(sizeof(struct hero));
		printf("\t\t\t\t\t请输入该英雄的编号:\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->number);
		printf("\n");
		printf("\t\t\t\t\t请输入该英雄的称号:\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->title );
		printf("\n");
		printf("\t\t\t\t\t请输入该英雄的姓名:\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->name );
		printf("\n");
		printf("\t\t\t\t\t请输入该英雄的大招:\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->skill );
		printf("\n");
		printf("\t\t\t\t\t请输入该英雄所属地区：\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->area );
		printf("\n");
		printf("\t\t\t\t\t********\n"); 
		//尾插法创建链表 
		r->next = s;
		r = s; 		
	 } 
	 s->next = NULL;
}

void Creat_head(struct hero *head)   //头插法创建链表  
{
	LOL();
	int num;
	struct hero *s;
	while(1)
	{
		printf("\t\t\t\t\t请输入选项：\n");
		printf("\t\t\t\t\t1.继续录入\n");
		printf("\t\t\t\t\t2.退出\n");
		printf("\t\t\t\t\t"); 
		scanf("%d",&num);
		printf("\n");
		if(num == 2)
		{
			break;
		}
		else if(num != 1 )
		{
			printf("请输入正确的选项\n"); 
			system("PAUSE");
			break; 
		} 
		s = (struct hero *)malloc(sizeof(struct hero));
		printf("\t\t\t\t\t请输入该英雄的编号:\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->number);
		printf("\n");
		printf("\t\t\t\t\t请输入该英雄的称号:\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->title );
		printf("\n");
		printf("\t\t\t\t\t请输入该英雄的姓名:\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->name );
		printf("\n");
		printf("\t\t\t\t\t请输入该英雄的大招:\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->skill );
		printf("\n");
		printf("\t\t\t\t\t请输入该英雄所属地区：\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->area );
		printf("\n");
		printf("\t\t\t\t\t********\n");
		//头插法创建链表 
		s->next = head->next ;
		head->next = s;
	}
}

void Delete_1(struct hero *head)   //按编号删除 
{
	LOL();
	struct hero *q,*p;
	char num[30];
	p = head;
	printf("\t\t\t\t\t请输入所要删除英雄的编号\n");
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
	//此时p指向所要删除的结点的前一个结点
	if(p == NULL || p->next == NULL)
	{
		printf("\t\t\t\t\t请正确输入所要删除的编号\n");
	} 
	 else
	{
		printf("\t\t\t\t\t删除成功\n");
		q = p->next;
		p->next = q->next ;
		free(q);
	}
} 

void Delete_2(struct hero *head)  //按称号删除 
{
	LOL();
	struct hero *q,*p;
	char num[30];
	p = head;
	printf("\t\t\t\t\t请输入所要删除英雄的称号\n");
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
	//此时p指向所要删除的结点的前一个结点
	if(p == NULL || p->next == NULL)
	{
		printf("\t\t\t\t\t请正确输入所要删除的称号\n");
	} 
	 else
	{
		printf("\t\t\t\t\t删除成功\n");
		q = p->next;
		p->next = q->next ;
		free(q);
	}
} 

void Delete_3(struct hero *head)  //按姓名删除 
{
	LOL();
	struct hero *q,*p;
	char num[30];
	p = head;
	printf("\t\t\t\t\t请输入所要删除英雄的姓名\n");
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
	//此时p指向所要删除的结点的前一个结点
	if(p == NULL || p->next == NULL)
	{
		printf("\t\t\t\t\t请正确输入所要删除的姓名\n");
	} 
	 else
	{
		printf("\t\t\t\t\t删除成功\n");
		q = p->next;
		p->next = q->next ;
		free(q);
	}
}

void remake_1(struct hero *head)   //根据编号修改信息 
{
	LOL();
	char num[30];
	printf("\t\t\t\t\t请输入需要修改英雄信息的编号\n");
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
		printf("\t\t\t\t\t请输入正确的编号\n");
	}
	else
	{
		printf("\t\t\t\t\t****原英雄信息如下：****\n");
		printf("\t\t\t\t\t编号：%s\n",temp->number );
		printf("\t\t\t\t\t称号：%s\n",temp->title );
		printf("\t\t\t\t\t姓名: %s\n",temp->name );
		printf("\t\t\t\t\t技能: %s\n",temp->skill );
		printf("\t\t\t\t\t地区: %s\n",temp->area );
		printf("\t\t\t\t\t************************\n"); 
		printf("\t\t\t\t\t请输入需要修改的英雄信息:\n");
		printf("\t\t\t\t\t编号: ");
		scanf("%s",&temp->number );
		printf("\n");  
		printf("\t\t\t\t\t称号: ");
		scanf("%s",&temp->title );
		printf("\n");
		printf("\t\t\t\t\t姓名: ");
		scanf("%s",&temp->name );
		printf("\n");
		printf("\t\t\t\t\t地区: ");
		scanf("%s",&temp->area );
		printf("\n");
		printf("大招:");
		scanf("%s",&temp->skill );
		printf("\n"); 
	}
}

void remake_2(struct hero *head)  //根据称号修改 
{
	LOL();
	char num[30];
	printf("\t\t\t\t\t请输入需要修改英雄信息的称号\n");
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
		printf("\t\t\t\t\t请输入正确的称号\n");
	}
	else
	{
		printf("\t\t\t\t\t****原英雄信息如下：****\n");
		printf("\t\t\t\t\t编号：%s\n",temp->number );
		printf("\t\t\t\t\t称号：%s\n",temp->title );
		printf("\t\t\t\t\t姓名: %s\n",temp->name );
		printf("\t\t\t\t\t技能: %s\n",temp->skill );
		printf("\t\t\t\t\t地区: %s\n",temp->area );
		printf("\t\t\t\t\t************************\n"); 
		printf("\t\t\t\t\t请输入需要修改的英雄信息:\n");
		printf("\t\t\t\t\t编号: ");
		scanf("%s",&temp->number );
		printf("\n");  
		printf("\t\t\t\t\t称号: ");
		scanf("%s",&temp->title );
		printf("\n");
		printf("\t\t\t\t\t姓名: ");
		scanf("%s",&temp->name );
		printf("\n");
		printf("\t\t\t\t\t地区: ");
		scanf("%s",&temp->area );
		printf("\n");
		printf("\t\t\t\t\t大招: ");
		scanf("%s",&temp->skill );
		printf("\n"); 
	}
}

void remake_3(struct hero *head)   //根据姓名修改 
{
	LOL();
	char num[30];
	printf("\t\t\t\t\t请输入需要修改英雄信息的姓名\n");
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
		printf("\t\t\t\t\t请输入正确的姓名\n");
	}
	else
	{
		printf("\t\t\t\t\t****原英雄信息如下：****\n");
		printf("\t\t\t\t\t编号：%s\n",temp->number );
		printf("\t\t\t\t\t称号：%s\n",temp->title );
		printf("\t\t\t\t\t姓名: %s\n",temp->name );
		printf("\t\t\t\t\t技能: %s\n",temp->skill );
		printf("\t\t\t\t\t地区: %s\n",temp->area );
		printf("\t\t\t\t\t************************\n"); 
		printf("\t\t\t\t\t请输入需要修改的英雄信息:\n");
		printf("\t\t\t\t\t编号: ");
		scanf("%s",&temp->number );
		printf("\n");  
		printf("\t\t\t\t\t称号: ");
		scanf("%s",&temp->title );
		printf("\n");
		printf("\t\t\t\t\t姓名: ");
		scanf("%s",&temp->name );
		printf("\n");
		printf("\t\t\t\t\t地区: ");
		scanf("%s",&temp->area );
		printf("\n");
		printf("\t\t\t\t\t大招: ");
		scanf("%s",&temp->skill );
		printf("\n");  
	}
}

void search_1(struct hero *head)    //按照编号查找 
{
	LOL();
	char num[30];
	struct hero *temp = head;
	printf("\t\t\t\t\t请输入需要查询的编号:\n");
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
		printf("\t\t\t\t\t请输入正确的编号\n");
	}
	else
	{
	printf("\t\t\t\t\t****该英雄信息如下：****\n");
	printf("\t\t\t\t\t编号：%s\n",temp->number );
	printf("\t\t\t\t\t称号：%s\n",temp->title );
	printf("\t\t\t\t\t姓名: %s\n",temp->name );
	printf("\t\t\t\t\t技能: %s\n",temp->skill );
	printf("\t\t\t\t\t地区: %s\n",temp->area );
	printf("\t\t\t\t\t************************\n"); 
	}
}

void search_2(struct hero *head)  //按照称号查找 
{
	LOL();
	char num[30];
	struct hero *temp = head;
	printf("\t\t\t\t\t请输入需要查询的称号:\n");
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
		printf("\t\t\t\t\t请输入正确的称号\n");
	}
	else
	{
	printf("\t\t\t\t\t****该英雄信息如下：****\n");
	printf("\t\t\t\t\t编号：%s\n",temp->number );
	printf("\t\t\t\t\t称号：%s\n",temp->title );
	printf("\t\t\t\t\t姓名: %s\n",temp->name );
	printf("\t\t\t\t\t技能: %s\n",temp->skill );
	printf("\t\t\t\t\t地区: %s\n",temp->area );
	printf("\t\t\t\t\t************************\n"); 
	}
}

void search_3(struct hero *head)   //按照姓名查找 
{
	LOL();
	char num[30];
	struct hero *temp = head;
	printf("\t\t\t\t\t请输入需要查询的姓名:\n");
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
		printf("\t\t\t\t\t请输入正确的姓名\n");
	}
	else
	{
	printf("\t\t\t\t\t****该英雄信息如下：****\n");
	printf("\t\t\t\t\t编号：%s\n",temp->number );
	printf("\t\t\t\t\t称号：%s\n",temp->title );
	printf("\t\t\t\t\t姓名: %s\n",temp->name );
	printf("\t\t\t\t\t技能: %s\n",temp->skill );
	printf("\t\t\t\t\t地区: %s\n",temp->area );
	printf("\t\t\t\t\t************************\n"); 
	}
}

void insert_head(struct hero *head)  //头部插入 
{
	LOL();
	struct hero *s;
	printf("\t\t\t\t\t请输入需要插入英雄的信息\n");
	s = (struct hero *)malloc(sizeof(struct hero));
	printf("\t\t\t\t\t请输入英雄的编号：\n");
	printf("\t\t\t\t\t");
	scanf("%s",&s->number );
	printf("\n");
	printf("\t\t\t\t\t请输入英雄的称号: \n");
	printf("\t\t\t\t\t");
	scanf("%s",&s->title );
	printf("\n");
	printf("\t\t\t\t\t请输入该英雄的姓名: \n");
	printf("\t\t\t\t\t");
	scanf("%s",&s->name );
	printf("\n");
	printf("\t\t\t\t\t请输入该英雄的大招: \n");
	printf("\t\t\t\t\t");
	scanf("%s",&s->skill );
	printf("\n");
	printf("\t\t\t\t\t请输入该英雄所属地区：\n");
	printf("\t\t\t\t\t");
	scanf("%s",&s->area );
	printf("\n");
	//
	s->next = head->next;
	head->next = s; 
} 

void insert_end(struct hero *head)   //尾部插入 
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
		printf("\t\t\t\t\t请输入需要插入英雄的信息\n");
		s = (struct hero *)malloc(sizeof(struct hero));
		printf("\t\t\t\t\t请输入英雄的编号：\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->number );
		printf("\n");
		printf("\t\t\t\t\t请输入英雄的称号: \n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->title );
		printf("\n");
		printf("\t\t\t\t\t请输入该英雄的姓名: \n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->name );
		printf("\n");
		printf("\t\t\t\t\t请输入该英雄的大招: \n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->skill );
		printf("\n");
		printf("\t\t\t\t\t请输入该英雄所属地区：\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->area );
		printf("\n");
		//
		r->next = s;
		s->next = NULL;
	}
}

void insert(struct hero *head)  //任意位置插入 
{
	LOL();
	int n;
	struct hero *s;
	struct hero *temp = head;
	printf("\t\t\t\t\t请输入想要插入的位置: \n");
	printf("\t\t\t\t\t");
	scanf("%d",&n);
	printf("\n");
	if(n == 0)
	{
		printf("\t\t\t\t\t请输入正确的插入位置\n");		
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
		printf("\t\t\t\t\t请输入需要插入英雄的信息\n");
		s = (struct hero *)malloc(sizeof(struct hero));
		printf("\t\t\t\t\t请输入英雄的编号：\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->number );
		printf("\n");
		printf("\t\t\t\t\t请输入英雄的称号: \n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->title );
		printf("\n");
		printf("\t\t\t\t\t请输入该英雄的姓名: \n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->name );
		printf("\n");
		printf("\t\t\t\t\t请输入该英雄的大招: \n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->skill );
		printf("\n");
		printf("\t\t\t\t\t请输入该英雄所属地区：\n");
		printf("\t\t\t\t\t");
		scanf("%s",&s->area );
		printf("\n");
		//
		s->next = temp->next ;
		temp->next = s;
	}
	else
	{
		printf("\t\t\t\t\t请输入正确的位置信息\n");
	}
	}
}

void sort_1(struct hero *head)  //按照编号排序 
{
	LOL();
	int n;
	printf("\t\t\t\t\t请输入选择升序还是降序排列\n");
	printf("\t\t\t\t\t1.升序排列\n");
	printf("\t\t\t\t\t2.降序排列\n");
	printf("\t\t\t\t\t"); 
	scanf("%d",&n);
	printf("\n");
	struct hero *back,*p;
	struct hero temp;
	switch(n)
	{
		case 1:            //升序排列 
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
		case 2:       //降序排列 
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

void sort_2(struct hero *head)   //按照称号排序 
{
	LOL();
	int n;
	printf("\t\t\t\t\t请输入选择升序还是降序排列\n");
	printf("\t\t\t\t\t1.升序排列\n");
	printf("\t\t\t\t\t2.降序排列\n"); 
	printf("\t\t\t\t\t");
	scanf("%d",&n);
	printf("\n");
	struct hero *back,*p;
	struct hero temp;
	switch(n)
	{
		case 1:            //升序排列 
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
		case 2:       //降序排列 
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

void sort_3(struct hero *head)   //按照姓名排序 
{
	LOL();
	int n;
	printf("\t\t\t\t\t请输入选择升序还是降序排列\n");
	printf("\t\t\t\t\t1.升序排列\n");
	printf("\t\t\t\t\t2.降序排列\n"); 
	printf("\t\t\t\t\t");
	scanf("%d",&n);
	printf("\n");
	struct hero *back,*p;
	struct hero temp;
	switch(n)
	{
		case 1:            //升序排列 
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
		case 2:       //降序排列 
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
void print(struct hero *head)   //打印链表 
{
	LOL();
	if(head->next == NULL)
	{
		printf("\t\t\t\t\t请先录入有效信息\n"); 
	}
	else
	{
	struct hero *temp = head->next ;
	printf("\t\t\t\t\t*********英雄信息显示如下：*********\n"); 
	while(temp)
	{
		printf("\t\t\t\t\t编号：%s\n",temp->number );
		printf("\t\t\t\t\t称号：%s\n",temp->title );
		printf("\t\t\t\t\t姓名: %s\n",temp->name );
		printf("\t\t\t\t\t技能: %s\n",temp->skill );
		printf("\t\t\t\t\t地区: %s\n",temp->area );
		printf("\t\t\t\t\t************************\n");
		temp= temp->next ;
	
	}
	}
}

void save(struct hero *head) //文件存储 
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
	printf("\t\t\t\t\t保存完毕!!!!\n");
	system("PAUSE");
	system("cls");
	fflush(stdin); 
}

void read(struct hero *head) //文件输出 
{
	system("cls");
	fflush(stdin);
	FILE *fp;
	LOL();
	struct hero *t;
	t = (struct hero *)malloc(sizeof(struct hero));
	if((fp = fopen("xxx.txt","r")) == NULL)
	{
		printf("\t\t\t\t\t未找到文件\n"); 
	}
	else
	{
		printf("\t\t\t\t\t编号\t\t称号\t\t姓名\t\t地区\t\t大招\t\t\n");
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

struct hero *import(struct hero *head)  //文件导入 
{
	system("cls");
	fflush(stdin);
	FILE *fp;
	if((fp = fopen("xxx.txt","r")) == NULL)
	{
		printf("\t\t\t\t\t未找到文件\n"); 
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
		printf("\t\t\t\t\t文件导入成功\n");
		system("PAUSE");
		system("cls");
		fflush(stdin);
		return  head;
	}
	system("cls");
	fflush(stdin);
	return NULL;
}

int iCount(struct hero *head) //统计数据 
{
	struct hero *temp = head->next ;  //p指针指向首元结点 
	int iCount = 0; //计数器 
	while(temp != NULL)
	{
		iCount++;
		temp = temp->next;  //移动p指针到下一个结点的地址 
	}
	return iCount;
}

void menu()    //主菜单 
{
	system("cls");
	printf("\t\t\t\t\t*****************************\n");	
	printf("\t\t\t\t\t*****************************\n");	
	printf("\t\t\t\t\t*****************************\n");
	printf("\t\t\t\t\t******LOL英雄信息管理系统****\n"); 
	printf("\t\t\t\t\t*****************************\n");
	printf("\t\t\t\t\t*****************************\n");	
	printf("\t\t\t\t\t*****************************\n");	
	printf("\t\t\t\t\t********1.录入英雄信息*******\n");	
	printf("\t\t\t\t\t********2.删除英雄信息*******\n");	
	printf("\t\t\t\t\t********3.修改英雄信息*******\n");	
	printf("\t\t\t\t\t********4.查找英雄信息*******\n");
	printf("\t\t\t\t\t********5.添加英雄信息*******\n");	
	printf("\t\t\t\t\t********6.英雄编号排序*******\n");	
	printf("\t\t\t\t\t********7.显示英雄信息*******\n");	
	printf("\t\t\t\t\t********8.存储英雄信息*******\n");	
	printf("\t\t\t\t\t********9.读取英雄信息*******\n");	
	printf("\t\t\t\t\t*******10.统计英雄数据*******\n");	
	printf("\t\t\t\t\t*******11.文件的导入*********\n");	
	printf("\t\t\t\t\t*******12.退出***************\n");
	printf("\t\t\t\t\t*****************************\n");	
	printf("\t\t\t\t\t*****************************\n");
	printf("\t\t\t\t\t*****************************\n");
	printf("\t\t\t\t\t*****************************\n");
	printf("\t\t\t\t\t*****************************\n");
	printf("\t\t\t\t\t*****************************\n");	
}

void interaction()   //选择面板 
{
	struct hero *head;
	head = CreatList();
	int n;
	do
	{
		menu();
		int number;
		printf("\t\t\t\t\t请输入所要选择的数字\n");
		printf("\t\t\t\t\t");
		scanf("%d",&number);
		printf("\n");
		switch(number)
		{
			case 1:
				system("cls");
				LOL();
				printf("\t\t\t\t\t请选择录入英雄信息的方式\n");
				printf("\t\t\t\t\t1.逆序录入信息\n");
				printf("\t\t\t\t\t2.正序录入信息\n"); 
				printf("\t\t\t\t\t3.返回上一步\n");
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
				printf("\t\t\t\t\t请选择删除英雄信息的方式\n");
				printf("\t\t\t\t\t1.按照编号删除英雄信息\n");
				printf("\t\t\t\t\t2.按照称号删除英雄信息\n");
				printf("\t\t\t\t\t3.按照姓名删除英雄信息\n");
				printf("\t\t\t\t\t4.返回上一步\n");
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
				printf("\t\t\t\t\t请选择修改英雄信息的方式\n");
				printf("\t\t\t\t\t1.根据编号修改\n");
				printf("\t\t\t\t\t2.根据称号修改\n");
				printf("\t\t\t\t\t3.根据姓名修改\n");
				printf("\t\t\t\t\t4.返回上一步\n");
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
				printf("\t\t\t\t\t请选择查询英雄信息的方式\n");
				printf("\t\t\t\t\t1.选择编号查询\n");
				printf("\t\t\t\t\t2.选择称号查询\n");
				printf("\t\t\t\t\t3.选择姓名查询\n");
				printf("\t\t\t\t\t4.返回上一步\n");
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
				printf("\t\t\t\t\t请选择插入英雄信息的方式\n");
				printf("\t\t\t\t\t1.在头部插入\n");
				printf("\t\t\t\t\t2.在尾部插入\n");
				printf("\t\t\t\t\t3.在选定位置插入\n");
				printf("\t\t\t\t\t4.返回上一步\n");
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
				printf("\t\t\t\t\t请输入按照什么排序\n");
				printf("\t\t\t\t\t1.按照编号排序\n");
				printf("\t\t\t\t\t2.按照称号排序\n");
				printf("\t\t\t\t\t3.按照姓名排序\n");
				printf("\t\t\t\t\t4.返回上一步\n");
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
				printf("\t\t\t\t\t一共有%d个成员\n",iCount(head));
				system("pause");
				break;
		    case 11:
		    	head = import(head);
		    	break; 
		    case 12:
			exit(0);
			break;
			default:
				printf("\t\t\t\t\t请输入正确的选项\n");
				system("pause");
				break;
		} 
	}while(1);
}

void registeruser()  //注册 
{
	system("cls");
	LOL();
	
	char name[30];
	char num[30];
	char num2[30];
	printf("\t\t\t\t\t----------*-------*--------\n");
	printf("\t\t\t\t\t----------*-------*--------\n");
	printf("\t\t\t\t\t--------   注册     -------\n");
	printf("\t\t\t\t\t---------------------------\n");
	FILE *fp;
	fp = fopen("账号密码.txt","ab");
	printf("\t\t\t\t\t--------请输入账号---------\n");
	printf("\t\t\t\t\t账号：");
	scanf("%s",&name);
	printf("\n");
	strcpy(one.usename ,name);
	printf("\t\t\t\t\t--------请输入密码---------\n");
	printf("\t\t\t\t\t(密码可包含数字,字母,字符) \n");
	printf("\t\t\t\t\t密码：");
	scanf("%s",&num); 
	printf("\n");
	strcpy(one.number ,num);
	printf("\t\t\t\t\t请再次确认密码\n");
	printf("\t\t\t\t\t密码：");
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
			printf("\t\t\t\t\t两次密码不一致\n");
			printf("\t\t\t\t\t请重试\n");
			break;
		}
	}
	if(flag == 1)
	{
		fprintf(fp,"账号\t密码\n");
		fprintf(fp,"%s\t%s\n",one.usename ,one.number );
		printf("\t\t\t\t\t注册成功!!!!\n");
		fclose(fp);
		system("pause");
		system("cls");
	}
}

void login()  //登录 
{
	system("cls");
	LOL();
	char name[30];
	char num[30];
	printf("\t\t\t\t\t----------*-------*--------\n");
	printf("\t\t\t\t\t----------*-------*--------\n");
	printf("\t\t\t\t\t--------   登录     -------\n");
	printf("\t\t\t\t\t---------------------------\n");
	printf("\t\t\t\t\t账号:");
	scanf("%s",&name);
	printf("\n");
	printf("\t\t\t\t\t密码:");
	scanf("%s",&num);
	printf("\n");
	FILE *fp;
	fp = fopen("账号密码.txt","r");
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
		printf("\t\t\t\t\t登录成功！\n");
		printf("\t\t\t\t\t按任意键进入LOL信息管理系统\n");
		system("pause");
		system("cls");
		interaction();
		exit(0);
	}
	else
	{
		printf("\t\t\t\t\t账号或密码输入错误\n");
	}
}

void ID()   //登录时的选择面板 
{
	system("cls");
	LOL();
	int n;
	printf("\t\t\t\t\t----------*-----*-----*-----*-------\n");
	printf("\t\t\t\t\t------  欢迎来到LOL信息管理系统  ---\n");
	printf("\t\t\t\t\t------------------------------------\n");
	printf("\t\t\t\t\t1.登录\n");
	printf("\t\t\t\t\t2.注册\n");
	printf("\t\t\t\t\t3.退出\n");
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
			printf("\t\t\t\t\t请输入正确选项\n");
			break; 
	} 
}

int main()  //主函数 
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
