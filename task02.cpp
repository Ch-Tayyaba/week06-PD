#include<iostream>
using namespace std;
float marks(float english , float maths , float chemistry , float socialSciences , float biology);
float percentageOfMarks(float totalMarks);
string grading(float percentage);
main()
{
    string name;
    float english;
    float maths;
    float chemistry;
    float socialSciences;
    float biology;
    float totalMarks;
    float percentage;
    string grade; 
    cout << "Enter Your Name : ";
    cin >> name;
    cout << "Enter marks of Subjects : " << endl ;
    cout << "English :";
    cin >> english;
    cout << "Maths : ";
    cin >> maths;
    cout << "Chemistry : ";
    cin >> chemistry;
    cout << "Social Sciences : ";
    cin >> socialSciences;
    cout << "Biology : ";
    cin >> biology;
    totalMarks = marks( english , maths , chemistry , socialSciences , biology);
    percentage = percentageOfMarks( totalMarks);
    grade = grading( percentage);
    cout << endl;
    cout << "YOUR RESULT IS : " << endl;
    cout << "STUDENT NAME : " << name << endl; 
    cout << "OBTAINED MARKS : " << totalMarks << endl;
    cout << "PERCENTAGE : " << percentage << "%" << endl;
    cout << "GRADE : " << grade << endl;



}
float marks(float english , float maths , float chemistry , float socialSciences , float biology)
{
    float totalMarks = english + maths + chemistry + socialSciences + biology;
    return totalMarks;
}
float percentageOfMarks(float totalMarks)
{
    float percentage = (totalMarks/5);
    return percentage;
}
string grading(float percentage)
{
    if (percentage >= 90 && percentage <= 100)
    {
        return "A+"; 
    }
    else if (percentage >= 80 && percentage <= 90)
    {
        return "A"; 
    }
    else if (percentage >= 70 && percentage <= 80)
    {
        return "B+"; 
    }
    else if (percentage >= 60 && percentage <= 70)
    {
        return "B"; 
    }
    else if (percentage >= 50 && percentage <= 60)
    {
        return "C"; 
    }
    else if (percentage >= 40 && percentage <= 50)
    {
        return "D"; 
    }
    else if (percentage  < 40)
    {
        return "F"; 
    }
    return 0;
}