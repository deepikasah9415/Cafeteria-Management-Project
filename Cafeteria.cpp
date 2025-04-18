#include<iostream>
#include<string>
#include<ctime>
#include<windows.h>
using namespace std;

void showmenu();
void indianmeal();
void nonveg();
void snacks();
void desserts();
void specials();
void northindian();
void southindian();
void bill();
int ordercode; int quantity;
string allorder[100]; int j=0; int n1; int n2; int n3; int n4; int n5; int n6;
int totalquantity[100];
int totalorder[100];
float price[100];

class Login{
    private:
    string name;
    int number;
    public:
    void getdata(){
        cout<<"Enter your first name: ";
        cin>>name;
        cout<<"Enter your Phone no: ";
        cin>>number;
    }
    void showdata(){
        cout<<"YOUR ORDER ID IS: DI"<<number<<endl;
    }
};

int main(){
    cout<<"          WW       WW       WW  EEEEEEE  LL        CCCCC     OOOOOO     MM               MM   EEEEEEE "<<endl;
    cout<<"           WW     WW WW    WW   EE       LL       CC        OO    OO    MM MM         MM MM   EE      "<<endl;
    cout<<"            WW   WW   WW  WW    EEEEE    LL       CC        OO    OO    MM   MM     MM   MM   EEEEE   "<<endl;
    cout<<"             WW WW     WW WW    EE       LL       CC        OO    OO    MM     MM  MM    MM   EE      "<<endl;
    cout<<"               WW       WW      EEEEEEE  LLLLLLL   CCCCC     OOOOOO     MM       MM      MM   EEEEEEE "<<endl;

cout<<"\n\n\n\n\n                             **--------------------LOGIN--------------------**"<<endl;
cout<<"\n\n"<<endl;

Login l1;
l1.getdata();

cout<<"                                       * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
cout<<"                                       *                                                           *"<<endl;
cout<<"                                       *                      Welcome to                           *"<<endl;
cout<<"                                       *                                                           *"<<endl;
cout<<"                                       *                                                           *"<<endl;
cout<<"                                       *                 ~...DIVINE TREAT...~                      *"<<endl;
cout<<"                                       *                                                           *"<<endl;
cout<<"                                       *                                                           *"<<endl;
cout<<"                                       *     Count the memories, not the calories.......  :)       *"<<endl;
cout<<"                                       *                                                           *"<<endl;
cout<<"                                       * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

int n;
cout<<"Press 0 to show menu........."<<endl;
cin>>n;
if(n==0){
    showmenu();
}
else{
    cout<<"You didn't enter 0 !! ";
}

return 0;
} 

void showmenu(){
                    cout << "                       " << "    _____\n";
   				    cout << "                       " << "   /     \\   ____   ____    __ __\n";
   					cout << "                       " << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";
  					cout << "                       " << " /    Y    \\  ___/|   |   \\|  |  |\n";
  					cout << "                       " << " \\____|____/\\____>____|____|_____|\n\n";

cout << "\n\t\t\t+ ------------------------------ +" << endl;
cout << "\n\t\t\t| ------------------------------ |" << endl;
cout << "\n\t\t\t| 1) INDIAN MEAL                 |" << endl;
cout << "\t\t\t| 2) NON VEG MEAL                |" << endl;
cout << "\t\t\t| 3) SNACKS 'N' TREAT            |" << endl;
cout << "\t\t\t| 4) DESSERTS 'N' DRINKS         |" << endl;
cout << "\t\t\t| 5) DIVINE SPECIALS             |" << endl;
cout << "\n\t\t\t| ------------------------------ |" << endl;
cout << "\n\t\t\t+ ------------------------------ +\n\n\n" <<endl;

int choice,a;
cout<<"PLEASE ENTER YOUR CHOICE[1,2,3,4,5] : ";
cin>>choice;
if(choice==1){
    indianmeal();
}
else if(choice==2){
    nonveg();
}
else if(choice==3){
    snacks();
}
else if(choice==4){
    desserts();
}
else if(choice==5){
    specials();
}
else{
    cout<<"\nPLEASE ENTER APPROPRIATE CHOICE!";
    showmenu();
}
}

void indianmeal(){
    cout<<"\n\n\n\t\t\t...............INDIAN MEAL................"<<endl;
    cout<<"\n          1. NORTH INDIAN "<<endl;
    cout<<"          2. SOUTH INDIAN "<<endl;
    int choice1;
    cout<<"\n Enter your choice[1,2]:";
    cin>>choice1;
    cout<<"\n\n\n";
    if(choice1==1){
        northindian();
    }
    else if(choice1==2){
        southindian();
    }
    else{
        cout<<"\n PLEASE ENTER APPROPRIATE CHOICE!";
        indianmeal();
    }
}

void southindian(){

    cout<<"\t\t\t\t             * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"\t\t\t\t             *        SOUTH INDIAN MEAL        *"<<endl;
    cout<<"\t\t\t\t             * * * * * * * * * * * * * * * * * *"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #1 --------+\t\t\t +-------- ^-^ #2 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|      MASALA DOSA       |\t\t\t |       VEG UTTAPAM      |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.90.00     |\t\t\t |     PRICE: Rs.100.00   |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #3 --------+\t\t\t +-------- ^-^ #4 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|      IDLI SAMBHAR      |\t\t\t |       ONION VADA       |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.60.00     |\t\t\t |     PRICE: Rs.60.00    |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #5 --------+\t\t\t +-------- ^-^ #6 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|         UPMA           |\t\t\t |       CURD RICE        |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.70.00     |\t\t\t |     PRICE: Rs.150.00   |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;

    cout<<"\n\n";
    cout<<"How many items do you want to have from this section: ";
    cin>>n1;
    cout<<"\nWHAT WOULD YOU LIKE TO HAVE?....\n";
   
    for(int i=0; i<n1; i++){
        cout<<"\nEnter your choice: "; 
        cin>>ordercode;
        cout<<"Please enter quantity: ";
        cin>>quantity;
    

    if(ordercode==1){
        allorder[j]= "MASALA DOSA";
        totalquantity[j]=quantity;
        price[j]=90;
        totalorder[j]=quantity*90;
    }
   else if(ordercode==2){
        allorder[j]= "VEG UTTAPAM";
        totalquantity[j]=quantity;
        price[j]=100;
        totalorder[j]=quantity*100;
    }
    else if(ordercode==3){
        allorder[j]= "IDLI SAMBHAR";
        totalquantity[j]=quantity;
        price[j]=60;
        totalorder[j]=quantity*60;
    }
    else if(ordercode==4){
        allorder[j]= "ONION VADA";
        totalquantity[j]=quantity;
        price[j]=60;
        totalorder[j]=quantity*60;
    }
    else if(ordercode==5){
        allorder[j]= "UPMA";
        totalquantity[j]=quantity;
        price[j]=70;
        totalorder[j]=quantity*70;
    }
    else if(ordercode==6){
        allorder[j]= "CURD RICE";
        totalquantity[j]=quantity;
        price[j]=150;
        totalorder[j]=quantity*150;
    }
    else{
        cout<<"\nPLEASE ENTER VALID CHOICE!!";
        southindian();
    } 
    j++; 
    
}
int a1;
cout<<"\n\nWanna add more delicious??";
cout<<"\nPress [1] for 'YES' and [0] for 'NO': ";
cin>>a1;
if(a1==1){
    showmenu();
}
else if(a1==0){
    bill();
}
else{
    southindian();
}
}


 void northindian(){

    cout<<"\t\t\t             * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"\t\t\t             *         NORTH INDIAN MEAL       *"<<endl;
    cout<<"\t\t\t             * * * * * * * * * * * * * * * * * *"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #1 --------+\t\t\t +-------- ^-^ #2 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|      DAL MAKHANI       |\t\t\t |       SHAHI PANEER     |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.90.00     |\t\t\t |     PRICE: Rs.150.00   |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #3 --------+\t\t\t +-------- ^-^ #4 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|         MIX VEG        |\t\t\t |         CHHOLE         |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.80.00     |\t\t\t |     PRICE: Rs.100.00   |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #5 --------+\t\t\t +-------- ^-^ #6 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|       BUTTER NAAN      |\t\t\t |     LACCHA PARANTHA    |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.12.00     |\t\t\t |     PRICE: Rs.20.00    |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;

cout<<"\n\n";
cout<<"How many items do you want to have from this section: ";
    cin>>n2;
    cout<<"\nWHAT WOULD YOU LIKE TO HAVE?....\n";
   
    for(int i=0; i<n2; i++){
        cout<<"\nEnter your choice: "; 
        cin>>ordercode;
        cout<<"Please enter quantity: ";
        cin>>quantity;
    

    if(ordercode==1){
        allorder[j]= "DAL MAKHANI";
        totalquantity[j]=quantity;
        price[j]=90;
        totalorder[j]=quantity*90;
    }
   else if(ordercode==2){
        allorder[j]= "SHAHI PANEER";
        totalquantity[j]=quantity;
        price[j]=150;
        totalorder[j]=quantity*150;
    }
    else if(ordercode==3){
        allorder[j]= "MIX VEG";
        totalquantity[j]=quantity;
        price[j]=80;
        totalorder[j]=quantity*80;
    }
    else if(ordercode==4){
        allorder[j]= "CHHOLE";
        totalquantity[j]=quantity;
        price[j]=100;
        totalorder[j]=quantity*100;
    }
    else if(ordercode==5){
        allorder[j]= "BUTTER NAAN";
        totalquantity[j]=quantity;
        price[j]=12;
        totalorder[j]=quantity*12;
    }
    else if(ordercode==6){
        allorder[j]= "LACCHA PARANTHA";
        totalquantity[j]=quantity;
        price[j]=20;
        totalorder[j]=quantity*20;
    }
    else{
        cout<<"\nPLEASE ENTER VALID CHOICE!!";
        northindian();
    } 
    j++; 
    
}
    
int a2;
cout<<"\n\nWanna add more delicious??";
cout<<"\nPress [1] for 'YES' and [0] for 'NO': ";
cin>>a2;

if(a2==1){
    showmenu();
}
else if(a2==0){
   bill();
}
else{
    northindian();
}
}


void nonveg(){

    cout<<"\t\t\t             * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"\t\t\t             *            NON VEG MEAL         *"<<endl;
    cout<<"\t\t\t             * * * * * * * * * * * * * * * * * *"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #1 --------+\t\t\t +-------- ^-^ #2 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|     BUTTER CHICKEN     |\t\t\t |     CHICKEN BIRYANI    |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.400.00    |\t\t\t |     PRICE: Rs.250.00   |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #3 --------+\t\t\t +-------- ^-^ #4 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|        EGG CURRY       |\t\t\t |      CHICKEN WINGS     |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.90.00     |\t\t\t |     PRICE: Rs.300.00   |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #5 --------+\t\t\t +-------- ^-^ #6 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|      MUTTON KORMA      |\t\t\t |       FISH CURRY       |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.200.00    |\t\t\t |     PRICE: Rs.320.00   |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;


cout<<"\n\n";
cout<<"How many items do you want to have from this section: ";
    cin>>n3;
    cout<<"\nWHAT WOULD YOU LIKE TO HAVE?....\n";
   
    for(int i=0; i<n3; i++){
        cout<<"\nEnter your choice: "; 
        cin>>ordercode;
        cout<<"Please enter quantity: ";
        cin>>quantity;
    

    if(ordercode==1){
        allorder[j]= "BUTTER CHICKEN";
        totalquantity[j]=quantity;
        price[j]=400;
        totalorder[j]=quantity*400;
    }
   else if(ordercode==2){
        allorder[j]= "CHICKEN BIRYANI";
        totalquantity[j]=quantity;
        price[j]=250;
        totalorder[j]=quantity*250;
    }
    else if(ordercode==3){
        allorder[j]= "EGG CURRY";
        totalquantity[j]=quantity;
        price[j]=90;
        totalorder[j]=quantity*90;
    }
    else if(ordercode==4){
        allorder[j]= "CHICKEN WINGS";
        totalquantity[j]=quantity;
        price[j]=300;
        totalorder[j]=quantity*300;
    }
    else if(ordercode==5){
        allorder[j]= "MUTTON KORMA";
        totalquantity[j]=quantity;
        price[j]=200;
        totalorder[j]=quantity*200;
    }
    else if(ordercode==6){
        allorder[j]= "FISH CURRY";
        totalquantity[j]=quantity;
        price[j]=320;
        totalorder[j]=quantity*320;
    }
    else{
        cout<<"\nPLEASE ENTER VALID CHOICE!!";
        nonveg();
    } 
    j++; 
    
}
  
int a3;
cout<<"\n\nWanna add more delicious??";
cout<<"\nPress [1] for 'YES' and [0] for 'NO': ";
cin>>a3;

if(a3==1){
    showmenu();
}
else if(a3==0){
   bill();
}
else{
    nonveg();
}
}


void snacks(){

    cout<<"\t\t\t             * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"\t\t\t             *        SNACKS 'N' TREATS        *"<<endl;
    cout<<"\t\t\t             * * * * * * * * * * * * * * * * * *"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #1 --------+\t\t\t +-------- ^-^ #2 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|          SAMOSA        |\t\t\t |        VEG BURGER      |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.20.00     |\t\t\t |     PRICE: Rs.60.00    |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #3 --------+\t\t\t +-------- ^-^ #4 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t| NOODLES AND MACHURIAN  |\t\t\t |      CLASSIC PIZZA     |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.80.00     |\t\t\t |     PRICE: Rs.110.00   |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #5 --------+\t\t\t +-------- ^-^ #6 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|        VEG MOMOS       |\t\t\t |      CHILLI POTATO     |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.60.00     |\t\t\t |     PRICE: Rs.100.00   |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;

 cout<<"\n\n";
    cout<<"How many items do you want to have from this section: ";
    cin>>n4;
    cout<<"\nWHAT WOULD YOU LIKE TO HAVE?....\n";
   
    for(int i=0; i<n4; i++){
        cout<<"\nEnter your choice: "; 
        cin>>ordercode;
        cout<<"Please enter quantity: ";
        cin>>quantity;
    

    if(ordercode==1){
        allorder[j]= "SAMOSA";
        totalquantity[j]=quantity;
        price[j]=20;
        totalorder[j]=quantity*20;
    }
   else if(ordercode==2){
        allorder[j]= "VEG BURGER";
        totalquantity[j]=quantity;
        price[j]=60;
        totalorder[j]=quantity*60;
    }
    else if(ordercode==3){
        allorder[j]= "NOODLES AND MANCHURIAN";
        totalquantity[j]=quantity;
        price[j]=80;
        totalorder[j]=quantity*80;
    }
    else if(ordercode==4){
        allorder[j]= "CLASSIC PIZZA";
        totalquantity[j]=quantity;
        price[j]=110;
        totalorder[j]=quantity*110;
    }
    else if(ordercode==5){
        allorder[j]= "VEG MOMOS";
        totalquantity[j]=quantity;
        price[j]=60;
        totalorder[j]=quantity*60;
    }
    else if(ordercode==6){
        allorder[j]= "CHILLI POTATO";
        totalquantity[j]=quantity;
        price[j]=100;
        totalorder[j]=quantity*100;
    }
    else{
        cout<<"\nPLEASE ENTER VALID CHOICE!!";
        snacks();
    } 
    j++; 
    
}
int a4;
cout<<"\n\nWanna add more delicious??";
cout<<"\nPress [1] for 'YES' and [0] for 'NO': ";
cin>>a4;

if(a4==1){
    showmenu();
}
else if(a4==0){
   bill();
}
else{
    snacks();
}
}


void desserts(){

    cout<<"\t\t\t             * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"\t\t\t             *        DESSERTS 'N' DRINKS      *"<<endl;
    cout<<"\t\t\t             * * * * * * * * * * * * * * * * * *"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #1 --------+\t\t\t +-------- ^-^ #2 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|        ICECREAM        |\t\t\t |      CHOCO TRUFFLE     |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.50.00     |\t\t\t |     PRICE: Rs.70.00    |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #3 --------+\t\t\t +-------- ^-^ #4 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|   JALEBI + RASMALAI    |\t\t\t |       COLD COFFEE      |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.80.00     |\t\t\t |     PRICE: Rs.120.00   |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #5 --------+\t\t\t +-------- ^-^ #6 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|          TEA           |\t\t\t |       COLD DRINK       |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.30.00     |\t\t\t |     PRICE: Rs.50.00    |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;

cout<<"\n\n";
    cout<<"How many items do you want to have from this section: ";
    cin>>n5;
    cout<<"\nWHAT WOULD YOU LIKE TO HAVE?....\n";
   
    for(int i=0; i<n5; i++){
        cout<<"\nEnter your choice: "; 
        cin>>ordercode;
        cout<<"Please enter quantity: ";
        cin>>quantity;
    

    if(ordercode==1){
        allorder[j]= "ICECREAM";
        totalquantity[j]=quantity;
        price[j]=50;
        totalorder[j]=quantity*50;
    }
   else if(ordercode==2){
        allorder[j]= "CHOCO TRUFFLE";
        totalquantity[j]=quantity;
        price[j]=70;
        totalorder[j]=quantity*70;
    }
    else if(ordercode==3){
        allorder[j]= "JALEBI + RASMALAI";
        totalquantity[j]=quantity;
        price[j]=80;
        totalorder[j]=quantity*80;
    }
    else if(ordercode==4){
        allorder[j]= "COLD COFFEE";
        totalquantity[j]=quantity;
        price[j]=120;
        totalorder[j]=quantity*120;
    }
    else if(ordercode==5){
        allorder[j]= "TEA";
        totalquantity[j]=quantity;
        price[j]=30;
        totalorder[j]=quantity*30;
    }
    else if(ordercode==6){
        allorder[j]= "COLD DRINK";
        totalquantity[j]=quantity;
        price[j]=50;
        totalorder[j]=quantity*50;
    }
    else{
        cout<<"\nPLEASE ENTER VALID CHOICE!!";
        desserts();
    } 
    j++; 
    
}
int a5;
cout<<"\n\nWanna add more delicious??";
cout<<"\nPress [1] for 'YES' and [0] for 'NO': ";
cin>>a5;

if(a5==1){
    showmenu();
}
else if(a5==0){
   bill();
}
else{
    desserts();
}
}


void specials(){

    cout<<"\t\t\t             * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"\t\t\t             *           DIVINE SPEACIAL       *"<<endl;
    cout<<"\t\t\t             * * * * * * * * * * * * * * * * * *"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #1 --------+\t\t\t +-------- ^-^ #2 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    DIVINE SPL. THALI   |\t\t\t |         SUSHI          |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.250.00    |\t\t\t |     PRICE: Rs.300.00   |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;

cout<<"\n\n\n";
    cout<<"\t\t\t+-------- ^-^ #3 --------+\t\t\t +-------- ^-^ #4 --------+"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|        WAFFLES         |\t\t\t |         DIMSUMS        |"<<endl;
    cout<<"\t\t\t|                        |\t\t\t |                        |"<<endl;
    cout<<"\t\t\t|    PRICE: Rs.110.00    |\t\t\t |     PRICE: Rs.150.00   |"<<endl;
    cout<<"\t\t\t+------------------------+\t\t\t +------------------------+"<<endl;
cout<<"\n\n";
   cout<<"How many items do you want to have from this section: ";
    cin>>n6;
    cout<<"\nWHAT WOULD YOU LIKE TO HAVE?....\n";
   
    for(int i=0; i<n6; i++){
        cout<<"\nEnter your choice: "; 
        cin>>ordercode;
        cout<<"Please enter quantity: ";
        cin>>quantity;
    

    if(ordercode==1){
        allorder[j]= "DIVINE SPL. THALI";
        totalquantity[j]=quantity;
        price[j]=250;
        totalorder[j]=quantity*250;
    }
   else if(ordercode==2){
        allorder[j]= "SUSHI";
        totalquantity[j]=quantity;
        price[j]=300;
        totalorder[j]=quantity*300;
    }
    else if(ordercode==3){
        allorder[j]= "WAFFLES";
        totalquantity[j]=quantity;
        price[j]=110;
        totalorder[j]=quantity*110;
    }
    else if(ordercode==4){
        allorder[j]= "DIMSUMS";
        totalquantity[j]=quantity;
        price[j]=150;
        totalorder[j]=quantity*150;
    }
    else{
        cout<<"\nPLEASE ENTER VALID CHOICE!!";
        specials();
    } 
    j++; 
    
}
int a6;
cout<<"\n\nWanna add more delicious??";
cout<<"\nPress [1] for 'YES' and [0] for 'NO': ";
cin>>a6;

if(a6==1){
    showmenu();
}
else if(a6==0){
   bill();
}
else{
    specials();
}
}

void bill(){
    cout<<"\n\n"<<endl;
Login l2;
 l2.showdata();
cout << "\n\n";
			
			cout << "Generating your Bill ";
			
			for ( int a = 1; a <= 2; a ++)
			{
				Sleep(1500);
				cout << ".....";
				
			}
cout<<"\n\n";
cout<<"\t\t\t\t            - - - - - - - - - - - - - - - - - - - - -"<<endl;
cout<<"\t\t\t\t            -               DIVINE TREATS           -"<<endl;
cout<<"\t\t\t\t            - - - - - - - - - - - - - - - - - - - - -"<<endl;
cout<<"\n\nITEM           \t\tUNIT PRICE          \t\tQUANTITY              \t\tAMOUNT"<<endl;
int a;
a=n1+n2+n3+n4+n5+n6;
for(j=0; j<a; j++){
cout<<"\n\n"<<allorder[j]<<"    \t\t"<<price[j]<<"    \t\t"<<totalquantity[j]<<"    \t\t"<<totalorder[j]<<endl;
}
int total=0;
for(j=0; j<a; j++){
    total+=totalorder[j];
}
cout<<"\n\n\t\t\tYOUR TOTAL AMOUNT TO PAY IS "<<total;
cout<<"\n\n"<<endl;
cout<<"\t\t\t\t            * * * * * * * * * * * * * * * * * * * * *"<<endl;
cout<<"\t\t\t\t            *           THANKS FOR ORDERING         *"<<endl;
cout<<"\t\t\t\t            * * * * * * * * * * * * * * * * * * * * *"<<endl;
}






