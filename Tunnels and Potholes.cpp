/*
GROUP MEMBERS:-

AMAN TAHILIANI (18103213)
ESHITA KALSI (18103217)
SHUBHAM AGRAWAL (18103231)
*/

#include<bits/stdc++.h>
using namespace std;
static int num=1;
class node
{
    public:
    int data;
    node *next;
    node *jump;
    node()
    {
        data=num++;
        next=NULL;
        jump=NULL;
    }
}*head=NULL, *curr=NULL;
node* moving(node *ptr, int n)
{
    if(n<=100-ptr->data)
    {
        while(n)
        {
            ptr=ptr->next;
            n--;
        }
    }
    if(ptr->jump!=NULL)
        ptr=ptr->jump;
    return ptr;
}
void dicedisp(int n)
{
    switch(n)
    {
        case 1: cout<<"\n\n                   _ _ _ _";
                cout<<"\n                  |       |";
                cout<<"\n                  |   O   |";
                cout<<"\n                  |_ _ _ _|\n";
                break;
        case 2: cout<<"\n\n                   _ _ _ _";
                cout<<"\n                  | O     |";
                cout<<"\n                  |       |";
                cout<<"\n                  |_ _ _O_|\n";
                break;
        case 3: cout<<"\n\n                   _ _ _ _";
                cout<<"\n                  | O     |";
                cout<<"\n                  |   O   |";
                cout<<"\n                  |_ _ _O_|\n";
                break;
        case 4: cout<<"\n\n                   _ _ _ _";
                cout<<"\n                  | O   O |";
                cout<<"\n                  |       |";
                cout<<"\n                  |_O_ _O_|\n";
                break;
        case 5: cout<<"\n\n                   _ _ _ _";
                cout<<"\n                  | O   O |";
                cout<<"\n                  |   O   |";
                cout<<"\n                  |_O_ _O_|\n";
                break;
        case 6: cout<<"\n\n                   _ _ _ _";
                cout<<"\n                  | O   O |";
                cout<<"\n                  | O   O |";
                cout<<"\n                  |_O_ _O_|\n";
                break;
    }
}
void makegrid(int x, int y, int n, char n1, char n2)
{
    int xrow, yrow, xcol, ycol;
    if(x>0&&x<=10)
    {
        xrow=38;
        xcol=(((x%10)-1)*9)+4;
        if(xcol==-5)
            xcol=86;
    }
    else if(x>10&&x<=20)
    {
        xrow=34;
        xcol=91-((((x%10)-1)*9)+4);
        if(xcol==96)
            xcol=4;
    }
    else if(x>20&&x<=30)
    {
        xrow=30;
        xcol=(((x%10)-1)*9)+4;
        if(xcol==-5)
            xcol=86;
    }
    else if(x>30&&x<=40)
    {
        xrow=26;
        xcol=91-((((x%10)-1)*9)+4);
        if(xcol==96)
            xcol=4;
    }
    else if(x>40&&x<=50)
    {
        xrow=22;
        xcol=(((x%10)-1)*9)+4;
        if(xcol==-5)
            xcol=86;
    }
    else if(x>50&&x<=60)
    {
        xrow=18;
        xcol=91-((((x%10)-1)*9)+4);
        if(xcol==96)
            xcol=4;
    }
    else if(x>60&&x<=70)
    {
        xrow=14;
        xcol=(((x%10)-1)*9)+4;
        if(xcol==-5)
            xcol=86;
    }
    else if(x>70&&x<=80)
    {
        xrow=10;
        xcol=91-((((x%10)-1)*9)+4);
        if(xcol==96)
            xcol=4;
    }
    else if(x>80&&x<=90)
    {
        xrow=6;
        xcol=(((x%10)-1)*9)+4;
        if(xcol==-5)
            xcol=86;
    }
    else if(x>90&&x<=100)
    {
        xrow=2;
        xcol=91-((((x%10)-1)*9)+4);
        if(xcol==96)
            xcol=4;
    }
    if(y>0&&y<=10)
    {
        yrow=39;
        ycol=(((y%10)-1)*9)+4;
        if(ycol==-5)
            ycol=86;
    }
    else if(y>10&&y<=20)
    {
        yrow=35;
        ycol=91-((((y%10)-1)*9)+4);
        if(ycol==96)
            ycol=4;
    }
    else if(y>20&&y<=30)
    {
        yrow=31;
        ycol=(((y%10)-1)*9)+4;
        if(ycol==-5)
            ycol=86;
    }
    else if(y>30&&y<=40)
    {
        yrow=27;
        ycol=91-((((y%10)-1)*9)+4);
        if(ycol==96)
            ycol=4;
    }
    else if(y>40&&y<=50)
    {
        yrow=23;
        ycol=(((y%10)-1)*9)+4;
        if(ycol==-5)
            ycol=86;
    }
    else if(y>50&&y<=60)
    {
        yrow=19;
        ycol=91-((((y%10)-1)*9)+4);
        if(ycol==96)
            ycol=4;
    }
    else if(y>60&&y<=70)
    {
        yrow=15;
        ycol=(((y%10)-1)*9)+4;
        if(ycol==-5)
            ycol=86;
    }
    else if(y>70&&y<=80)
    {
        yrow=11;
        ycol=91-((((y%10)-1)*9)+4);
        if(ycol==96)
            ycol=4;
    }
    else if(y>80&&y<=90)
    {
        yrow=7;
        ycol=(((y%10)-1)*9)+4;
        if(ycol==-5)
            ycol=86;
    }
    else if(y>90&&y<=100)
    {
        yrow=3;
        ycol=91-((((y%10)-1)*9)+4);
        if(ycol==96)
            ycol=4;
    }
    string grid[41];
    string newpage="\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\n\n";
    for(int i=0;i<41;i++)
        if(i%4!=0)
            grid[i]="|        |        |        |        |        |        |        |        |        |        |";
        else
            grid[i]="-------------------------------------------------------------------------------------------";

        grid[1]="|  100   | 99(02) |   98   |   97   |   96   |   95   |   94   |   93   |   92   |   91   |";
        grid[5]="|   81   |   82   |   83   |   84   |   85   |   86   |   87   |   88   |   89   |   90   |";
        grid[9]="|   80   |   79   |   78   |   77   | 76(58) |   75   | 74(92) |   73   |   72   |   71   |";
        grid[13]="|   61   | 62(81) |   63   |   64   | 65(45) |   66   |   67   |   68   |   69   |   70   |";
        grid[17]="|   60   |   59   |   58   |   57   |   56   |   55   | 54(31) |   53   |   52   |   51   |";
        grid[21]="|   41   | 42(63) | 43(18) |   44   |   45   |   46   |   47   |   48   |   49   | 50(69) |";
        grid[25]="| 40(03) |   39   |   38   |   37   |   36   |   35   |   34   | 33(49) |   32   |   31   |";
        grid[29]="|   21   |   22   |   23   |   24   |   25   |   26   | 27(05) |   28   |   29   |   30   |";
        grid[33]="|   20   |   19   |   18   |   17   |   16   |   15   |   14   | 13(46) |   12   |   11   |";
        grid[37]="|   01   |   02   |   03   | 04(25) |   05   |   06   |   07   |   08   |   09   |   10   |";
        grid[xrow][xcol]=n1;
        grid[yrow][ycol]=n2;
    cout<<newpage;
    if(n!=0)
        dicedisp(n);
    cout<<endl<<endl;
    for(int i=0;i<41;i++)
        cout<<"                                               "<<grid[i]<<endl;
}

void create()
{
    for(int i=0;i<100;i++)
    {
        node *newnode=new node();
        if(head==NULL)
            head=curr=newnode;
        else
        {
            curr->next=newnode;
            curr=newnode;
        }
    }
}
void jumping(int a, int b)
{
    node *temp1=head, *temp2=head;;
    while(a!=1)
    {
        temp1=temp1->next;
        a--;
    }
    while(b!=1)
    {
        temp2=temp2->next;
        b--;
    }
    temp1->jump=temp2;
}
void display()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int rolldice()
{
    srand(time(0));
    return ((rand()%6)+1);
}
void setsnakesandladders()
{
    jumping(4,25);
    jumping(13,46);
    jumping(33,49);
    jumping(50,69);
    jumping(42,63);
    jumping(62,81);
    jumping(74,92);
    jumping(40,3);
    jumping(27,5);
    jumping(43,18);
    jumping(54,31);
    jumping(65,45);
    jumping(76,58);
    jumping(99,2);
}
void tunnelsandpotholes()
{
    create();
    setsnakesandladders();
    node *player1, *player2;
    player1=player2=head;
    char roll='r';
    char n1, n2;
    cout<<"\n\nEnter Player 1 name letter: ";
    cin>>n1;
    cout<<"Enter Player 2 name letter: ";
    cin>>n2;
    while(player1!=curr || player2!=curr)
    {
        if(player1->data==100||player2->data==100)
            break;
        makegrid(player1->data,player2->data,0, n1, n2);
        while(roll=='r')
        {
            cout<<"\nTo roll dice press R: ";
            cin>>roll;
            if(roll!='r')
                return;
            int n=rolldice();
            player1=moving(player1,n);
            makegrid(player1->data,player2->data,n, n1, n2);
            if(player1->data==100||player2->data==100)
                break;
            cout<<"\nTo roll dice press R: ";
            cin>>roll;
            if(roll!='r')
                return;
            n=rolldice();
            player2=moving(player2,n);
            makegrid(player1->data,player2->data,n, n1, n2);
            if(player1->data==100||player2->data==100)
                break;
        }
    }
    if(player1->data==100)
        cout<<"\n\n     "<<n1<<" WINS!!!!!\n\n\n";
    else if(player2->data==100)
        cout<<"\n\n     "<<n2<<" WINS!!!!!\n\n\n";
}














static int num1=1;
static int num2=1;
string grid[39];


class OuterLinkedList
{
    public:
    int data;
    OuterLinkedList *onext;
    OuterLinkedList()
    {
        data=num1++;
        onext=NULL;
    }
}*ohead=NULL,*ocurr=NULL,*a=NULL,*b=NULL,*c=NULL,*d=NULL;

vector<OuterLinkedList*> v;

class InnerLinkedList
{
    public:
    int idata;
    InnerLinkedList *inext;
    InnerLinkedList()
    {
        idata=num2++;
        inext=NULL;
    }
}*ihead=NULL, *icurr=NULL,*ia=NULL,*ib=NULL,*ic=NULL,*id=NULL;

void oCreate()
{
    for(int i=1;i<=52;i++)
    {
        OuterLinkedList *newnode=new OuterLinkedList();
        if(ohead==NULL)
            ohead=ocurr=newnode;
        else
        {
            ocurr->onext=newnode;
            ocurr=ocurr->onext;
        }
        switch(i)
        {
            case 1: v.push_back(ocurr);
                break;
            case 14:v.push_back(ocurr);
                break;
            case 27:v.push_back(ocurr);
                break;
            case 40:v.push_back(ocurr);
                break;
            case 51:v.push_back(ocurr);
                break;
            case 12:v.push_back(ocurr);
                break;
            case 25:v.push_back(ocurr);
                break;
            case 38:v.push_back(ocurr);
                break;
        }
    }
    ocurr->onext=ohead;
}

void iCreate()
{
    for(int i=0;i<6;i++)
    {
        InnerLinkedList *newnode=new InnerLinkedList();
        if(ihead==NULL)
        {
            ihead=icurr=newnode;
        }
        else
        {
            icurr->inext=newnode;
            icurr=icurr->inext;
        }

    }
}

void placeplayerouter(OuterLinkedList *p, char x)
{
    int row, col;
    if(p==NULL)
    {
        switch (x)
        {
            case 'A':   row =6;
                        col=14;
                        break;
            case 'B':   row=6;
                        col=73;
                        break;
            case 'C':   row=31;
                        col=73;
                        break;
            case 'D':   row=31;
                        col=14;
                        break;
        }
    }
    else
    {
    if(p->data>=1&&p->data<=5)
    {
        row=15;
        col=8+(p->data-1)*5;
    }
    if(p->data>5&&p->data<12)
    {
        col=35;
        row=11-(p->data-6)*2;
    }
    if(p->data>=13&&p->data<19)
    {
        col=54;
        row=1+(p->data-13)*2;
    }
    if(p->data>=19&&p->data<25)
    {
        row=15;
        col=62+(p->data-19)*5;
    }
    if(p->data>25&&p->data<=31)
    {
        row=23;
        col=87-(p->data-26)*5;
    }
    if(p->data>31&&p->data<=37)
    {
        col=54;
        row=26+(p->data-32)*2;
    }
    if(p->data>38&&p->data<=44)
    {
        col=35;
        row=36-(p->data-39)*2;
    }
    if(p->data>44&&p->data<51)
    {
        row=23;
        col=28-(p->data-45)*5;
    }
    if(p->data==52)
    {
        row=15;
        col=3;
    }
    if(p->data==51)
    {
        row=19;
        col=3;
    }
    if(p->data==12)
    {
        row=1;
        col=44;
    }
    if(p->data==25)
    {
        row=19;
        col=87;
    }
    if(p->data==38)
    {
        row=36;
        col=44;
    }
    }
    grid[row][col]=x;
}

void placeplayerinner(InnerLinkedList *p, char x)
{
    int row, col;
    if(p!=NULL)
    {
        if(p->idata==6)
        {
            row=19;
            col=44;
        }
        else
        {
            switch(x)
            {
                case 'A':   row=19;
                            col=8+(p->idata-1)*5;
                            break;
                case 'B':   row=3+(p->idata-1)*2;
                            col=44;
                            break;
                case 'C':   row=19;
                            col=82-(p->idata-1)*5;
                            break;
                case 'D':   row=34-(p->idata-1)*2;
                            col=44;
                            break;
            }
        }
    }
    grid[row][col]=x;
}

void makegrid()
{
    string newpage="\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\n\n";
    grid[0]=grid[13]=grid[25]=grid[38]="|----------------------------------------------------------------------------------------|";

    for(int i=1;i<38;i++)
    {
        if(i%2!=0&&(i<=12||i>25))
            grid[i]="|                             |         |        |         |                             |";
        else if(i%2==0&&(i<=12))
            grid[i]="|                             |_ _ _ _ _|________|_ _ _ _ _|                             |";
        else if(i==14||i==15||i==16||i==18||i==19||i==20||i==24||i==22||i==23)
            grid[i]="|    |    |    |    |    |    |                            |    |    |    |    |    |    |";
        else if(i==17||i==21)
            grid[i]="|-----------------------------|                            |-----------------------------|";
        if(i%2==0&&(i>25))
            grid[i]="|                             |         |        |         |                             |";
        else if(i%2!=0&&(i>25))
            grid[i]="|                             |_ _ _ _ _|________|_ _ _ _ _|                             |";
    }
    grid[12]=grid[37]="|                             |         |        |         |                             |";
    cout<<newpage;
    if(ia==NULL)
        placeplayerouter(a,'A');
    else
        placeplayerinner(ia,'A');
    if(ib==NULL)
        placeplayerouter(b,'B');
    else
        placeplayerinner(ib,'B');
    if(ic==NULL)
        placeplayerouter(c,'C');
    else
        placeplayerinner(ic,'C');
    if(id==NULL)
        placeplayerouter(d,'D');
    else
        placeplayerinner(id,'D');
    for(int i=0;i<39;i++)
        cout<<"                                                           "<<grid[i]<<endl;
}

void moveplayer(int i, int n)
{
    int z=i;
    switch(n)
    {
        case 1:
                if((a==NULL)&&(ia==NULL)&&(i!=6))
                {
                    break;
                }
                else if((a==NULL)&&(ia==NULL)&&(i==6))
                    a=v.at(0);
                else if(a!=NULL)
                {
                    while((i>0)&&(a!=NULL))
                    {
                        if(a!=v.at(7))
                        {
                            a=a->onext;
                            i--;
                        }
                        else
                        {
                            a=NULL;
                            ia=ihead;
                            i--;
                        }
                    }
                    while(i>0)
                    {
                        ia=ia->inext;
                        i--;
                    }
                    if(a==b)
                        b=NULL;
                    if(a==c)
                        c=NULL;
                    if(a==d)
                        d=NULL;
                }
                else if((a==NULL)&&(ia!=NULL))
                {
                    if(ia->idata+i<=6)
                        while(i>=0)
                        {
                            ia=ia->inext;
                            i--;
                        }
                }
                break;
        case 2:
                if((b==NULL)&&(ib==NULL)&&(i!=6))
                {
                    break;
                }
                else if((b==NULL)&&(ib==NULL)&&(i==6))
                    b=v.at(2);
                else if(b!=NULL)
                {
                    while((i>0)&&(b!=NULL))
                    {
                        if(b!=v.at(1))
                        {
                            b=b->onext;
                            i--;
                        }
                        else
                        {
                            b=NULL;
                            ib=ihead;
                            i--;
                        }
                    }
                    while(i>0)
                    {
                        ib=ib->inext;
                        i--;
                    }
                    if(b==a)
                        a=NULL;
                    if(b==c)
                        c=NULL;
                    if(b==d)
                        d=NULL;
                }
                else if((b==NULL)&&(ib!=NULL))
                {
                    if(ib->idata+i<=6)
                        while(i>=0)
                        {
                            ib=ib->inext;
                            i--;
                        }
                }
                break;
        case 3:
                if((c==NULL)&&(ic==NULL)&&(i!=6))
                {
                    break;
                }
                else if((c==NULL)&&(ic==NULL)&&(i==6))
                    c=v.at(4);
                else if(c!=NULL)
                {
                    while((i>0)&&(c!=NULL))
                    {
                        if(c!=v.at(3))
                        {
                            c=c->onext;
                            i--;
                        }
                        else
                        {
                            c=NULL;
                            ic=ihead;
                            i--;
                        }
                    }
                    while(i>0)
                    {
                        ic=ic->inext;
                        i--;
                    }
                    if(c==a)
                        a=NULL;
                    if(c==b)
                        b=NULL;
                    if(c==d)
                        d=NULL;
                }
                else if((c==NULL)&&(ic!=NULL))
                {
                    if(ic->idata+i<=6)
                        while(i>0)
                        {
                            ic=ic->inext;
                            i--;
                        }
                }
                break;
        case 4:
                if((d==NULL)&&(id==NULL)&&(i!=6))
                {
                    break;
                }
                else if((d==NULL)&&(id==NULL)&&(i==6))
                    d=v.at(6);
                else if(d!=NULL)
                {
                    while((i>0)&&(d!=NULL))
                    {
                        if(d!=v.at(5))
                        {
                            d=d->onext;
                            i--;
                        }
                        else
                        {
                            d=NULL;
                            id=ihead;
                            i--;
                        }
                    }
                    while(i>0)
                    {
                        id=id->inext;
                        i--;
                    }
                    if(d==a)
                        a=NULL;
                    if(d==c)
                        c=NULL;
                    if(d==b)
                        b=NULL;
                }
                else if((d==NULL)&&(id!=NULL))
                {
                    if(id->idata+i<=6)
                        while(i>0)
                        {
                            id=id->inext;
                            i--;
                        }
                }
                break;
    }
    makegrid();
    if(n==1)
        cout<<"Player A turn\n";
    else if(n==2)
        cout<<"Player B turn\n";
    else if(n==3)
        cout<<"Player C turn\n";
    else if(n==4)
        cout<<"Player D turn\n";
    dicedisp(z);
    if(ia==icurr)
    {
        cout<<"\nA wins!!!!";
        exit(0);
    }
    else if(ib==icurr)
    {
        cout<<"\nB wins!!!!";
        exit(0);
    }
    else if(ic==icurr)
    {
        cout<<"\nC wins!!!!";
        exit(0);
    }
    else if(id==icurr)
    {
        cout<<"\nD wins!!!!";
        exit(0);
    }
    if(z==6)
    {
        char roll='r';
        cout<<"\nPress any key to continue/Press (N/n) to exit: ";
        cin>>roll;
        if(roll!='n')
        {
            int x=rolldice();
            dicedisp(x);
            moveplayer(x,n);
        }
        else
            exit(0);
    }

}

int playerturn(int n)
{
    n=(n%4)+1;
    return n;
}

void createlist()
{
    oCreate();
    iCreate();
}

void play()
{
    int n=4;
    char roll='r';
    makegrid();
    while((icurr!=ia)&&(icurr!=ib)&&(icurr!=ic)&&(icurr!=id))
    {
        cout<<"\nPress any key to continue/Press (N/n) to exit: ";
        cin>>roll;
        if(roll!='n')
        {
            n=playerturn(n);
            int x=rolldice();
            moveplayer(x,n);
        }
        else if(roll=='n')
            exit(0);
    }
}

void ludo()
{
    createlist();
    play();
}




int main()
{
    int x=1;
    char ans='y';
    while(ans=='y')
    {
        cout<<"                                                                             GAME ARCADE\n";
        cout<<"\n\n\n\nOptions:\n";
        cout<<"1. Tunnels And Potholes\n";
        cout<<"2. Ludo\n";
        cout<<"3. Exit!!\n\n";
        cin>>x;
        switch(x)
        {
            case 1: tunnelsandpotholes();
                    break;
            case 2: ludo();
                    break;
            case 3: exit(0);
            default:cout<<"Wrong Option\n";
        }
        cout<<"Do you want to play AGAIN!!!!!(y/n)\n";
        cin>>ans;
    }
    return 0;
}
