/* 
 * File:   main.cpp
 * Author: jaymc_000
 *
 * Created on February 8, 2015, 8:05 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

//global constants
const int COL=30;

//Function Prototypes
void menu();
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void def(int);

//Chapter 7 Prob 1
bool firstLast2 (int [],int);
//Chapter 7 Prob 2
int countNum2s(int [],int); 
//Chapter 7 Prob 3
void swapFrontBack (int [],int);
void swap(int &,int &);
//Chapter 7 Prog 4
float stdDevi(float [],int);
//Chapter 7 Prog 6
void filAray(int [],int);
void prntAry(const int [],int,int);
//void swap(int &,int &);//With xor's
int  minLst(int,int [],int);//Find minimum in the list
void selSort(int [],int);//With a swap function
void selcSrt(int [],int);//Without functions
//Chapter 7 Prog 10
void prog10prnt(const int [],int,int);
//Chapter 7 Prog 13
void filAray(char [][COL],int,char);
void prntAry(char [][COL],int);
void prntMap(char [][COL],int,char);
void inject(char [][COL],int,int,char);
void pause(int);
void gnrashn(char [][COL],char[][COL],int,char,char);
int  cntNbor(char [][COL],int,char,int,int);

//Execution begins here
int main(int argc, char** argv) {
    int inN;
    do{
        menu();
        cin>>inN;
        cout<<endl;
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            case 7:    problem7();break;
                default:def(inN);
            };
       }while(inN<8);
    return 0;
}

//Menu Function
void menu(){
    cout<<endl<<endl;
    cout<<"Type 1 for Chapter 7 Prob 1\n"
            "Type 2 for Chapter 7 Prob 2\n"
            "Type 3 for Chapter 7 Prob 3\n"
            "Type 4 for Chapter 7 Prog 4\n"
            "Type 5 for Chapter 7 Prog 6\n"
            "Type 6 for Chapter 7 Prog 10\n"
            "Type 7 for Chapter 7 Prog 13\n";
    cout<<"Type 8 to exit \n"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}

void problem1(){
    //Declare Variables
    bool isit2;
    int count=1;
    int count2=0;
    int arySize=0;
    int usrAray[10000];
    cout<<"I can find if your 2 is at the beginning or end.\n";
    cout<<"I will soon have you input an array of integers, and then\n"
            "find if the 2 is at the beginning or the end.\n"
            "Please tell me how many total integers you're inputting: ";
    cin>>arySize;
    cout<<"Now please input your array's integers.\n";
    for(int i=arySize;i>0;i--){
        cout<<"Integer "<<count<<": ";
        cin>>usrAray[count2];
        count++;
        count2++;
    }
    isit2=firstLast2(usrAray,arySize);
    if(isit2==true){
        cout<<"Either the first or last digit is 2.\n";
    }
    else if(isit2==false){
        cout<<"Neither the first nor last digit are 2.\n";
    }
}

void problem2(){
    int totarray;
    int namearray[10000];
    int count3=0;
    int count4=1;
    int num2s;
    cout<<"I can determine the number of 2s in an array of inputs.\n"
            "Please input how many entires you'll input followed by an array\n"
            "of integers and I can find how many '2's you've inputed.\n";
    cout<<"Total integer entries: ";
    cin>>totarray;
    for(int i=totarray-1;i>=0;i--){
        cout<<"Integer "<<count4<<": ";
        cin>>namearray[count3];
        count4++;
        count3++;
    }
    num2s=countNum2s(namearray,totarray);
    cout<<"The total number of 2s in your array is/are: "<<num2s<<".";
    
}

void problem3(){
    int count5=1;
    int count6=0;
    int arySize;
    int namearray[10000];
    cout<<"I can swap the first and last numbers of an array. Try inputting\n"
            "integers into an array. Start by telling me how many integers\n"
            "you would like to input.\n";
    cout<<"Number of total integers: ";
    cin>>arySize;
    if(arySize>1){
        count6=arySize-1;
        for(int i=arySize-1;i>=0;i--){
            cout<<"Integer "<<count5<<": ";
            cin>>namearray[count6];
            count5++;
            count6--;
        }
    }if(arySize<=1){
        cout<<"Your array is not going to be big enough to swap.";
    }
    swapFrontBack(namearray,arySize);
}

void problem4(){
    cout<<"I can find the standard deviation of a set of values, where n is the\n"
            "number of values you plan on inputting.\n";
    float x[100];
    float mean,stddevia;
    int i,n;
    cout<<"Enter value of n:";
    cin>>n;
    cout<<"Enter values separated by spaces:"<<endl;
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    stddevia=stdDevi(x,n);
    cout<<"The Standard Deviation is: "<<stddevia<<endl;
}

void problem5(){
    //Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables and arrays
    const int ROW=100000;
    int pFilRow=100,perLine=10;
    int array[ROW]={};
    //Fill the Arrays
    filAray(array,pFilRow);
    //Print the Arrays
    prntAry(array,pFilRow,perLine);
    //Sort using Selection Sort
    selcSrt(array,pFilRow);
    //selSort(array,pFilRow);
    //Print the sorted array
    prntAry(array,pFilRow,perLine);
    //Exit stage right
}

void problem6(){
    cout<<"This game requires two players: Player X and Player O.\n"
            "Player X and Player O take turns replacing numbers on a\n"
            "3x3 board with their respective letter until one of the players\n"
            "achieves 3 in a row. This game will not score itself, so it is\n"
            "up to the players to end the game when they wish. by inputting a\n"
            "number larger than 100.\n";
    int replacement;
    int count=1;
    int player1;
    int player2;
    int array[9]={1,2,3,4,5,6,7,8,9};
    prog10prnt(array,9,3);
    do{
        cout<<"Player X where would you like to place an X? ";
        cin>>player1;
        array[player1-1]='X';
        prog10prnt(array,9,3);
        cout<<"Player 0 where would you like to place an 0? ";
        cin>>player2;
        array[player2-1]='0';
        prog10prnt(array,9,3);
    }while(player2<100&&player1<100);
    cout<<"Thanks for playing!"<<endl;
}

void problem7(){
    //Declare the 2 Dimensional character array
    const int ROW=10;
    char array[ROW][COL]={};
    char brray[ROW][COL]={};
    int nGen=20;
    char d='*',nd='X';
    //Fill the array
    filAray(array,ROW,d);
    filAray(brray,ROW,d);
    //Print the array without the glider
    prntAry(array,ROW);
    //Inject the glider
    inject(array,1,10,nd);
    //Print the array with the glider
    prntAry(array,ROW);
    pause(1);
    //Game of life for generations stipulated
    for(int gen=1;gen<=nGen;gen++){
        //prntMap(array,ROW,'X');
        cout<<"Gen "<<gen<<endl;
        if(gen%2){
            gnrashn(array,brray,ROW,d,nd);
            prntAry(brray,ROW);
        }else{
            gnrashn(brray,array,ROW,d,nd);
            prntAry(array,ROW);
        }
        //prntMap(array,ROW,'X');
        pause(1);
    }
    //Exit the program
}

/*
 BELOW ARE THE FUNCTIONS FOR EACH PROBLEM
 */
//Chapter 7 Prob 1
bool firstLast2 (int a[],int b){
    if(a[0]==2){
        return true;
    }
    if(a[b-1]==2){
        return true;
    }
    else if(a[0]!=2||a[b-1]!=2){
        return false;
    }
}
//Chapter 7 Prob 2
int countNum2s(int c[],int d){
    int countnum=0;
    for(int i=d-1;i>=0;i--){
        if (c[i]==2){
            countnum++;
        }
    }
    return countnum;
}
//Chapter 7 Prob 3
void swapFrontBack (int a[],int b){
    swap(a[b-1],a[0]);
    for (int i = b - 1; i >= 0; i--) 
    cout << a[i] <<" ";
}

/*void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}*/
//Chapter 7 Prog 4
float stdDevi(float x[],int n){
    float std=0;
    float mean=0;
    for(int i=0;i<n;i++){
        mean=mean+x[i];
        mean=mean/n;
    }
    for(int i=0;i<n;i++){
        std=std+pow((x[i]-mean),2);
        std=std/n;
        std=sqrt(std);
        return std;
    }
}
//Chapter 7 Prog 6
void selcSrt(int a[],int n){
    //Swap as we go down the list
    for(int i=0;i<n-1;i++){
        //Declare and set the minimum
        int min=a[i],indx=i;
        //Loop and find the minimum in the list
        for(int j=i+1;j<n;j++){
            if(a[j]<min){
                min=a[j];
                indx=j;
            }
        }
        if(i!=indx){
            int temp=a[i];
            a[i]=a[indx];
            a[indx]=temp;
        }
    }
}

void selSort(int a[],int n){
    //Swap as we go down the list
    for(int i=0;i<n-1;i++){
        int indx=minLst(i,a,n);
        if(i!=indx)swap(a[i],a[indx]);
    }
}

int  minLst(int pos,int a[],int n){
    //Declare and set the minimum
    int min=a[pos],indx=pos;
    //Loop and find the minimum in the list
    for(int i=pos+1;i<n;i++){
        if(a[i]<min){
            min=a[i];
            indx=i;
        }
    }
    return indx;
}

void swap(int &a,int &b){
    //In place swap using logical exclusive or's
    a=a^b;
    b=a^b;
    a=a^b;
}

//Print perLine Columns for the array output by row
void prntAry(const int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//Randomly fill the array with 2-digit numbers
void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}
//Chapter 7 Prog 10
void prog10prnt(const int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        if(a[i]==88){ 
            
            cout<<"X"<<" ";
        }
        if(a[i]==48){ 
            cout<<"O"<<" ";
        }
        else if(a[i]!=88){ 
            cout<<a[i]<<" ";
        }
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
//Chapter 7 Prog 13
void gnrashn(char a[][COL],char b[][COL],int ROW,char d,char nd){
    for(int r=1;r<ROW-1;r++){
        for(int c=1;c<COL-1;c++){
            int nBr=cntNbor(a,ROW,nd,r,c);
            if(a[r][c]==nd&&nBr<=1)b[r][c]=d;
            else if(a[r][c]==nd&&(nBr==2||nBr==3))b[r][c]=nd;
            else if(a[r][c]==nd&&nBr>=4)b[r][c]=d;
            else if(a[r][c]==d&&nBr==3)b[r][c]=nd;
            else b[r][c]=a[r][c];
        }
    }
}

void prntMap(char a[][COL],int ROW,char nd){
    cout<<endl;
    for(int r=1;r<ROW-1;r++){
        cout<<" ";
        for(int c=1;c<COL-1;c++){
            int nBr=cntNbor(a,ROW,nd,r,c);
            cout<<nBr;
        }
        cout<<endl;
    }
}

int  cntNbor(char a[][COL],int ROW,char d,int r,int c){
    //Count your neighbors
    int count=0;
    //3 on Top
    if(a[r-1][c-1]== d)count++;
    if(a[r-1][c]  == d)count++;
    if(a[r-1][c+1]== d)count++;
    //2 in Middle
    if(a[r][c-1]  == d)count++;
    if(a[r][c+1]  == d)count++;
    //3 on Bottom
    if(a[r+1][c-1]== d)count++;
    if(a[r+1][c]  == d)count++;
    if(a[r+1][c+1]== d)count++;
    //Return the count
    return count;
}

void pause(int secs){
    //Start the timer
    int strt=static_cast<unsigned int>(time(0));
    int end;
    do{
        end=static_cast<unsigned int>(time(0));
    }while(secs>(end-strt));
}

void inject(char a[][COL],int pRow,int pCol,char c){
    a[pRow+0][pCol+1]=c;
    a[pRow+1][pCol+2]=c;
    a[pRow+2][pCol+0]=c;
    a[pRow+2][pCol+1]=c;
    a[pRow+2][pCol+2]=c;
}

void prntAry(char a[][COL],int ROW){
    cout<<endl;
    for(int r=0;r<ROW;r++){
        for(int c=0;c<COL;c++){
            cout<<a[r][c];
        }
        cout<<endl;
    }
    cout<<endl;
}

void filAray(char a[][COL],int ROW,char d){
    for(int r=0;r<ROW;r++){
        for(int c=0;c<COL;c++){
            if(r==0){
                a[r][c]=c%10+48;
            }else if(r==(ROW-1)){
                a[r][c]=c%10+48;
            }else if(c==0){
                a[r][c]=r%10+48;
            }else if(c==(COL-1)){
                a[r][c]=r%10+48;
            }else{
                a[r][c]=d;
            }
        }
    }
}