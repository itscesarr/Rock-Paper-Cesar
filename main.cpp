//
//  main.cpp
//  rps_basic
//
//  Created by Cesar Hernandez on 1/12/25.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
    srand(static_cast<unsigned int>(time(NULL)));
    int user = 0;
    int ai = 0;

    cout<<"Rock Paper Scissors Shoot!"<<endl;
    cout<<"1. Rock"<<endl;
    cout<<"2. Paper"<<endl;
    cout<<"3. Scissors"<<endl;

    cin>>user;

    if(user == 1){
        cout<<"you chose Rock"<<endl;
    }
    else if (user == 2){
        cout<<"you chose Paper"<<endl;
    }
    else {
        cout<<"you chose Scissors"<<endl;
    }

    ai = rand()%3+1;

     if(ai == 1){
        cout<<"ai chose Rock"<<endl;
    }
    else if (ai == 2){
        cout<<"ai chose Paper"<<endl;
    }
    else {
        cout<<"ai chose Scissors"<<endl;
    }

//match
    
if(user==ai)

    cout<<"it's a tie"<<endl;

    //user chose rock
    
    else if (user==1)
    {
    if(ai==2)
    {
        cout<<"you lose"<<endl;
    }
        
    if (ai==3)
    {
        cout<<"you win!"<<endl;
    }
}

//user chooses paper
else if (user==2)
{
    if (ai==1)
    {
        cout<<"you win!"<<endl;
    }
    if(ai==3)
    {
        cout<<"you lose"<<endl;
    }
}

//user chooses scissors

else if (user == 3)
{
    if(ai==1)
    {
        cout<<"you lose"<<endl;
    }
    if (ai == 2)
    {
        cout<<"you win"<<endl;
    }
}
    return 0;
}
