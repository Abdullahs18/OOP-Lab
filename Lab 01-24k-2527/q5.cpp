/*5. The local Driver’s License Office has asked you to write a program that grades the written
portion of the driver’s license exam. The exam has 20 multiple choice questions. Here are the
correct answers:
1. A 6. B 11. A 16. C
2. D 7. A 12. C 17. C
3. B 8. B 13. D 18. A
4. B 9. C 14. B 19. D
5. C 10. D 15. D 20. B
Your program should store the correct answers shown above in an array. It should ask the user to
enter the student’s answers for each of the 20 questions, and the answers should be stored in
another array. After the student’s answers have been entered, the program should display a
message indicating whether the student passed or failed the exam. (A student must correctly
answer 15 of the 20 questions to pass the exam.) It should then display the total number of
correctly answered questions, the total number of incorrectly answered questions, and a list
showing the question numbers of the incorrectly answered questions.
Input Validation: Only accept the letters A, B, C, or D as answers.*/
#include <iostream>
using namespace std;

void answers(){
	char correct_answers[20]={'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D','C','C','A','D','B'};
    char inputted_answers[20];
    for (int counter=0;counter<20;counter++){
    	
		
        cout <<"Enter answer of question no:" <<counter+1 <<"(A/B/C/D) :";
        cin >> inputted_answers[counter];
        if (inputted_answers[counter]!='A'&& inputted_answers[counter]!='B'&&inputted_answers[counter]!='C'&&inputted_answers[counter]!='D'){
        	cout <<"Invalid Option" <<endl;
        	cout <<"Enter answer again of question no:" <<counter+1 <<"(A/B/C/D) :" <<endl;
        	cin >> inputted_answers[counter];
		}
}
    int correct=0;
    int wrong=0;
    for (int counter=0;counter<20;counter++){
        if (correct_answers[counter]==inputted_answers[counter]){
            cout <<counter+1 <<": Correct Answer";
            cout <<"\n";
            correct++;
        }
        else if (correct_answers!=inputted_answers){
                cout <<counter+1 <<": Wrong Answer";
                cout <<"\n";
                wrong++;
        }
    }
    if (correct>=15){
        cout <<"Passed" <<endl;

    }
    else {
        cout <<"Failed" <<endl;
    }
    cout <<"Number of Correct answers: " <<correct <<endl;
    cout <<"Number of Wrong answers: " <<wrong <<endl;
}
int main (){
    answers();
}