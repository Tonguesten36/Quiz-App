#include <iostream>
#include <string>

using namespace std;

bool Question(string question, string answers[], int correctAnswer);
void CategoryOne();

int main()
{
    cout << "---------------------| QUIZ APP |---------------------" << endl;
    cout << "---------------| Made by Tonguesten |-----------------\n" <<endl;

    while(true)
    {
        cout << "Select a quiz category (or exit the program): " << endl;
        cout << " 1. Food \n 2. Exit the program" << endl;

        int category;
        cin >> category;

        switch(category){
            case 1:
                //Cat 1
                CategoryOne();
                break;
            case 2:
                //Exit
                return 0;
                break;
            default:
                cout << "The input must be a positive integer" << endl;
                break;
        }
    };
}

void CategoryOne()
{
    cout <<"-----------------------| FOOD |-----------------------" << endl;
    string answersQuestionOne[3] = {"Vietnam", "Laos", "China"};
    int q1 = Question("Where is the origin country of Pho?", answersQuestionOne, 1) ? 1 : 0;
    
    string answersQuestionTwo[3]={"Fruits", "Honey", "Vegetables"};
    int q2 = Question("Which is produced by insects?", answersQuestionTwo, 2) ? 1 : 0;

    string answersQuestionThree[3]={"Very delicious", "Easily cooked", "Safely eaten"};
    int q3 = Question("If something is 'edible', it could mean", answersQuestionThree, 3) ? 1 : 0;

    int score = q1 + q2 + q3;

    cout << "###\nTotal score: " << score << "\n###" << endl;

    cout << "-----------------------------------------------------" << endl;
}

bool Question(string question, string answers[], int correctAnswer)
{
    //Display the question and the answers
    cout << question << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". " << answers[i] << endl;
    }
    
    //Prompt the user for an answer
    int answer;
    cout << "Choose your answer: ";
    cin >> answer;

    //Check if the user answered correctly
    if(answer == correctAnswer)
    {
        return true;
    }
    else
    {
        return false;
    }
}