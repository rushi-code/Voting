
#include<iostream>
using namespace std;

#define CANDIDATE_COUNT

#define CANDIDATE1 "Candidate A"
#define CANDIDATE2 "Candidate B"
#define CANDIDATE3 "Candidate C"
#define CANDIDATE4 "Candidate D"

int votesC1 = 0;
int votesC2 = 0;
int votesC3 = 0;
int votesC4 = 0;
int NOTA = 0;

void CastYourVote()
{
    int choice = 0;
    cout<<"\n\n ----------------Please Choose your Candidate---------------\n\n";
    cout<<"\n 1."<<CANDIDATE1<<"\n";
    cout<<"\n 2."<<CANDIDATE2<<"\n";
    cout<<"\n 3."<<CANDIDATE3<<"\n";
    cout<<"\n 4."<<CANDIDATE4<<"\n";
    cout<<"\n 5.None of The Above (NOTA)"<<"\n";

    cout<<"\n\n Enter Your Choice (1 - 4) : ";
    cin>>choice;

switch(choice)
{
    case 1: votesC1++;
     break;

    case 2: votesC2++;
     break;

    case 3: votesC3++;
     break;

    case 4: votesC4++;
    break;

    case 5: NOTA++;
    break;

    default: printf("\n Error: Wrong Choice !! Please retry");
             getchar();
}

cout<<"\n Thanks for voting\n\n";
}

void votesCount()
{
    if((votesC1 == 0) && (votesC2 == 0) && (votesC3 == 0) && (votesC4 == 0) && (NOTA == 0))
    {
        cout<<"Voting Not Started.\n";
        cout<<"\n------------------- Voting Statistics---------------------------------"<<"\n";
        cout<< CANDIDATE1  " :  "<<votesC1<<"\n";
        cout<< CANDIDATE2  " :  "<<votesC2<<"\n";
        cout<< CANDIDATE3  " :  "<<votesC3<<"\n";
        cout<< CANDIDATE4  " :  "<<votesC4<<"\n";
        cout<< "None of the above : "<<NOTA<<"\n\n";
    }
    else if((votesC1 == 0) && (votesC2 == 0) && (votesC3 == 0) && (votesC4 == 0) && (NOTA > 0))
    {
        cout<<"All votes got to NOTA\n";
        cout<<"\n------------------- Voting Statistics---------------------------------"<<"\n";
        cout<< CANDIDATE1  " :  "<<votesC1<<"\n";
        cout<< CANDIDATE2  " :  "<<votesC2<<"\n";
        cout<< CANDIDATE3  " :  "<<votesC3<<"\n";
        cout<< CANDIDATE4  " :  "<<votesC4<<"\n";
        cout<< "None of the above : "<<NOTA<<"\n\n";
    }
   
    else
    {
        cout<<"\n------------------- Voting Statistics---------------------------------"<<"\n";
        cout<< CANDIDATE1  " :  "<<votesC1<<"\n";
        cout<< CANDIDATE2  " :  "<<votesC2<<"\n";
        cout<< CANDIDATE3  " :  "<<votesC3<<"\n";
        cout<< CANDIDATE4  " :  "<<votesC4<<"\n";
        cout<< "None of the above : "<<NOTA<<"\n\n";
    }


}


void getLeadingCandidate()
{
    cout<<"\n"<<"-------------------Leading Candidate--------------------------"<<"\n";

    if((votesC1>votesC2) && (votesC1>votesC3) && (votesC1 >votesC4))
    {
        cout<<CANDIDATE1 " having votes "<<votesC1<<"\n";
    }
    
    else if (votesC2>votesC3 && votesC2>votesC4 && votesC2 >votesC1)
    {
        cout<<CANDIDATE2 " having votes "<<votesC2<<"\n";
    }
    
    else if(votesC3>votesC4 && votesC3>votesC2 && votesC3 >votesC1)
    {
        cout<<CANDIDATE3 " having votes "<<votesC3<<"\n";
    }
    
    else if(votesC4>votesC1 && votesC4>votesC2 && votesC4 >votesC3)
    {
        cout<<CANDIDATE4 " having votes "<<votesC4<<"\n";
    }
    
    else if(NOTA > 0)
    {
        cout<<"NOTA is currently leading.\n";
    }
    else if ((votesC1 == votesC2)||(votesC1 == votesC3) || (votesC1 == votesC4) || (votesC2 == votesC3) || (votesC2 == votesC4) || (votesC3 == votesC4))
    {
        cout<<"Result Tied\n";
    }
    else
    {
        cout<<"Voting not started please wait...\n";
    }
    

}


int main()
{
    int choice = 0;
    while(1)
    {

    cout<<"------------------Welcome to Election 2024-------------------\n";
    cout<<"1. Cast the Vote \n";
    cout<<"2. Find Vote Count \n";
    cout<<"3. Find Leading Candidate\n";
    cout<<"4. EXIT \n";

        cout <<"Enter Your choice: \n";
        cin >> choice;
        cout << "\n";

        if(choice == 1)
        {
            CastYourVote();
        }
        else if(choice == 2)
        {
            votesCount();
        }
        else if(choice == 3)
        {
            getLeadingCandidate();
        }
        else if(choice == 4)
        {
            cout<<("__________________________________________________________\n");
            break;
        }

    }

     return 0;
}
