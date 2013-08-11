#include <stdio.h>
#include <math.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define W 2,2,
#define Z 0,0,

struct __attribute__((__packed__)) b { short A; int B,C,D,E,F,G,H,I,J,K,L,M,N; unsigned char O[921600]; };

int main() {
	char t[99]
	char *u;
	char *L;
	int f=socket(2,1,0);
	int S[16]={8192512};
	int E[512];
	int sr=0;
	int L=0;
	int j=0;
	int a[16384];
	int C=1;
	int B=16;
	int G[48]={2,Z W Z,2,Z Z 2,0,W W 0,W Z W Z W 0,W W 0,2,Z 2,0,W 0,2};
	float x=0;
	float y=0;
	float T=0;
	float bo=.7854;
	float r=1;
	float e;
	
	setsockopt(f,65535,4,&C,sizeof C);
	if(bind(f,(struct sockaddr*)S,16)||listen(f,1)) return 1;
	
	C=B/2;
	for(;j<64;++j) {
		int c=getchar();
		if(c!='#')continue;
		E[L++]=j%B-C;
		E[L++]=j/B-C;
	}
	
	struct b i={19778,sizeof i,0,sizeof i-sizeof i.O,40,640,480,1572865,0,sizeof i.O,3780,3780};

	void *K="HTTP/1.1 200 OK\nContent-Type: text/html;\n\n<body><img/></body><script>"
		"window.onkeydown=function(e){c=String.fromCharCode(e.keyCode)};window.onkeyup=function(){c='n'};"
		"var c='n',j=0;setInterval(function(){document.images[0].src=c+j++},33)</script>";
	
	while(1) {
		if((C=accept(f,0,0))<0) continue;
		
		read(C,u=t,sizeof t);
		while(*(u++)!=32); L=u++;
		while(*(++L)!=32); *L=0;
		
		int g=*u%10,k=*u/10;
		int v=g==3||g==8?-1:1;
		T+=-v*(k==6)*.1;
		float h=v*(k==8)*2;
		x+=h;
		y+=h;
		float U=sin(T),Y=cos(T);
		
		j=0;
		while(j<sizeof i.O)i.O[j++]=255;
		
		sr=v=0;
		while(v<L) {
			h=E[v++]-x;
			e=E[v++]-y;
			j=0;
			while(j<sizeof G) {
				a[sr++]=G[j++]-1+h*Y-e*U;
				a[sr++]=G[j++]-1+h*U+e*Y;
				a[sr++]=G[j++]-1;
			}
		}
		
		for(j=0;j<sr;j+=3) {
			g=(640*(a[j+1]+240)+a[j]+320)*3;
			if(g>=0&&g<sizeof i.O-3) memset(&i.O[g],0,3);
		}
		
		h=-bo;
		while(h<bo) {
			e=-bo;
			while(v<bo) {
			
				v+=.1;
			}
			h+=.1;
		}
		
		write(C,*u?(void*)&i:K,*u?sizeof i:244);
		close(C);
	}
	
	close(f);
}
