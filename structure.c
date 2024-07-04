#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct tablets 
{
    int count; 
    float average_weight;
    int m_date, m_month, m_year;
    int ex_date, ex_month, ex_year;
}batch1={100,25.3,23,11,2024};

struct tablet
{
 int count;
 float average_weight;
 int m_date, m_month, m_year;
 int ex_date, ex_month, ex_year;
};
struct tablet batch2={100,25.3,23,11,2024};  

struct employee
{
   int emp_num;
   char designation[40];
   char kind_of_leave_applied[30];
   int number_of_days;
   int begin_date;
};
struct employee mangal_singh = {.kind_of_leave_applied = "Medical leave", .begin_date = 230910, .emp_num = 061}; 

struct 
{
  float x, y, z;
} s = { .y = 0.6, .x = 2.7, .z = 14.6};


struct test
{
  float x, y, z;
}s2; 

struct test2
{
  float x, y, z;
}s1; 


struct traveler
{
  int class;
  char train_num[40];
  char coach_num[6];
  int seat_num;
  char from[30];
  char to[30];
  char gender[10];
  int age;
  int dep_date[10];
  char name[80];
};
struct traveler train = 
{ 
  .name = "JITENDRA PRAJAPATI",
  .to = "DEESA", 
  .from = "NADIAD",
  .train_num = "Express 154",
  .dep_date[0] = 30,
  .dep_date[1] = 6,
  .dep_date[2] = 2024,
  .gender = "M",
  .age = 22,
  .class = 1
}; 


struct employee2
{
  char grade;
  int basic;
  float allowance;
};

typedef struct fruits
{
 float big;
 float medium;
 float small;
}weight;

typedef struct             
{
   int x;
   int y;

}Dot;             
Dot left,right; 

struct outer  // declaration of outer structure 
{
  int out1;       // member of outer structure 
  float out2;       // member of outer structure 
  struct inner // declaration of inner structure 
  {
   int in1;        // member of inner structure 
   float in2;       // member of inner structure 
  }invar;
}; 


struct first   
{
   int in1;   
   float in2;   
};
struct second  
{
   int out1;   
   float out2; 
   struct first inf; 
};

 
struct test1
{
   char a;
   int i;
   float u;
}m[3];

struct test3
{
   char a2;
   int i2;
   float f2;
};

struct boat       /** declaration of structure **/
{
   char name[20];
   int seatnum;
   float fare;
};

  /* function to link-in fl oating
 point emulator */
 void linkfloat()
 {
  float a,*x;
  x=&a;
  a=*x;
 }
 struct test4
 {
  char a;
  int i;
  float f;
 };
 
struct A
{
 char ch;
 int in;
 float f;
};
struct AA
{
 char ch;
 int in;
 float f;
};
void show(struct AA);

struct AAA
{
  char ch;
  int in;
  float f;
};
void read(struct AAA *);
void show2(struct AAA);

struct AAAA
{
  char ch;
  int in;
  float f;
};
struct AAAA read2(void);
void show3(struct AAAA);



int main()
{
    
   printf("Topic:9---> STRUCTURES\n");  
   printf("-----------------------------\n");  
   printf("Declaring Structures and  Structure Variables:\n");  
   printf("\n");
 
   printf("struct personal_data\n");
   printf("{\n");
   printf(" char name[100];\n");
   printf("char address[200];\n");
   printf(" int year_of_birth;\n");
   printf(" int month_of_birth;\n");
   printf("int day_of_birth;\n");
   printf("};\n");
   printf("struct personal_data jitendra, deesa, 2002, 01, 15;\n");
   printf("\n");
 
  
   printf("-----------------------------\n");  
   printf("Accessing the Members of a  Structure:\n");  
   printf("s2.b = 12;\n");  
   printf("\n");
 
   printf("-----------------------------\n");  
   printf("Initialization of  Structures:\n");  
  
   printf("count=%d, av_wt=%f\n",batch1.count,batch1.average_weight);
   printf("mfg-date=%d/%d/%d\n", batch1.m_date,batch1.m_month,batch1.m_year);
   printf("exp-date=%d/%d/%d\n", batch1.ex_date,batch1.ex_month, batch1.ex_year);
   printf("\n");
   
   printf("count=%d, av_wt=%f\n",batch2.count,batch2.average_weight);
   printf("mfg-date=%d/%d/%d\n", batch2.m_date,batch2.m_month,batch2.m_year);
   printf("exp-date=%d/%d/%d\n", batch2.ex_date,batch2.ex_month, batch2.ex_year);
   printf("\n");
   
 
   float p,q,r;
   p= s.x + s.y + s.z;
   q= s.z*s.x;
   r= s.z/s.x;
   printf("p[s.x + s.y + s.z]= %5.2f\n",p);
   printf("q[s.z*s.x] = %5.2f\n",q);
   printf("r[s.z/s.x] = %5.2f\n",r);
   printf("\n");
   
   struct test s= { .y = 1.24, .x = 3.8, .z = 11.7};
   p= s.x + s.y + s.z;
   q= s.z*s.x;
   r= s.z/s.x;
   printf("p[s.x + s.y + s.z]= %5.2f\n",p);
   printf("q[s.z*s.x] = %5.2f\n",q);
   printf("r[s.z/s.x] = %5.2f\n",r);
   printf("\n");
   
    struct test s1;
   s.y= 5.94;
   s.z= 19.45;
   s.x= 23.17;
   p= s.x + s.y + s.z;
   q= s.z*s.x;
   r= s.z/s.x;
   printf("p[s.x + s.y + s.z]= %7.2f\n",p);
   printf("q[s.z*s.x] = %7.2f\n",q);
   printf("r[s.z/s.x] = %7.2f\n",r);
   printf("\n");
   
   
   printf("Enter coach number:");
   scanf("%s",train.coach_num);
   printf("Enter seat number:");
   scanf("%d", &train.seat_num); 
   printf("xxxxxxxxx Ticket xxxxxxxxx");
   printf("Name of Ticket holder : %s\n", train.name);
   printf("Train : %s\n:",train.train_num); 
   printf("From : %s Date of Departure:\n", train.from);
   printf("\n");
  
   for(int i=0;i<3;i++)
   {
    printf(": %d :\n",train.dep_date[i]);
    printf("To: %s\n", train.to);
    printf("Coach No.: %s Seat No.:%d\n",train.coach_num,train.seat_num);
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
   }
    printf("\n");
    
   printf("-----------------------------\n");  
   printf(" Copying and  Comparing  Structures:\n");
   printf("\n");
  
   struct employee2 jitendra={'b', 50000, 812.5};
   struct employee2 naran;          
   naran = jitendra;  
   printf("naran’s grade is %c, basic is Rs %d,allowance RS:%f\n",naran.grade,naran.basic,naran.allowance);  
   printf("\n");
  
  
   struct employee2 kishan = {'b', 5750, 818.75};
   struct employee2 rajesh = {'b', 6500, 812.5};
 
   if(kishan.grade!= rajesh.grade)
   {
     printf("Kishan and Rajesh are employed on different grades");
   }
   else if((rajesh.basic+kishan.allowance)>(kishan.basic+rajesh.allowance))
   {
     printf("kishan is senior and his total remuneration is Rs:%f\n",(kishan.basic+kishan.allowance));
   }
   else if((rajesh.basic+kishan.allowance)==(kishan.basic+rajesh.allowance))
   {
     printf("Kishan and Rajesh get the same total remuneration of Rs:%f\n",(rajesh.basic+kishan.allowance));
   }
  else
  {
     printf("Rajesh is senior and his total remuneration is Rs:%f\n",(rajesh.basic+rajesh.allowance));
  }
  
  
  printf("\n");
  printf("-----------------------------\n");  
  printf(" Typedef and its Use in Structure Declarations:\n");
  printf("\n");
  
  weight apples={200.75,145.5,100.25};
  weight pears={150.50,125,50};
  weight mangoes={1000, 567.25, 360.25};
  
  printf("apples: big %7.2fkg, medium %7.2fkg,small %7.2fkg\n",apples.big,apples.medium,apples.small);
  printf("pears: big %7.2fkg, medium %7.2fkg,small %7.2fkg\n",pears.big,pears.medium,pears.small);
  printf("mangoes: big %7.2fkg, medium %7.2fkg,small %7.2fkg\n", mangoes.big,mangoes.medium,mangoes.small);
  printf("\n");

 
  printf("Enter x & y coordinates of left and right:");
  scanf("%d %d %d %d",&left.x,&left.y,&right.x,&right.y);
  printf("left: x=%d, y=%d\n, right: x=%d,y=%d", left.x, left.y, right.x,right.y);
   

  printf("\n");
  printf("-----------------------------\n");  
  printf("Nesting of  Structures:\n");
  printf("\n");
  
  struct outer outvar;
  outvar.out1= 2;  
  outvar.out2= 10.57; 
 
  outvar.invar.in1= 2* outvar.out1;
  outvar.invar.in2= outvar.out2 + 3.65;
 printf("out1=%d, out2=%6.2f, in1=%d, in2=%6.2f",outvar.out1, outvar.out2,outvar.invar.in1,outvar.invar.in2);
   printf("\n");
 
  struct second outs; 
  outs.out1= 2; 
  outs.out2= 10.57; 
  outs.inf.in1= 2* outs.out1;
  outs.inf.in2= outs.out2 + 3.65;
  printf("out1=%d, out2=%6.2f, in1=%d, in2=%6.2f",outs.out1, outs.out2, outs.inf.in1,outs.inf.in2);
 
  printf("\n");
  printf("-----------------------------\n");  
  printf("Arrays of  Structures:\n");
  printf("\n");
  
  int n;
   for(n=0;n<=2;++n)
   {
    printf("Enter character, integer, float :");
    fflush(stdin);   
    scanf("%c %d %f",&(m[n].a),&(m[n].i),&(m[n].u));
    fflush(stdout); 
    printf("a=%c, i=%d, u=%f\n", m[n].a, m[n].i, m[n].u);
   }

  printf("\n");
  printf("-----------------------------\n");  
  printf("Initializing  Arrays of  Structures:\n");
  printf("\n");
  
  int n2;
  struct boat ticket[4]= {{"jitendra", 1,15.50},{"Naran", 2,15.50}, {"Kishan", 3,25.50}, {"Rajesh",4,25.50}};
  printf("Boarder Ticket num. Fare");
  
  for(n2=0;n2<=3;n2++)
  {
    printf("%s %d %f\n",ticket[n2].name,ticket[n2].seatnum,ticket[n2].fare);
   }

  printf("\n");
  printf("-----------------------------\n");  
  printf("Structures  and Pointers:\n");
  printf("\n");
  
  struct test3 *pt; // declaring pointer to structure 
  pt = (struct test3 *)malloc(sizeof(struct test3));
 
  if (pt == NULL)
  {
     fprintf(stderr, "Memory allocation failed\n");
     return 1; 
   }

  pt->a2 = 'K';     // Accessing struct members using -> for pointers
  pt->i2 = 15;
  pt->f2 = 27.89;

  printf("a=%c, i=%d, f=%f\n", pt->a2, pt->i2, pt->f2);
  printf("Enter values for a, i, f: ");
  scanf(" %c %d %f", &pt->a2, &pt->i2, &pt->f2); 
  printf("a=%c, i=%d, f=%f\n", pt->a2, pt->i2, pt->f2);

  free(pt);
  
  struct test4 *j, *k;
    float *l;

    j = malloc(sizeof(struct test4));
    if (j == NULL) {
        perror("malloc");
        return 1;
    }
    scanf("%c %d", &j->a, &j->i);
    k = j;
    printf("a=%c, i=%d, f=%f", k->a, k->i, k->f);
    free(j);
    printf("\n");
    
    
  struct A *sp;
  int n3,i;
  printf("How many members:");
  scanf("%d",&n3);
  sp=(struct A *)malloc(n*sizeof(struct A));
  
  if(sp==NULL)
  {
   printf("Memory allocation unsuccessful\n");
   exit(0);
  }
  
  for(i=0;i<n3;++i)
  {
  printf("Enter ch, in and f:");
  fflush(stdin);
  scanf("%c %d %f",&sp[i].ch,&sp[i].in,&sp[i].f);
  }
  for(i=0;i<n3;++i)
  {
   printf("ch=%c in=%d f=%f\n",sp[i].ch,sp[i].in, sp[i].f);
  }
  
  void linkfloat()
  {
   float a=0.0,*x;
   x=&a;
   a=*x;
  }

  printf("\n");
  printf("-----------------------------\n");  
  printf(" Structures  and Functions:\n");
  printf("\n");
  
  struct AA aa;
  printf("Enter ch, in and f:");
  fflush(stdin);
  scanf("%c %d %f",&aa.ch,&aa.in,&aa.f);
  show(aa);
  printf("\n");

  
   struct AAA a;
   read(&a);
   show2(a);  
   printf("\n");
   
   struct AAAA a3;
   a3=read2();
   show3(a3);

  return 0;
}


void show(struct AA b)
{
  printf("ch=%c, in=%d, f=%f\n",b.ch,b.in,b.f);
}

 void read(struct AAA *p)
 {
  printf("Enter ch, in and f:");  
  fflush(stdin); 
  scanf("%c %d %f",&p->ch,&p->in,&p->f);
    
 }
 void show2(struct AAA b)
 {
  printf("ch=%c in=%d f=%f\n",b.ch,b.in,b.f);
 }
 
struct AAAA read2(void)
{
  struct AAAA p;
  printf("Enter ch, in and f:");
  fflush(stdin);
  scanf("%c %d %f\n",&p.ch,&p.in,&p.f);
  return p;
}
 void show3(struct AAAA b)
 {
  printf("ch=%c, in=%d, f=%f\n",b.ch,b.in,b.f);
 }



