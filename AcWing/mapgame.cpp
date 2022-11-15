#include<bits/stdc++.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#define random(a,b) (rand()%(b-a)+a)
using namespace std;
char mp[105][105],xs[105][105];
int bs;
double ms[105];
bool yzmp[105][105];
int k,x,y,n;
clock_t start_time;
char ch;
const int tag[5][2]={{0,1},{1,0},{-1,0},{0,-1}};
void Boom(int,int);
void print(string);
void color(int);
void HideCursor(bool);
void head();
void show();
void Game();
bool Map();
bool Maph();
void p(int);
void hseanshu();
void Save_Data();
void Save_Data(){
	freopen("data.txt","w",stdout);
	for (int i=1;i<=100;i++) printf("%.2lf\n",ms[i]);
	fclose(stdout);
}
void hseanshu(){
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);
	CursorInfo.bVisible = false;
	SetConsoleCursorInfo(handle, &CursorInfo);
}
void head(){
	system("cls");
	printf("\t\t\t迷宫\n");
	printf("--------------------------------------------------\n");
}
void HideCursor(bool Visible){
	CONSOLE_CURSOR_INFO Cursor;
	Cursor.bVisible = !Visible;
	Cursor.dwSize = sizeof(Cursor);
	HANDLE Hand = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorInfo(Hand, &Cursor);
}
void color(int a){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
void print(string s){
	for (int i=0;s[i]!='\0';i++){
		printf("%c",s[i]);
		Sleep(30);
	}
}
void show(){
	system("mode con lines=17 cols=51");
	head();
	print("本游戏由 我是好人&zhq 制作\n");
	Sleep(1000);
	print("用WASD移动哦!\n");
	Sleep(500);
	print("迷宫内永远笼罩着雾，只有在以你为中心的5*5的范围内才能勉强看得清...\n");
	print("你会被传送到第2行第2列...\n");
	print("迷宫内有各种道具，有不同的用处...\n");
	print("在迷宫的右下角，是生的希望...\n");
	print("旅行者，好好去探索吧！\n");
	Sleep(500);
	print("游戏内的字符意义:\n");Sleep(500);
	print("# : 墙,不可进入不可穿越\n");Sleep(500);
	print("o : 你自己\n");Sleep(500);
	print("* : 终点\n");Sleep(500);
	print("T : 炸弹，可以摧毁以'o'为中心的5*5的范围内所有'#'\n"); Sleep(500);
	print("\n记得一定要用退出游戏退出，不然分数会保存不了哦！\n");
	system("pause");
}
void menu(){
	start:
		system("mode con lines=9 cols=51");
		head();
		print(">>游戏说明\n");
		print("  开始游戏\n");
		print("  作者的个人主页\n");
		print("  退出游戏\n");
		printf("--------------------------------------------------\n");
		print("k选择,s确定");
		ch=_getch();k=1;
		while (ch!='s'){
			k++;
			if (k>4) k=1;
			system("cls");
			head();
			if (k==1) printf(">>游戏说明\n");
			else printf("  游戏说明\n");
			if (k==2) printf(">>开始游戏\n");
			else printf("  开始游戏\n");
			if (k==3) printf(">>作者的个人主页\n");
			else printf("  作者的个人主页\n");
			if (k==4) printf(">>退出游戏\n");
			else printf("  退出游戏\n");
			printf("--------------------------------------------------\n");
			printf("k选择,s确定");
			ch=_getch();
		}
		if (k==1){
			show();
			goto start;
		}
		else if (k==2){
			Game();
			goto start;
		}
		else if (k==3){
			system("start https://www.acwing.com/user/myspace/index/130081/");
			system("start https://www.luogu.com.cn/user/457666");
			system("start https://blog.csdn.net/yer_cas?type=blog");
			system("start https://iwo.im/?q=zhq");
			goto start;
		}
}
bool Maph(){
	int zijix=2,zijiy=2,zhondx=n-1,zhondy=n-1,sj;
	mp[2][2]='o';
	mp[n-1][n-1]='*';
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(mp[i][j]!='o'&&mp[i][j]!='*'){
				sj=random(0,10);
				if(sj==1||sj==2||sj==4||sj==8) mp[i][j]='#';
			}
		}
	}
}
bool Map(){
	Maph();
	int qdx,qdy,zdx,zdy,xx,yy;
	queue<pair<int,int> > q;
	memset(yzmp,0,sizeof yzmp);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(mp[i][j]=='o') qdx=i,qdy=j,yzmp[i][j]=1;
			if(mp[i][j]=='*') zdx=i,zdy=j;
			if(mp[i][j]=='#') yzmp[i][j]=1;
			if(mp[i][j]==' ') yzmp[i][j]=0;
		}
	}
	q.push(make_pair(qdx,qdy));
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		if(x==zdx&&y==zdy) return true;
		q.pop();
		for(int i=0;i<4;i++){
			xx=x+tag[i][0],yy=y+tag[i][1];
			if(xx>=1&&xx<=n&&yy>=1&&yy<=n&&yzmp[xx][yy]==0) yzmp[xx][yy]=1,q.push(make_pair(xx,yy));
		}
	}
	return false;
}
void p(int step){
	int xx=x-3,yy=y-3,xxx=x+3,yyy=y+3;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (mp[i][j]=='*') printf(" *");
			else if (i<xx||j<yy||i>xxx||j>yyy) printf(" ?");
			else if (mp[i][j]=='T') color(180),printf(" T"),color(191);
			else if (mp[i][j]=='o') color(177),printf(" o"),color(191);
			else if (mp[i][j]=='#') color(655),printf(" #"),color(191);
			else printf(" %c",mp[i][j]);
		}
		printf("\n");
	}
	clock_t now=clock();
	printf("你已经走了%.2lf秒\n",(double)(1.*now-start_time)/CLOCKS_PER_SEC);
	printf("退出游戏按E\n");
}
void Boom(int x,int y){
	for (int i=x-2;i<=x+2;i++){
		for (int j=y-2;j<=y+2;j++){
			if (i<1||j<1||i>n||j>n) continue;
			if (mp[i][j]=='#') mp[i][j]=' ';
		}
	}
	mp[x][y]=' ';
}
void Game(){
	system("mode con lines=26 cols=51");
	srand(time(NULL));
	head();
	print("旅行者(不要骂我抄袭原神!)，您所要闯荡的迷宫面积要多大呢?\n");
	Sleep(500);
	print("行列(大于9小于51，否则游戏将强制关闭):");
	char ch1=_getch();
	cout<<ch1;
	char ch2=_getch();
	cout<<ch2;
	if ((ch1-'0')*10+(ch2-'0')>50||(ch1-'0')*10+(ch2-'0')<10) exit(0);
	n=n=(ch1-'0')*10+(ch2-'0');
	head();
	print("正在加载地图......");
	printf("\n--------------------------------------------------\n");
	for (int i=0;i<=n+1;i++){
		for (int j=0;j<=n+1;j++) mp[i][j]=' ';
	}
	while (!Map()){
		for (int i=0;i<=n+1;i++){
			for (int j=0;j<=n+1;j++) mp[i][j]=' ';
		}
	}
	mp[n-1][n-1]='*';
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (mp[i][j]=='o'||mp[i][j]=='*') continue;
			int r=rand()%40;
			if (r==0) mp[i][j]='T';
		}
	}
	Sleep(1024);
	head();
	print("正在解压中......\n");
	for (int i=1;i<=6;i++){
		head();
		printf("正在解压中......\n");
		switch (i){
			case 1: printf("▁");break;
			case 2: printf("▁▂");break;
			case 3: printf("▁▂▃");break;
			case 4: printf("▁▂▃▅");break;
			case 5: printf("▁▂▃▅▆");break;
			case 6: printf("▁▂▃▅▆▇");break;
		}
		printf("\n--------------------------------------------------\n");
		Sleep(random(100,1000));
	}
	x=2;y=2;
	char ch;
	int xx,yy,step=0;
	if (n==10) system("mode con lines=26 cols=52");
	else if (n==11) system("mode con lines=27 cols=54");
	else if (n==12) system("mode con lines=28 cols=56");
	else if (n==13) system("mode con lines=29 cols=58");
	else if (n==14) system("mode con lines=30 cols=60");
	else if (n==15) system("mode con lines=31 cols=62");
	else if (n==16) system("mode con lines=32 cols=64");
	else if (n==17) system("mode con lines=33 cols=66");
	else if (n==18) system("mode con lines=34 cols=68");
	else if (n==19) system("mode con lines=35 cols=70");
	else if (n==20) system("mode con lines=36 cols=72");
	else if (n==21) system("mode con lines=37 cols=74");
	else if (n==22) system("mode con lines=38 cols=76");
	else if (n==23) system("mode con lines=39 cols=78");
	else if (n==24) system("mode con lines=40 cols=80");
	else if (n==25) system("mode con lines=41 cols=82");
	else if (n==26) system("mode con lines=42 cols=84");
	else if (n==27) system("mode con lines=43 cols=86");
	else if (n==28) system("mode con lines=44 cols=88");
	else if (n==29) system("mode con lines=45 cols=90");
	else if (n==30) system("mode con lines=46 cols=92");
	else if (n==31) system("mode con lines=47 cols=94");
	else if (n==32) system("mode con lines=48 cols=96");
	else if (n==33) system("mode con lines=49 cols=98");
	else if (n==34) system("mode con lines=50 cols=100");
	else if (n==35) system("mode con lines=51 cols=102");
	else if (n==36) system("mode con lines=52 cols=104");
	else if (n==37) system("mode con lines=53 cols=106");
	else if (n==38) system("mode con lines=54 cols=108");
	else if (n==39) system("mode con lines=55 cols=110");
	else if (n==40) system("mode con lines=56 cols=112");
	else if (n==41) system("mode con lines=57 cols=114");
	else if (n==42) system("mode con lines=58 cols=116");
	else if (n==43) system("mode con lines=59 cols=118");
	else if (n==44) system("mode con lines=60 cols=120");
	else if (n==45) system("mode con lines=61 cols=122");
	else if (n==46) system("mode con lines=62 cols=124");
	else if (n==47) system("mode con lines=63 cols=126");
	else if (n==48) system("mode con lines=64 cols=128");
	else if (n==49) system("mode con lines=65 cols=130");
	else if (n==50) system("mode con lines=66 cols=132");
	start_time=clock();
	while (!(x==n-1&&y==n-1)){
		ask:
			head();
			p(step);
			printf("--------------------------------------------------\n");
			ch=_getch();
			if (ch=='w'||ch=='W'){
				xx=x-1;yy=y;
				if (xx<1||yy<1||xx>n||yy>n||mp[xx][yy]=='#') goto ask;
				else{
					if (mp[xx][yy]=='T') Boom(xx,yy);
					mp[xx][yy]=mp[x][y],mp[x][y]=' ',x=xx,y=yy;
				}
				step++;
			}
			else if (ch=='a'||ch=='A'){
				xx=x;yy=y-1;
				if (xx<1||yy<1||xx>n||yy>n||mp[xx][yy]=='#') goto ask;
				else{
					if (mp[xx][yy]=='T') Boom(xx,yy);
					mp[xx][yy]=mp[x][y],mp[x][y]=' ',x=xx,y=yy;
				}
				step++;
			}
			else if (ch=='s'||ch=='S'){
				xx=x+1;yy=y;
				if (xx<1||yy<1||xx>n||yy>n||mp[xx][yy]=='#') goto ask;
				else{
					if (mp[xx][yy]=='T') Boom(xx,yy);
					mp[xx][yy]=mp[x][y],mp[x][y]=' ',x=xx,y=yy;
				}
				step++;
			}
			else if (ch=='d'||ch=='D'){
				xx=x;yy=y+1;
				if (xx<1||yy<1||xx>n||yy>n||mp[xx][yy]=='#') goto ask;
				else{
					if (mp[xx][yy]=='T') Boom(xx,yy);
					mp[xx][yy]=mp[x][y],mp[x][y]=' ',x=xx,y=yy;
				}
				step++;
			}
			else if (ch=='e'||ch=='E'){
				head();
				print("正在退出ing...");
				step++;
				return ;
			}
	}
	clock_t end_time=clock();
	if (ms[n]==0) ms[n]=(double)((1.*end_time-start_time)/CLOCKS_PER_SEC);
	else ms[n]=min(ms[n],(double)((1.*end_time-start_time)/CLOCKS_PER_SEC));
	head();
	printf("\n\n\n                         ");
	print("你一共走了");Sleep(500);
	printf("%.2lf",(double)((1.*end_time-start_time)/CLOCKS_PER_SEC));Sleep(500);
	print("秒");
	printf("\n                         ");
	print("真棒!(额)");
	Sleep(1000);
}
int main(){
	system("title 迷宫");
	srand(time(NULL));
	HideCursor(true);
	HWND hwnd=GetConsoleWindow();
	HMENU hmenu=GetSystemMenu(hwnd,false);
	RemoveMenu(hmenu,SC_CLOSE,MF_BYCOMMAND);
	LONG style=GetWindowLong(hwnd,GWL_STYLE);
	style &=~(WS_MINIMIZEBOX);
	SetWindowLong(hwnd,GWL_STYLE,style);
	SetWindowPos(hwnd,HWND_TOP,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE);
	ShowWindow(hwnd,SW_SHOWNORMAL);
	DestroyMenu(hmenu);
	ReleaseDC(hwnd,NULL);
	freopen("data.txt","r",stdin);
	for (int i=1;i<=100;i++) cin>>ms[i];
	fclose(stdin);
	hseanshu();
	menu();
	Save_Data();
	return 0;
}

