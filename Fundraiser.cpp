// Library Read-a-thon profit calculator Junior Ezuma-Ngwu
/* Calculating how much money is generated each day 
based upon the amount of pages read */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
    {

    // String variable first and last name
        string name;

    // Variable Declarations
        double week1money = 0, week2money = 0, raised_moneysum = 0; 
        double pagesum = 0, week1page = 0, week2page = 0;
        double raised_money = 0.54;
        
    // Input variables for individual days
        double page1, page2, page3, page4, page5, page6, page7;
        double page8, page9, page10, page11, page12, page13, page14;
        
    // Variable calculations for pages read total
        pagesum = week1page + week2page;

    // Variable calculations for money raised total
        raised_moneysum = week1money + week2money;

    // Intro Statements
        cout << "Thank you for participating in your schools read-a-thon!  \n";
        cout << "To begin please enter your name:  \n";
        getline (cin >> ws, name);
        cout << " Hello, " << name << " lets begin by entering your reading information.  \n";

    // Skipping three lines
        cout << "\n\n\n";

    // User Inputting Data (Day1)
        cout << "How many pages did you read on your 1st day?  \n";
        cin >> page1;
        cout << "You have read: " << page1 << "  pages  \n";
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page1 << "$  \n";

    // (Day 2)
        cout << "How many pages did you read on your 2nd day?  \n";
        cin >> page2;
        cout << "You have read: " << page2 << "  pages  \n";
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page2 << "$  \n";

    // (Day 3)
        cout << "How many pages did you read on your 3rd day?  \n";
        cin >> page3;
        cout << "You have read: " << page3 << "  pages  \n";
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page3 << "$  \n";

    // (Day 4)
        cout << "How many pages did you read on your 4th day?  \n";
        cin >> page4;
        cout << "You have read: " << page4 << "  pages  \n";
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page4 << "$  \n";

    // (Day 5)
        cout << "How many pages did you read on your 5th day?  \n";
        cin >> page5;
        cout << "You have read: " << page5 << "  pages  \n";
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page5 << "$  \n";

    // (Day 6)
        cout << "How many pages did you read on your 6th day?  \n";
        cin >> page6;
        cout << "You have read: " << page6 << "  pages  \n";
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page6 << "$  \n";

    // (Day 7)
        cout << "How many pages did you read on your 7th day?  \n";
        cin >> page7;
        cout << "You have read: " << page7 << "  pages  \n";    
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page7 << "$  \n";

    // Variable calculations for pages (Week 1)
        week1page = page1 + page2 + page3 + page4 + page5 + page6 + page7;

    // Variable calculations for raised money (Week 1)
        week1money = week1page * raised_money;

    // Week 1 result 
        cout << "You have read:  " << week1page << " pages,  this week.  \n";
        cout << "You have earned:  " << fixed << setprecision(2) << week1money << "$  from your reading!  \n";

    //Skipping three lines
        cout << "\n\n\n";

    // (Day 8)
        cout << "How many pages did you read on your 8th day?  \n";
        cin >> page8;
        cout << "You have read: " << page8 << "  pages  \n";    
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page8 << "$  \n";
    
    // (Day 9)
        cout << "How many pages did you read on your 9th day?  \n";
        cin >> page9;
        cout << "You have read: " << page9 << "  pages  \n";    
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page9 << "$  \n";

    // (Day 10)
        cout << "How many pages did you read on your 10th day?  \n";
        cin >> page10;
        cout << "You have read: " << page10 << "  pages  \n";    
        cout << "You have raised:  "  << fixed << setprecision(2) << raised_money * page10 << "$  \n";
    
    // (Day 11)
        cout << "How many pages did you read on your 11th day?  \n";
        cin >> page11;
        cout << "You have read: " << page11 << "  pages  \n";    
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page11 << "$  \n";
    // (Day 12)
        cout << "How many pages did you read on your 12th day?  \n";
        cin >> page12;
        cout << "You have read: " << page12 << "  pages  \n";    
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page12 << "$  \n";    
    // (Day 13)
        cout << "How many pages did you read on your 13th day?  \n";
        cin >> page13;
        cout << "You have read: " << page13 << "  pages  \n";    
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page13 << "$  \n";
    // (Day 14)
        cout << "How many pages did you read on your 14th day?  \n";
        cin >> page14;
        cout << "You have read: " << page14 << "  pages  \n";    
        cout << "You have raised:  "  << fixed << setprecision(2) << raised_money * page14 << "$  \n";

    //Variable calculations for pages (Week 2)
        week2page = page8 + page9 + page10 + page11 + page12 + page13 + page14;

    // Variable calculations for raised money (Week 2)
        week2money = week2page * raised_money;

    // Week 2 result
        cout << "You have read:  " << week2page << " pages,  this week.  \n";
        cout << "You have earned:  " << fixed << setprecision(2) << week2money << "This week!  \n";

        cout << "\n\n\n";

    // Page Sum Calculation
        pagesum = week1page + week2page;
        raised_moneysum = pagesum * raised_money;

    //Final Output 

        cout << name << "You have succesfully read a total of:  " << pagesum << " pages\n";
        cout << "You have also raised a total of: " << setprecision(2) << raised_moneysum << "$  \n";
        cout << "Thank you and goodbye, " << name << "!\n";

        return 0;
    }

