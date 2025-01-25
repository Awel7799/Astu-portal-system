#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct student {
    string id ;
    string name ;
    int section;
    string  dormitary;
    string  gender;
    string marital_status;
    string nationality;
    string disability;
    string date_of_birth;
    string school;
    string Admition;
    int Acadamic_year;
    string Adress;
    string email;
    string Add_and_drop;
    string readmission;
    string transfer;
    string withdrawal ;
}student1,student2,student3;
int main (){
    ifstream in("data.txt");
    string maths1,physics,chemistry,eglish,civics,pytho,fitnessmaths2,drawing,logic,emerging,writing_skill,fitness2,fundamentals_of_programming;
    string su[49] = {maths1,physics,chemistry,eglish,civics,pytho,fitnessmaths2,drawing,logic,emerging,writing_skill,fitness2,fundamentals_of_programming };
    char value;
    int t_id;
cout<<"press T for teacher platform :"<<endl<<"press s for student platform :"<<endl;
cin>>value;
if (value== 'T'||value== 't'){
        cout<<"enter your id numer";
        cin>>t_id;
        if (t_id==3001){
     ofstream out("data.txt");
    char average_grade;
    int sem;
    const int num_students = 3;
    const int num_subjects = 7;
    int marks[num_students][num_subjects];
    int marks2[num_students][num_subjects];
    string subjects[num_subjects] = {"applied_maths1", "General_physics", "General_chemistry", "communicative_English", "civics_and_ethics", "introduction_to_computing", "physical_fitness"};
    string subjects2[num_subjects] = {"applied_mats2","engineering_drawing","logic_and_critical thinking","emerging_technology","basic_writing_skill","physical_fitness","fundamentals_of_programming"};
    string grades[num_students][num_subjects];
    string grades2[num_students][num_subjects];
    cout<<"first semester course :"<<endl<<endl;
    // Input marks for each student
    for (int i = 0; i < num_students; ++i) {
        cout << "Enter marks for student " << i+1 << ":\n";
        for (int j = 0; j < num_subjects; ++j) {
            cout << subjects[j] << ": ";
            cin >> marks[i][j];
        }
    }
    // Calculate grades for each student
    for (int i = 0; i < num_students; ++i) {
        for (int j = 0; j < num_subjects; ++j) {
            if (marks[i][j] <= 100 && marks[i][j] >= 85)
                grades[i][j] = 'A';
            else if (marks[i][j] < 85 && marks[i][j] >= 70)
                grades[i][j] = 'B';
            else if (marks[i][j] < 70 && marks[i][j] >= 60)
                grades[i][j] = 'C';
            else if (marks[i][j] < 60 && marks[i][j] >= 40)
                grades[i][j] = 'D';
            else
                grades[i][j] = 'F';
        }
    }

    // Write grades for each student to file
    for (int i = 0; i < num_students;++i) {
        for (int j = 0; j < num_subjects; ++j){
            out<<setiosflags(ios::left) <<setw(30)<< subjects[j] <<setw(5)<< grades[i][j] << endl;
    }
     // Calculate and write average grade for each student to file
    for (int i = 0; i < num_students; ++i) {
        int total_marks = 0;
        for (int j = 0; j < num_subjects; ++j) {
            total_marks += marks[i][j];
        }
        int average = total_marks / num_subjects;
        if (average >= 85)
            average_grade = 'A';
        else if (average >= 70)
            average_grade = 'B';
        else if (average >= 60)
            average_grade = 'C';
        else if (average >= 40)
            average_grade = 'D';
        else
            average_grade = 'F';
    if (average_grade == 'A' )
            out << "Your total GPA is         " << 4.00 << endl;
        else if (average_grade == 'B')
            out << "Your total GPA is         " << 3.00 << endl;
        else if (average_grade == 'C')
            out << "Your total GPA is         " << 2.00 << endl;
        else if (average_grade == 'D')
            out << "Your total GPA is         " << 1.00 << endl;
        else
            out << "Your total GPA is         " << 0.00 << endl;
    }
    }
    cout<<endl;
    cout<<"second semester course"<<endl<<endl;
    // Input marks for each student
    for (int i = 0; i < num_students; ++i) {
        cout << "Enter marks for student " << i+1 << ":\n";
        for (int j = 0; j < num_subjects; ++j) {
            cout << subjects2[j] << ": ";
            cin >> marks2[i][j];
        }
    }

    // Calculate grades for each student
    for (int i = 0; i < num_students; ++i) {
        for (int j = 0; j < num_subjects; ++j) {
            if (marks2[i][j] <= 100 && marks2[i][j] >= 85)
                grades2[i][j] = 'A';
            else if (marks2[i][j] < 85 && marks2[i][j] >= 70)
                grades2[i][j] = 'B';
            else if (marks2[i][j] < 70 && marks2[i][j] >= 60)
                grades2[i][j] = 'C';
            else if (marks2[i][j] < 60 && marks2[i][j] >= 40)
                grades2[i][j] = 'D';
            else
                grades2[i][j] = 'F';
        }
    }

    // Write grades for each student to file
    for (int i = 0; i < num_students; ++i) {
        for (int j = 0; j < num_subjects; ++j){
            out<<setiosflags(ios::left) <<setw(30)<< subjects2[j] <<setw(5)<< grades2[i][j] << endl;
    }
     // Calculate and write average grade for each student to file
     for (int i = 0; i < num_students; ++i) {
        int total_marks = 0;
        for (int j = 0; j < num_subjects; ++j) {
            total_marks += marks2[i][j];
        }
        int average = total_marks / num_subjects;
        if (average >= 85)
            average_grade = 'A';
        else if (average >= 70)
            average_grade = 'B';
        else if (average >= 60)
            average_grade = 'C';
        else if (average >= 40)
            average_grade = 'D';
        else
            average_grade = 'F';
    if (average_grade == 'A' )
            out << "Your total GPA is        " << 4.00 << endl;
        else if (average_grade == 'B')
            out << "Your total GPA is        " << 3.00 << endl;
        else if (average_grade == 'C')
            out << "Your total GPA is        " << 2.00 << endl;
        else if (average_grade == 'D')
            out << "Your total GPA is        " << 1.00 << endl;
        else
            out << "Your total GPA is        " << 0.00 << endl;
    }
}
}else
cout<<"invalid input";

}
 else if (value == 's'||value == 'S'){
    student1={"ugr/30198/15","Awel kassim",27,"block 365 , room 1 ","Male","single","Ethiopian","no disability","1995/2/08","school of electrical and computing","undergraduate regular full time ",2023,"Assela","awelkassim@gmail.com"};
    student2={"ugr/30197/15","Adem Abe",28,"block 366 , room 2 ","Male","single","Ethiopian","no disability","1995/10/22","school of electrical and computing","undergraduate regular full time ",2023,"Adama","ademabe@gmail.com"};
    student3={"ugr/30181/15","Ermiyas Assebe",20,"block 350 , room 10 ","Male","single","Ethiopian","no disability","1995/11/15","school of electrical and computing","undergraduate regular full time ",2023,"A A","jeremyemss@gmail.com"};
     int idnum ;
    char option;
 cout<<"enter your id number: ugr/ ";
 cin>>idnum;
 switch(idnum){
 case 30198:
    cout<<"press p for student profile : \n";
    cout<<"press E for Enrollment record : \n";
    cout<<"press A for Academic history :\n";
    cout<<"press R for request :\n";
    cin>>option;
    switch (option){
      case 'p':
          cout<<"id number :      "<<student1.id<<endl;
          cout<<"Full name :      "<<student1.name<<endl;
          cout<<"gender :         "<<student1.gender<<endl;
          cout<<"marital status:  "<<student1.marital_status<<endl;
          cout<<"nationality :    "<<student1.nationality<<endl;
          cout<<"disability :     "<<student1.disability<<endl;
          cout<<"date of birth :  "<<student1.date_of_birth<<endl;
          cout<<"Address :        "<<student1.Adress<<endl;
          cout<<"email :          "<<student1.email<<endl;
          break;
      case 'E':
        cout<<"no Add and drop history"<<endl;
          cout<<"no readmission history" <<endl;
          cout<<"no transfer history"<<endl;
           cout<<"no withdrawal history"<<endl;
              break;
      case 'A':
        for (int i=0;i<=7;i++){
        getline(in,su[i]);
    }
    cout<<endl;
    cout<<"fist semester grade "<<endl;
    cout<<endl;
      for (int i=0;i<=7;i++){
        cout<< su[i]<<endl;
    }
     for (int i=8;i<=15;i++){
        getline(in,su[i]);
     }
     cout<<endl;
     cout<<"second semester grade"<<endl;
     cout<<endl;
      for (int i=8;i<=15;i++){
        cout<< su[i]<<endl;
    }
              break;
     case 'R':
         cout<<"readmission";
    }
      break;
case 30197 :
    cout<<"press p for student profile : \n";
    cout<<"press E for Enrollment record : \n";
    cout<<"press A for Academic history :\n";
    cout<<"press R for request :\n";
    cin>>option;
    switch (option){
      case 'p':
          cout<<"id number :      "<<student2.id<<endl;
          cout<<"Full name :      "<<student2.name<<endl;
          cout<<"gender :         "<<student2.gender<<endl;
          cout<<"marital status:  "<<student2.marital_status<<endl;
          cout<<"nationality :    "<<student2.nationality<<endl;
          cout<<"disability :     "<<student2.disability<<endl;
          cout<<"date of birth :  "<<student2.date_of_birth<<endl;
          cout<<"Address :        "<<student2.Adress<<endl;
          cout<<"email :          "<<student2.email<<endl;
          break;
      case 'E':
        cout<<"no Add and drop history"<<endl;
          cout<<"no readmission history" <<endl;
          cout<<"no transfer history"<<endl;
           cout<<"no withdrawal history"<<endl;
              break;
      case 'A':
       for (int i=16;i<=23;i++){
        getline(in,su[i]);
    }
    cout<<endl;
     cout<<"first semester grade"<<endl;
     cout<<endl;
      for (int i=16;i<=23;i++){
        cout<< su[i]<<endl;
    }
       for (int i=24;i<=31;i++){
        getline(in,su[i]);
    }
    cout<<endl;
     cout<<"second semester grade"<<endl;
     cout<<endl;
      for (int i=24;i<=31;i++){
        cout<< su[i]<<endl;
    }

              break;
     case 'R':
         cout<<"readmission";
    }
      break;
case 30181 :
    cout<<"press p for student profile : \n";
    cout<<"press E for Enrollment record : \n";
    cout<<"press A for Academic history :\n";
    cout<<"press R for request :\n";
    cin>>option;
    switch (option){
      case 'p':
          cout<<"id number :      "<<student3.id<<endl;
          cout<<"Full name :      "<<student3.name<<endl;
          cout<<"gender :         "<<student3.gender<<endl;
          cout<<"marital status:  "<<student3.marital_status<<endl;
          cout<<"nationality :    "<<student3.nationality<<endl;
          cout<<"disability :     "<<student3.disability<<endl;
          cout<<"date of birth :  "<<student3.date_of_birth<<endl;
          cout<<"Address :        "<<student3.Adress<<endl;
          cout<<"email :          "<<student3.email<<endl;
          break;
      case 'E':
        cout<<"no Add and drop history"<<endl;
          cout<<"no readmission history" <<endl;
          cout<<"no transfer history"<<endl;
           cout<<"no withdrawal history"<<endl;
              break;
      case 'A':
       for (int i=32;i<=41;i++){
        getline(in,su[i]);
    }
    cout<<endl;
     cout<<"first semester grade"<<endl;
     cout<<endl;
      for (int i=32;i<=41;i++){
        cout<< su[i]<<endl;
    }
        for (int i=40;i<=49;i++){
        getline(in,su[i]);
    }
    cout<<endl;
     cout<<"second semester grade"<<endl;
     cout<<endl;
      for (int i=40;i<=49;i++){
        cout<< su[i]<<endl;
    }

              break;
     case 'R':
         cout<<"readmission";
    }
      break;
 }
} else
    cout<<"invalid input";
 return 0;
}






