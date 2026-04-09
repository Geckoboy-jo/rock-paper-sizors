#include "wrapper.hpp"

wrapper::wrapper() : playerScore(0), computerScore(0) {}

void wrapper::runAPP()
{
    bool done =false;
    srand(time(0));
    while(done!=false)
    {
        cout<<"==============================="<<endl;
        cout<<"Please type rock, paper, or scissors to play!"<<endl;
        cout<<"==============================="<<endl;
        string userInput;
        
        cin>>userInput;
        int randomNum = rand()%3+1;
        string computerChoice;
        if(randomNum==1) computerChoice="rock";
        else if(randomNum==2) computerChoice="paper";
        else if(randomNum==3) computerChoice="scissors";
        cout<<"The computer chose "<<computerChoice<<endl;
        if(userInput==computerChoice) cout<<"It's a tie!"<<endl;
        else if(userInput=="rock" && computerChoice=="scissors") cout<<"You win!"<<endl;
        else if(userInput=="paper" && computerChoice=="rock") cout<<"You win!"<<endl;
        else if(userInput=="scissors" && computerChoice=="paper") cout<<"You win!"<<endl;
        else cout<<"You lose!"<<endl;
        cout<<"Score: Player "<<playerScore<<" Computer "<<computerScore<<endl;
        if(playerScore+computerScore==5) done=true;

    }
    if(playerScore>computerScore) cout<<"Congratulations! You win the game!"<<endl;
    else if(playerScore<computerScore) cout<<"Sorry! You lose the game!"<<endl;
    else cout<<"It's a tie game!"<<endl;
}