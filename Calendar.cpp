#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int qqqq=0;
asd: cout<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<"CALENDER"<<endl;
cout<<"TO FIND DAY OF A DATE PRESS 1"<<endl<<"TO FIND CALENDER OF A MONTH PRESS 2"<<endl<<"TO FIND CALENDER OF A YEAR PRESS 3"<<endl;
cin>>qqqq;
if(qqqq!=1&&qqqq!=2&&qqqq!=3){cout<<"WRONG INPUT"<<endl;goto asd;}
if(qqqq==1)
{abcd: cout<<"TO FIND THE DAY OF A DATE"<<endl;
cout<<"TYPE THE DATE IN FORMAT DD MM YYYY"<<endl;
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
cin>>a>>b>>c;
if(a<=0||b<=0||c<=0){cout<<"WRONG INPUT"<<endl;goto abcd;}
if(b>12){cout<<"WRONG INPUT"<<endl;goto abcd;}
if(b==1){if(a>31){cout<<"WRONG INPUT"<<endl;goto abcd;}}
if(b==2){int iii=0;
if (c%4==0){if (c%100!=0){iii=1;}
			else{if(c%400==0){iii=1;}}}
			if(iii==1&&a>29){cout<<"WRONG INPUT"<<endl;goto abcd;}
			if(iii==0&&a>28){cout<<"WRONG INPUT"<<endl;goto abcd;}}
if(b==3){if(a>31){cout<<"WRONG INPUT"<<endl;goto abcd;}}
if(b==4){if(a>30){cout<<"WRONG INPUT"<<endl;goto abcd;}}
if(b==5){if(a>31){cout<<"WRONG INPUT"<<endl;goto abcd;}}
if(b==6){if(a>30){cout<<"WRONG INPUT"<<endl;goto abcd;}}
if(b==7){if(a>31){cout<<"WRONG INPUT"<<endl;goto abcd;}}
if(b==8){if(a>31){cout<<"WRONG INPUT"<<endl;goto abcd;}}
if(b==9){if(a>30){cout<<"WRONG INPUT"<<endl;goto abcd;}}
if(b==10){if(a>31){cout<<"WRONG INPUT"<<endl;goto abcd;}}
if(b==11){if(a>30){cout<<"WRONG INPUT"<<endl;goto abcd;}}
if(b==12){if(a>31){cout<<"WRONG INPUT"<<endl;goto abcd;}}
d=c-1700;
e=d*365;
i=0;
x=1700;
while (x<c){if (x%4==0){if (x%100!=0){i=i+1;}
			else{if(x%400==0){i=i+1;}}}x=x+1;}
g=e+i;	
//fri=0,sat=1,sun=2,mon=3,tue=4,wed=5,thu=6
l=0;
if (c%4==0){if (c%100!=0){l=1;}
			else{if(c%400==0){l=1;}}}
if(l==0){if(b==1){m=0;}
if(b==2){m=31;}
if(b==3){m=59;}
if(b==4){m=90;}
if(b==5){m=120;}
if(b==6){m=151;}
if(b==7){m=181;}
if(b==8){m=212;}
if(b==9){m=243;}
if(b==10){m=273;}
if(b==11){m=304;}
if(b==12){m=334;}
}
if(l==1){if(b==1){m=0;}
if(b==2){m=31;}
if(b==3){m=60;}
if(b==4){m=91;}
if(b==5){m=121;}
if(b==6){m=152;}
if(b==7){m=182;}
if(b==8){m=213;}
if(b==9){m=244;}
if(b==10){m=274;}
if(b==11){m=305;}
if(b==12){m=335;}}
h=g+m;
o=h+a-1;p=o%7;
if (p==2){cout<<"SUNDAY"<<endl;}			
if (p==3){cout<<"MONDAY"<<endl;}
if (p==4){cout<<"TUESDAY"<<endl;}
if (p==5){cout<<"WEDNESDAY"<<endl;}
if (p==6){cout<<"THURSDAY"<<endl;}
if (p==0){cout<<"FRIDAY"<<endl;}
if (p==1){cout<<"SATURDAY"<<endl;}
}
if(qqqq==2){bcd: cout<<"TO FIND CALENDER OF A MONTH "<<endl<<"TYPE MONTH AND YEAR IN THE FORMAT MM YYYY"<<endl;
int t,z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,v,x,y;
cin>>q>>c;
if(q<=0||c<=0){cout<<"WRONG INPUT"<<endl;goto bcd;}
if(q>12){cout<<"WRONG INPUT"<<endl;goto bcd;}
a=1;
d=c-1700;
e=d*365;
i=0;
x=1700;
while (x<c){if (x%4==0){if (x%100!=0){i=i+1;}
			else{if(x%400==0){i=i+1;}}}x=x+1;}
g=e+i;	
//fri=0,sat=1,sun=2,mon=3,tue=4,wed=5,thu=6
l=0;
b=q;
if (c%4==0){if (c%100!=0){l=1;}
			else{if(c%400==0){l=1;}}}
if(l==0){if(b==1){m=0;}
if(b==2){m=31;}
if(b==3){m=59;}
if(b==4){m=90;}
if(b==5){m=120;}
if(b==6){m=151;}
if(b==7){m=181;}
if(b==8){m=212;}
if(b==9){m=243;}
if(b==10){m=273;}
if(b==11){m=304;}
if(b==12){m=334;}
}
if(l==1){if(b==1){m=0;}
if(b==2){m=31;}
if(b==3){m=60;}
if(b==4){m=91;}
if(b==5){m=121;}
if(b==6){m=152;}
if(b==7){m=182;}
if(b==8){m=213;}
if(b==9){m=244;}
if(b==10){m=274;}
if(b==11){m=305;}
if(b==12){m=335;}}
h=g+m;i=0;
o=h+a-1;p=o%7;
if(p==0){s=5;}if(p==1){s=6;}if(p==2){s=0;}if(p==3){s=1;}if(p==4){s=2;}if(p==5){s=3;}if(p==6){s=4;}
int oo=0;int yy=0;int io;
switch (q)
{case 1:cout<<' '<<' '<<' '<<' '<<"January"<<' '<<c<<endl;break;
case 2:cout<<' '<<' '<<' '<<' '<<"February"<<' '<<c<<endl;break;
case 3:cout<<' '<<' '<<' '<<' '<<"March"<<' '<<c<<endl;break;
case 4:cout<<' '<<' '<<' '<<' '<<"April"<<' '<<c<<endl;break;
case 5:cout<<' '<<' '<<' '<<' '<<"May"<<' '<<c<<endl;break;
case 6:cout<<' '<<' '<<' '<<' '<<"June"<<' '<<c<<endl;break;
case 7:cout<<' '<<' '<<' '<<"July"<<' '<<c<<endl;break;
case 8:cout<<' '<<' '<<' '<<"August"<<' '<<c<<endl;break;
case 9:cout<<' '<<' '<<' '<<"September"<<' '<<c<<endl;break;
case 10:cout<<' '<<' '<<' '<<"October"<<' '<<c<<endl;break;
case 11:cout<<' '<<' '<<' '<<"November"<<' '<<c<<endl;break;
case 12:cout<<' '<<' '<<' '<<"December"<<' '<<c<<endl;break;
}
cout <<'S'<<' '<<' '<<'M'<<' '<<' '<<'T'<<' '<<' '<<'W'<<' '<<' '<<'T'<<' '<<' '<<'F'<<' '<<' '<<'S'<<endl<<endl;
while (oo!=s){cout<<' '<<' '<<' ';oo=oo+1;yy=yy+1;}
if(q==1||q==3||q==5||q==7||q==8||q==10||q==12){io=32;}
if(q==2&&l==1){io=30;}
if(q==2&&l!=1){io=29;}
if(q==4||q==6||q==9||q==11){io=31;}
int pp=1;
while(pp<io){if(pp/10!=0) {cout<<pp<<' ';}else{cout<<pp<<' '<<' ';}pp=pp+1;yy=yy+1;if(yy%7==0){cout<<endl;}}}
if (qqqq==3){cd: cout<<"TO FIND CALENDER OF A YEAR"<<endl<<"TYPE YEAR IN FORMAT YYYY"<<endl;
int c;cin>>c;if(c<=0){cout<<"WRONG INPUT"<<endl;goto cd;} int q=1;while (q<13){int t,z,a,b,d,e,f,g,h,i,j,k,l,m,n,o,p,r,s,v,y,x;
b=q;
a=1;
d=c-1700;
e=d*365;
i=0;
x=1700;
while (x<c){if (x%4==0){if (x%100!=0){i=i+1;}
			else{if(x%400==0){i=i+1;}}}x=x+1;}
g=e+i;	
//fri=0,sat=1,sun=2,mon=3,tue=4,wed=5,thu=6
l=0;
if (c%4==0){if (c%100!=0){l=1;}
			else{if(c%400==0){l=1;}}}
if(l==0){if(b==1){m=0;}
if(b==2){m=31;}
if(b==3){m=59;}
if(b==4){m=90;}
if(b==5){m=120;}
if(b==6){m=151;}
if(b==7){m=181;}
if(b==8){m=212;}
if(b==9){m=243;}
if(b==10){m=273;}
if(b==11){m=304;}
if(b==12){m=334;}
}
if(l==1){if(b==1){m=0;}
if(b==2){m=31;}
if(b==3){m=60;}
if(b==4){m=91;}
if(b==5){m=121;}
if(b==6){m=152;}
if(b==7){m=182;}
if(b==8){m=213;}
if(b==9){m=244;}
if(b==10){m=274;}
if(b==11){m=305;}
if(b==12){m=335;}}
h=g+m;i=0;
o=h+a-1;p=o%7;if (x%4==0)if (x%100!=0){i=1;}
else{if(x%400==0){i=1;}}
if(p==0){s=5;}if(p==1){s=6;}if(p==2){s=0;}if(p==3){s=1;}if(p==4){s=2;}if(p==5){s=3;}if(p==6){s=4;}int oo=0;int yy=0;int io;
switch (q)
{case 1:cout<<' '<<' '<<' '<<' '<<"January"<<' '<<c<<endl;break;
case 2:cout<<' '<<' '<<' '<<' '<<"February"<<' '<<c<<endl;break;
case 3:cout<<' '<<' '<<' '<<' '<<"March"<<' '<<c<<endl;break;
case 4:cout<<' '<<' '<<' '<<' '<<"April"<<' '<<c<<endl;break;
case 5:cout<<' '<<' '<<' '<<' '<<"May"<<' '<<c<<endl;break;
case 6:cout<<' '<<' '<<' '<<' '<<"June"<<' '<<c<<endl;break;
case 7:cout<<' '<<' '<<' '<<"July"<<' '<<c<<endl;break;
case 8:cout<<' '<<' '<<' '<<"August"<<' '<<c<<endl;break;
case 9:cout<<' '<<' '<<' '<<"September"<<' '<<c<<endl;break;
case 10:cout<<' '<<' '<<' '<<"October"<<' '<<c<<endl;break;
case 11:cout<<' '<<' '<<' '<<"November"<<' '<<c<<endl;break;
case 12:cout<<' '<<' '<<' '<<"December"<<' '<<c<<endl;break;
}
cout <<'S'<<' '<<' '<<'M'<<' '<<' '<<'T'<<' '<<' '<<'W'<<' '<<' '<<'T'<<' '<<' '<<'F'<<' '<<' '<<'S'<<endl<<endl;
while (oo!=s){cout<<' '<<' '<<' ';oo=oo+1;yy=yy+1;}
if(q==1||q==3||q==5||q==7||q==8||q==10||q==12){io=32;}
if(q==2&&i==1){io=30;}
if(q==2&&i!=1){io=29;}
if(q==4||q==6||q==9||q==11){io=31;}
int pp=1;
while(pp<io){if(pp/10!=0) {cout<<pp<<' ';}else{cout<<pp<<' '<<' ';}pp=pp+1;yy=yy+1;if(yy%7==0){cout<<endl;}}cout<<endl<<endl;q=q+1;}}getch();}

int numberOfDays (int monthNumber, int year) 
{ 
    // January 
    if (monthNumber == 0) 
        return (31); 
  
    // February 
    if (monthNumber == 1) 
    { 
        // If the year is leap then February has 
        // 29 days 
        if (year % 400 == 0 || 
                (year % 4 == 0 && year % 100 != 0)) 
            return (29); 
        else
            return (28); 
    } 
  
    // March 
    if (monthNumber == 2) 
        return (31); 
  
    // April 
    if (monthNumber == 3) 
        return (30); 
  
    // May 
    if (monthNumber == 4) 
        return (31); 
  
    // June 
    if (monthNumber == 5) 
        return (30); 
  
    // July 
    if (monthNumber == 6) 
        return (31); 
  
    // August 
    if (monthNumber == 7) 
        return (31); 
  
    // September 
    if (monthNumber == 8) 
        return (30); 
  
    // October 
    if (monthNumber == 9) 
        return (31); 
  
    // November 
    if (monthNumber == 10) 
        return (30); 
  
    // December 
    if (monthNumber == 11) 
        return (31); 
} 
  
// Function to print the calendar of the given year 
void printCalendar(int year) 
{ 
    printf ("         Calendar - %d\n\n", year); 
    int days; 
  
    // Index of the day from 0 to 6 
    int current = dayNumber (1, 1, year); 
  
    // i --> Iterate through all the months 
    // j --> Iterate through all the days of the 
    //       month - i 
    for (int i = 0; i < 12; i++) 
    { 
        days = numberOfDays (i, year); 
  
        // Print the current month name 
        printf("\n  ------------%s-------------\n", 
               getMonthName (i).c_str()); 
  
        // Print the columns 
        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n"); 
  
        // Print appropriate spaces 
        int k; 
        for (k = 0; k < current; k++) 
            printf("     "); 
  
        for (int j = 1; j <= days; j++) 
        { 
            printf("%5d", j); 
  
            if (++k > 6) 
            { 
                k = 0; 
                printf("\n"); 
            } 
        } 
  
        if (k) 
            printf("\n"); 
  
        current = k; 
    } 
  
    return; 
} 

 for(y=0;y<height;y++)
            for(x=0;x<width;x++)
            {
               total = image[(y+1)*width+x+1];
               for(fy=0; fy < 3; fy++)
                 for(fx = 0; fx < 3; fx++)
                   total += image[(y+fy)*width+x+fx] * filter[fy*3+x];
              output[(y+1)*width+x+1] = clamp(total, 0, 255);

            }

 for(y=0;y<height;y++)
            for(x=0;x<width;x++)
            {
               total = image[(y+1)*width+x+1];
               for(fy=0; fy < 3; fy++)
                 for(fx = 0; fx < 3; fx++)
                   total += image[(y+fy)*width+x+fx] * filter[fy*3+x];
              output[(y+1)*width+x+1] = clamp(total, 0, 255);
v for(y=0;y<height;y++)
            for(x=0;x<width;x++)
            {
               total = image[(y+1)*width+x+1];
               for(fy=0; fy < 3; fy++)
                 for(fx = 0; fx < 3; fx++)
                   total += image[(y+fy)*width+x+fx] * filter[fy*3+x];
              output[(y+1)*width+x+1] = clamp(total, 0, 255);

            }
            }

Image loadImage(const char *filename)
{
    png::image<png::rgb_pixel> image(filename);
    Image imageMatrix(3, Matrix(image.get_height(), Array(image.get_width())));

    int h,w;
    for (h=0 ; h<image.get_height() ; h++) {
        for (w=0 ; w<image.get_width() ; w++) {
            imageMatrix[0][h][w] = image[h][w].red;
            imageMatrix[1][h][w] = image[h][w].green;
            imageMatrix[2][h][w] = image[h][w].blue;
        }
    }

    return imageMatrix;
}
