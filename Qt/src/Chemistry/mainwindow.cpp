#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"QMessageBox"

#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<cstdlib>

using namespace std;


const int ElementSum=110;
const string ele[110] = {"H","He",
          "Li","Be","B","C","N","O","F","Ne",
          "Na","Mg","Al","Si","P","S","Cl","Ar",
          "K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr",
          "Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te","I","Xe",
          "Cs","Ba","La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb","Lu",
          "Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb","Bi","Po","At","Rn",
          "Fr","Ra","Ac","Th","Pa","U","Np","Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No","Lr","Rf","Ha",
          "Unh","Uns","Uno","Une","E"};

const int N=100;
int enumber;
int eline[N+1];
long equation[N+1][N+1];
int matnumber;
bool ceErr;
bool check;

const int max=300;
const int no_answer=1;
const int not_q=2;

int err;
bool next;
long e[101][101];
bool b;

long a[101][101];
int ln,xn;

bool known[101];//0...100
bool done[101];//0...100
int nz[101];//1...100
int last[101];//1...100
bool fit[101];//1...100

int mainlast,mainfirst;
int i,j,h,lp,sp,temp,temp2,spt;
int m;
int k1,k2;
bool changed;
int line1[101];//0...100
int line2[101];//0...100

long c[101][101];

string errEle;


QString s2q(const string &s)
{
return QString(QString::fromLocal8Bit(s.c_str()));
}
string q2s(const QString &s)
{
return string((const char *)s.toLocal8Bit());
}

/****************  CE  *********************************/

string copy(string src,int begin,int end){
    string tmp="";
    for(int i=begin;i<=end;i++)
        tmp+=src[i];
    return tmp;
}

void init(){
        matnumber=0;
        enumber=0;
        for(int i=0;i<=N;i++)
            for(int j=0;j<=N+1;j++)
                equation[i][j]=0;//fillchar(equation,sizeof(equation),0);
}

string inttostr(int a ){
   string temp;//temp:string;
   ostringstream oss;
   oss<<a;
   temp=oss.str();
   return temp;
}

string delPos(string s,int p){
    string temp="";
    for(int i=0;i<s.length();i++){
        if(i!=p)
            temp+=s[i];
    }
    return temp;
}

bool checkBrackets(string s){
    int tmp=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(')
            tmp++;
        if(s[i]==')')
            tmp--;
        if(tmp==-1)
            return 0;
    }

    if(tmp!=0)
        return 0;
    else
        return 1;

}

string killbrackets(string d){
    int i,j,k,l,m,n,q,r;//i,j,k,l,m,n,q,r:integer;
    string temp;
    i=-1;
    for(int tmp=0;tmp<d.length();tmp++){
        if(d[tmp]==')'){
            i=tmp;
            break;
        }
    }
    while(i>0){
        j=i-1;//j:=i-1;
        while((j>=0) && (d[j]!='(')) j=j-1;//j=j-1;<>是不等于
        temp="";
        for(int tmp=i+1;tmp<d.length();tmp++){
            if(d[tmp]>='0'&&d[tmp]<='9'){
                temp+=d[tmp];
            }
            else
                break;
        }
        r=temp.length();
        if(temp.length()>0){
            istringstream istring(temp);
            istring>>l;
        }else
            l=1;
        k=j;
        d=delPos(d,j);
        while(d[k]!=')'){
            if(d[k+1]>='a'&&d[k+1]<='z') k=k+1;
            temp="";
            for(int tmp=k+1;tmp<d.length();tmp++){
                if(d[tmp]>='0'&&d[tmp]<='9'){
                    temp+=d[tmp];
                }else
                    break;
            }
            m=temp.length();
            if(temp.length()>0){
                istringstream istring(temp);
                istring>>n;
            }else
                n=1;
            n=n*l;
            d = copy(d,0,k)+inttostr(n)+copy(d,k+m+1,d.length()-1);
            k=k+inttostr(n).length()+1;
        }
        d=copy(d,0,k-1)+copy(d,k+r+1,d.length()-1);
        i=-1;
        for(int tmp=0;tmp<d.length();tmp++){
            if(d[tmp]==')'){
                i=tmp;
                break;
            }
        }
    }
    return d;
}

string killSpace(string s){
    string tmp="";
    for(int i=0;i<s.length();i++){
        if(s[i]!=' ')
            tmp+=s[i];
    }
    return tmp;
}

bool isEqual(string a,string b){
    if(a.length()==b.length()){
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i])
                return 0;
        }
        return 1;
    }else
        return 0;
}

void getone(string s,bool left){
    int i,j,k,start;
    string n=s;
    string enow;
    string num;
    bool minus;
    matnumber++;
    do{
        enow = copy(n,0,1);
        if(!(enow[1]<='z'&&enow[1]>='a')){
            string tmp="";
            tmp+=enow[0];
            enow=tmp;
            n=copy(n,1,n.length()-1);
        }else
            n=copy(n,2,n.length()-1);
        if(n.length()!=0){
            start=0;
            minus=false;
            i=start;
            while((n.length()>i) && (n[i]<='9'&&n[i]>='0'))
                i=i+1;
            i=i-1;
            if(i>start-1){
                num=copy(n,start,i);
                n=copy(n,i+1,n.length()-1);
                istringstream istring(num);
                istring>>j;
            }else
                j=1;
        }else
            j=1;
        k=0;
        while(!((k>=ElementSum) || (isEqual(ele[k],enow))))
            k++;
        if(k>=ElementSum){
            errEle=enow;
            ceErr=true;
            return;
        }else{
            i=0;
            do{
                i++;
            }while(!((i>enumber) || (eline[i]==k)));
            if(i>enumber){
                enumber=i;
                eline[i]=k;
            }
            if(left)
                equation[i][matnumber]+=j;
            else
                equation[i][matnumber]-=j;
        }
    }while(n.length()!=0);

}

int minPublic(int a1,int a2){
    int a,b;
    if((a1==0)||(a2==0)){
        return 0;
    }
    a=abs(a1);
    b=abs(a2);
    int min, max;
    int r;
    max=a>b?a:b;
    min=a<b?a:b;
    if(max%min==0)
        return max;
    while(max%min!=0){
        r=max%min;
        max=min;
        min=r;
    }
    return a*b/min;
}

int maxPublic(int a1,int a2){
    int a,b;
    if(a1==0)
        return a2;
    if(a2==0)
        return a1;
    a=abs(a1);
    b=abs(a2);
    int min, max;
    int r;
    max=a>b?a:b;
    min=a<b?a:b;
    if(max%min==0)
        return min;
    while(max%min!=0){
        r=max%min;
        max=min;
        min=r;
    }
    return min;
}

void getkey(long a[101][101]){
    int lp;
    bool known2[101];//0...100

    for(int n=0;n<101;n++)
        known2[n]=known[n];

    for(lp=1;lp<=ln;lp++){
        if((!done[lp])&&(nz[lp]==1)){
            temp=a[lp][0]/a[lp][last[lp]];
            if(temp*a[lp][last[lp]]!=a[lp][0]){
                err=not_q;
                return;
            }
            if(known2[last[lp]]&&(a[0][last[lp]]!=temp)){
                err=no_answer;
                return;
            }
            known2[last[lp]]=true;
            done[lp]=true;
            a[0][last[lp]]=temp;
        }
    }
    for(int n=0;n<101;n++)
        known[n]=known2[n];
    done[0]=true;
    for(lp=1;lp<=ln;lp++)
        done[0]=(done[0]&&done[lp]);
}

void cal(long d[101][101]){
    int i,j;
    for(i=1;i<=xn;i++){
        if(known[i]){
            for(j=1;j<=ln;j++){
                d[j][0]=d[j][0]-d[j][i]*d[0][i];
                d[j][i]=0;
            }
        }
    }
}

void easy(long a[101][101]){
    int i,j,h,lp,sp,m;

    mainlast=xn;
    temp=0;
    while((temp<2)&&(mainlast>0)){
        temp=0;
        for(i=1;i<=ln;i++)
            if(a[i][mainlast]!=0)
                temp++;
        if(temp<2)
            mainlast--;
    }
    for(lp=1;lp<=ln;lp++){
        m=maxPublic(a[lp][0],a[lp][1]);
        for(h=2;h<=xn;h++)
            m=maxPublic(m,a[lp][h]);
        if(a[lp][0]<0)
            m=-m;
        if(m!=0)
            for(h=0;h<=xn;h++)
                a[lp][h]=a[lp][h]/m;
    }
    for(i=1;i<=ln;i++){
        temp=xn;
        for(j=1;j<=xn;j++)
            if(a[i][j]==0)
                temp--;
        nz[i]=temp;
        j=xn;
        while((a[i][j]==0)&&(j>0))
            j--;
        if(j==0){
            if(a[i][0]==0){
                done[i]=true;
            }else{
                err=no_answer;
                return;
            }
        }
        last[i]=j;
    }
    if(mainlast>0){
        changed=true;
        while(changed){
            changed=false;
            for(lp=1;lp<=ln;lp++){
                if(!done[lp]){
                    temp=0;
                    spt=0;
                    for(sp=1;sp<=ln;sp++){
                        m=mainlast;
                        while(a[lp][m]==0)
                            m--;
                        fit[sp]=(lp!=sp)&&(!done[sp])&&((last[lp]==last[sp])||((last[lp]>mainlast)&&(m==last[sp])));
                        if(fit[sp]){
                            if(last[lp]==last[sp]){
                                temp2=minPublic(a[lp][last[lp]],a[sp][last[sp]]);
                                if((temp==0)||((temp2>0)&&(temp2<temp))){
                                    spt=sp;
                                    temp=temp2;
                                }
                            }else{
                                m=mainlast;
                                while(a[lp][m]==0)
                                    m--;
                                temp2=minPublic(a[lp][m],a[sp][m]);
                                if((temp==0)||((temp2>0)&&(temp2<temp))){
                                    spt=sp;
                                    temp=temp2;
                                }
                            }
                        }
                    }
                    if(spt>0){
                        sp=spt;
                        if(last[lp]<=mainlast)
                            i=last[lp];
                        else{
                            i=mainlast;
                            while(a[lp][i]==0)
                                i--;
                        }
                        {
                            for(j=0;j<=xn;j++){
                                line1[j]=a[lp][j];
                                line2[j]=a[sp][j];
                            }
                            m=minPublic(line1[i],line2[i]);
                            k1=m/line1[i];
                            k2=m/line2[i];
                            for(h=0;h<=xn;h++){
                                line1[h]=k1*line1[h];
                                line2[h]=k2*line2[h];
                                line2[h]=line1[h]-line2[h];
                            }
                            temp=xn;
                            for(h=1;h<=xn;h++)
                                if(line2[h]==0)
                                    temp--;
                            h=mainlast+1;
                            do{
                                h--;
                            }while(!(line1[h]==0)^(line2[h]==0));
                            if(line2[h]==0){
                                changed=true;
                                for(h=0;h<=xn;h++)
                                    a[lp][h]=line2[h];
                                nz[lp]=temp;
                                if(temp==0){
                                    if(line2[0]==0)
                                        done[lp]=true;
                                    else{
                                        err=no_answer;
                                        return;
                                    }
                                }
                                h=last[lp];
                                while((a[lp][h]==0)&&(h>0))
                                    h--;
                                last[lp]=h;
                                m=maxPublic(a[lp][0],a[lp][1]);
                                for(h=2;h<=xn;h++)
                                    m=maxPublic(m,a[lp][h]);
                                if(a[lp][0]<0)
                                    m=-m;
                                if(m!=0){
                                    for(h=0;h<=xn;h++)
                                        a[lp][h]=a[lp][h]/m;
                                }
                                temp=0;
                                while((temp<2)&&(mainlast>0)){
                                    temp=0;
                                    for(h=1;h<=ln;h++)
                                        if(a[h][mainlast]!=0)
                                            temp++;
                                    if(temp<2)
                                        mainlast--;
                                }
                                if(mainlast==0){
                                    err=0;
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    err=0;
}

void stepon(){
    //label next
    int i,j,g;
    bool done1[101];

    i=1;
    while((i<=xn)&&(known[i]))
        i++;
    if(i>xn)
        return;
    g=a[0][i];
    for(int n=0;n<101;n++)
        done1[n]=done[n];

    do{
        next:
        known[i]=true;
        g++;
        for(int n=0;n<101;n++)
            for(int k=0;k<101;k++)
                c[n][k]=a[n][k];
        c[0][i]=g;
        cal(c);
        easy(c);
        if(err!=0){
            for(int n=0;n<101;n++)
                done[n]=done1[n];

            goto next;
        }
        getkey(c);
        if(done[0]){
            for(j=1;j<=xn;j++)
                a[0][j]=c[0][j];
            err=0;
            return;
        }
        if(err==0)
            stepon();
        if(g>300){
            err=no_answer;
            return;
        }
        for(int n=0;n<101;n++)
            done[n]=done1[n];

    }while(1);
}

void solve(){
    for(i=1;i<=ln;i++)
        done[i]=false;
    for(i=1;i<=xn;i++)
        known[i]=false;
    easy(a);
    getkey(a);
    if((done[0]) || (err!=0))
        return;
    stepon();
    return;
}

void solvetest(){
     err=0;
     for(int n=0;n<101;n++)
            for(int k=0;k<101;k++)
                a[n][k]=equation[n][k];
     ln=enumber;
     xn=matnumber;
     solve();

     if(err>0)
         //cout<<"Error: "<<err<<endl;
     b=true;
     for(err=1;err<=matnumber;err++)
         b = b && (a[0][err]==0);
     if(b){
         solve();
          for(err=1;err<=matnumber;err++)
              b = b && (a[0][err]==0);
          if(b)
              ;//cout<<" I can''t work it out!\n";
     }

}

bool noEqual(string s ){
    for(int i=0;i<s.length();i++){
        if((s[i]=='=')&&(i!=s.length()-1)&&(i!=0))
            return 0;
    }
    return 1;
}

string ce(string s){ //配平器主程序

    vector<string> l2;//存放等号左边反应物原始数据
    vector<string> r2;//存放等号右边生成物原始数据
    vector<string> l;//存放等号左边反应物处理后数据（去括号）
    vector<string> r;//存放等号右边生成物处理后数据（去括号）

    init();

    s=killSpace(s);//对输入字符串去空格

    if(noEqual(s)){
        string error;
        ceErr = 1;
        return error="要输入方程式啊喂！！\n你这是什么东东？！";
    }

    string tmp="";int i;
    for(i=0;i<s.length();i++){//提取原始反应物
        if(s[i]=='+'){
            l2.push_back(tmp);
            tmp="";
        }else if(s[i]=='='){
            i++;
            l2.push_back(tmp);
            tmp="";
            break;
        }else
            tmp+=s[i];
    }

    for(;i<s.length();i++){//提取原始生成物
        if(s[i]=='+'){
            r2.push_back(tmp);
            tmp="";
        }else if(i==s.length()-1){
            tmp+=s[i];
            r2.push_back(tmp);
        }else
            tmp+=s[i];
    }

    check=checkBrackets(s);//检验原始方程式括号是否规范

    if(!check)
        return s;

    s=killbrackets(s);//对原始方程式进行去括号处理

    tmp="";
    for(i=0;i<s.length();i++){ //提取处理后反应物
        if(s[i]=='+'){
            l.push_back(tmp);
            tmp="";
        }else if(s[i]=='='){
            i++;
            l.push_back(tmp);
            tmp="";
            break;
        }else
            tmp+=s[i];
    }

    for(;i<s.length();i++){ //提取处理后生成物
        if(s[i]=='+'){
            r.push_back(tmp);
            tmp="";
        }else if(i==s.length()-1){
            tmp+=s[i];
            r.push_back(tmp);
        }else
            tmp+=s[i];
    }

    for(int n=0;n<l.size();n++){ //扫描反应物生成线性方程组矩阵
        getone(l[n],true);
        if(ceErr){
            string ss="哪有"+errEle+"这种元素啊喂！\n去给我看看元素周期表啊混蛋！！\n";
            return ss;
        }
    }

    for(int n=0;n<r.size();n++){ ////扫描生成物生成线性方程组矩阵
        getone(r[n],false);
        if(ceErr){
            string ss="哪有"+errEle+"这种元素啊喂！\n去给我看看元素周期表啊混蛋！！\n";
            return ss;
        }
    }

    solvetest(); //解矩阵，获得反应物与生成物系数
    ostringstream oStr;

    ////////////////原始反应物、生成物加上系数输出//////////////////////
    int matCount=1;
    for(int lCount=1;lCount<=l2.size();lCount++){
        if(a[0][matCount]==1)
            oStr<<l2[lCount-1]<<" ";
        else
            oStr<<"["<<a[0][matCount]<<"]"<<l2[lCount-1]<<" ";
        if(lCount!=l2.size())
            oStr<<"+ ";
        if(a[0][matCount]==0){
            ceErr=1;
            return "输入的方程式不守恒呦~\n";
        }
        matCount++;
    }
    oStr<<"= ";
    for(int rCount=1;rCount<=r2.size();rCount++){
        if(a[0][matCount]==1)
            oStr<<r2[rCount-1]<<" ";
        else
            oStr<<"["<<a[0][matCount]<<"]"<<r2[rCount-1]<<" ";
        if(rCount!=r2.size())
            oStr<<"+ ";
        if(a[0][matCount]==0){
            ceErr=1;
            return "输入的方程式不守恒呦~\n";
        }
        matCount++;
    }

    string outPut;
    outPut=oStr.str();

    return outPut;


}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_concernBtn_clicked()
{
    myKeyBD.setFixedSize(755,613);
    myKeyBD.setWindowFlags(Qt::FramelessWindowHint);
    myKeyBD.setAttribute(Qt::WA_TranslucentBackground, true);
    myKeyBD.setEdit(ui->inputEdit);
    myKeyBD.show();
}

void MainWindow::on_solveBtn_clicked()
{
    string input = q2s(ui->inputEdit->text());
    string output = ce(input);
    if(ceErr){
        warnning.showWarnning(s2q(output));
        ceErr=0;
        ui->outputEdit->setText(tr(""));
    }else if(!check){
        warnning.showWarnning(s2q(" 括号不对啦!\n再检查一下！！"));
        check=1;
        ui->outputEdit->setText(tr(""));
    }else
        ui->outputEdit->setText(s2q(output));
}

void MainWindow::on_helpBtn_clicked()
{
    helpDlg.setFixedSize(732,845);
    helpDlg.setWindowFlags(Qt::FramelessWindowHint);
    helpDlg.setAttribute(Qt::WA_TranslucentBackground, true);
    helpDlg.show();
}



//窗口拖动
void MainWindow::mousePressEvent(QMouseEvent *e)
{
    last = e->globalPos();
}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();

    last = e->globalPos();
    move(x()+dx, y()+dy);
}

void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{
    int dx = e->globalX() - last.x();
    int dy = e->globalY() - last.y();

    move(x()+dx, y()+dy);
}

void MainWindow::on_cancelBtn_clicked()
{
    myKeyBD.close();
    warnning.close();
    helpDlg.close();
}
