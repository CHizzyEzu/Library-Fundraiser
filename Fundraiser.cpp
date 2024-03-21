// Library Read-a-thon profit calculator Junior Ezuma-Ngwu
/* Calculating how much money is generated each day 
based upon the amount of pages read */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
    {

    // String variable first and last name (for identifying users name)
        string name;

    /* Variable declarations (variabls for the sum of weekly and overall pages 
    and money raised by the user */

        double week1money, week2money, raised_moneysum, week1money_avg, week2money_avg;
        double pagesum, week1page, week2page, week1page_avg, week2page_avg;
        double raised_money = 0.54;

    // Daily average variables 
        double weeklypage_avg2, weeklypage_avg3, weeklypage_avg4, weeklypage_avg5, weeklypage_avg6;
        double weeklypage_avg9, weeklypage_avg10,weeklypage_avg11, weeklypage_avg12, weeklypage_avg13;
        double weeklymoney_avg2, weeklymoney_avg3, weeklymoney_avg4, weeklymoney_avg5, weeklymoney_avg6;
        double weeklymoney_avg9, weeklymoney_avg10, weeklymoney_avg11, weeklymoney_avg12, weeklymoney_avg13;

    // Input variables for individual days (what the user will input when prompted)
        double page1, page2, page3, page4, page5, page6, page7;
        double page8, page9, page10, page11, page12, page13, page14;
        
    // Variable calculations for pages read total
        pagesum = week1page + week2page;

    // Variable calculations for money raised total
        raised_moneysum = week1money + week2money;

    // Intro Statements (asks for the users name)
        cout << "Thank you for participating in your schools read-a-thon!  \n";
        cout << "To begin please enter your name:  \n";
        getline (cin >> ws, name);
        cout << "Hello, " << name << " lets begin by entering your reading information.  \n";

    // Skipping three lines
        cout << "\n\n\n";

    // User Inputting Data (Day 1) Done so from day 1 - 14 with weekly breaks in the code
        cout << "How many pages did you read on your 1st day?  \n";
        cin >> page1;
        cout << "You have read: " << page1 << " pages  \n";
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page1 << "$  \n"; 

        cout << "\n";

    // (Day 2)
        cout << "How many pages did you read on your 2nd day?  \n";
        cin >> page2;
        cout << "You have read: " << page2 << " pages  \n";
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page2 << "$  \n";

    // Daily Average (Day 2)
        weeklypage_avg2 = (page1 + page2) / 2;
        weeklymoney_avg2 = raised_money * (page1 + page2) / 2;

        cout << "Your current average of read pages is, " << fixed << weeklypage_avg2 << "\n";
        cout << "Your current average of money raised is, "<< fixed << setprecision(2) << weeklymoney_avg2 << "$\n";

        cout << "\n";

    // (Day 3)
        cout << "How many pages did you read on your 3rd day?  \n";
        cin >> page3;
        cout << "You have read: " << page3 << " pages  \n";
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page3 << "$  \n";

    // Daily Average (Day 3)
        weeklypage_avg3 = (page1 + page2 + page3) / 3;
        weeklymoney_avg3 = raised_money * (page1 + page2 + page3) / 3;

        cout << "Your current average of read pages is, " << fixed << weeklypage_avg3 << "\n";
        cout << "Your current average of money raised is, " << fixed << setprecision(2) << weeklymoney_avg3 << "$\n";

        cout << "\n";

    // (Day 4)
        cout << "How many pages did you read on your 4th day?  \n";
        cin >> page4;
        cout << "You have read: " << page4 << " pages  \n";
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page4 << "$  \n";

    // Daily Average (Day 4)
        weeklypage_avg4 = (page1 + page2 + page3 + page4) / 4;
        weeklymoney_avg4 = raised_money * (page1 + page2 + page3 + page4) / 4;

        cout << "Your current average of read pages is, " << fixed << weeklypage_avg4 << "\n";
        cout << "Your current average of money raised is, " << fixed << setprecision(2) << weeklymoney_avg4 << "$\n";
    
        cout << "\n";

    // (Day 5)
        cout << "How many pages did you read on your 5th day?  \n";
        cin >> page5;
        cout << "You have read: " << page5 << " pages  \n";
        cout << "You have raised: " << fixed << setprecision(2) << raised_money * page5 << "$  \n";

    // Daily Average (Day 5)
        weeklypage_avg5 = (page1 + page2 + page3 + page4 + page5) / 5;
        weeklymoney_avg5 = raised_money * (page1 + page2 + page3 + page4 + page5) / 5;

        cout << "\n";

        cout << "Your current average of read pages is, " << fixed << weeklypage_avg5 << "\n";
        cout << "Your current average of money raised is, " << fixed << setprecision(2) << weeklymoney_avg5 << "$\n";

    // (Day 6)
        cout << "How many pages did you read on your 6th day?  \n";
        cin >> page6;
        cout << "You have read: " << page6 << " pages  \n";
        cout << "You have raised:  " << fixed << setprecision(2) << raised_money * page6 << "$  \n";

     // Daily Average (Day 6)
        weeklypage_avg6 = (page1 + page2 + page3 + page4 + page5 + page6) / 6;
        weeklymoney_avg6 = raised_money * (page1 + page2 + page3 + page4 + page5 + page6) / 6;

        cout << "\n";

        cout << "Your current average of read pages is, " << fixed << weeklypage_avg6 << "\n";
        cout << "Your current average of money raised is, " << fixed <<setprecision(2) << weeklymoney_avg6 << "$\n";

    // (Day 7)
        cout << "How many pages did you read on your 7th day?  \n";
        cin >> page7;
        cout << "You have read: " << page7 << " pages  \n";    
        cout << "You have raised: " << fixed << setprecision(2) << raised_money * page7 << "$  \n";

    // Skipping 1 line
        cout <<"\n";

    // Variable calculations for pages (Week 1)
        week1page = page1 + page2 + page3 + page4 + page5 + page6 + page7;
        week1page_avg = week1page / 7;

    // Variable calculations for raised money (Week 1)
        week1money = week1page * raised_money;
        week1money_avg = week1money / 7;

    // Week 1 result 
        cout << "You have read: " << week1page << " pages, this week.  \n";
        cout << "You have earned: " << fixed << setprecision(2) << week1money << "$  from your reading!  \n";
        cout << "The average amount of pages you read this week is, " << week1page_avg << " pages \n";
        cout << "The average amount of money you raised this week is, " << week1money_avg << "$ \n";

    //Skipping three lines
        cout << "\n\n\n";

    // (Day 8)
        cout << "How many pages did you read on your 8th day?  \n";
        cin >> page8;
        cout << "You have read: " << page8 << " pages  \n";    
        cout << "You have raised: " << fixed << setprecision(2) << raised_money * page8 << "$  \n";

        cout << "\n";

    // (Day 9)
        cout << "How many pages did you read on your 9th day?  \n";
        cin >> page9;
        cout << "You have read: " << page9 << " pages  \n";    
        cout << "You have raised: " << fixed << setprecision(2) << raised_money * page9 << "$  \n";

    // Daily Average (Day 9)
        weeklypage_avg9 = (page8 + page9) / 2;
        weeklymoney_avg9 = raised_money * (page8 + page9) / 2;

        cout << "Your current average of read pages is, " << fixed << weeklypage_avg2 << "\n";
        cout << "Your current average of money raised is, " << fixed << setprecision(2) << weeklymoney_avg2 << "$\n";

        cout << "\n";

    // (Day 10)
        cout << "How many pages did you read on your 10th day?  \n";
        cin >> page10;
        cout << "You have read: " << page10 << " pages  \n";    
        cout << "You have raised: "  << fixed << setprecision(2) << raised_money * page10 << "$  \n";

    // Daily Average (Day 10)
        weeklypage_avg10 = (page8 + page9 + page10) / 3;
        weeklymoney_avg10 = raised_money * (page8 + page9 + page10) / 3;

        cout << "Your current average of read pages is, " << weeklypage_avg3 << "\n";
        cout << "Your current average of money raised is, " << fixed << setprecision(2) << weeklymoney_avg3 << "$\n";
    
        cout << "\n";

    // (Day 11)
        cout << "How many pages did you read on your 11th day?  \n";
        cin >> page11;
        cout << "You have read: " << page11 << " pages  \n";    
        cout << "You have raised: " << fixed << setprecision(2) << raised_money * page11 << "$  \n";

    //Daily Average (Day 11)
        weeklypage_avg11 = (page8 + page9 + page10 + page11) / 4;
        weeklymoney_avg11 = raised_money * (page8 + page9 + page10 + page11) / 4;

        cout << "Your current average of read pages is, " << fixed  << weeklypage_avg4 << "\n";
        cout << "Your current average of money raised is, " << fixed << setprecision(2) << weeklymoney_avg4 << "$\n";

    // (Day 12)
        cout << "How many pages did you read on your 12th day?  \n";
        cin >> page12;
        cout << "You have read: " << page12 << " pages  \n";    
        cout << "You have raised: " << fixed << setprecision(2) << raised_money * page12 << "$  \n";

     //Daily Average (Day 12)
        weeklypage_avg12 = (page8 + page9 + page10 + page11 + page12) / 5;
        weeklymoney_avg12 = raised_money * (page8 + page9 + page10 + page11 + page12) / 5;

        cout << "Your current average of read pages is, " << fixed << weeklypage_avg5 << "\n";
        cout << "Your current average of money raised is, " << fixed << setprecision(2) << weeklymoney_avg5 << "$\n";    

        cout << "\n";

    // (Day 13)
        cout << "How many pages did you read on your 13th day?  \n";
        cin >> page13;
        cout << "You have read: " << page13 << " pages  \n";    
        cout << "You have raised: " << fixed << setprecision(2) << raised_money * page13 << "$  \n";

    // Daily Average (Day 13)
        weeklypage_avg13 = (page8 + page9 + page10 + page11 + page12 + page13) / 6;
        weeklymoney_avg13 = raised_money * (page8 + page9 + page10 + page11 + page12 + page13) / 6;

        cout << "Your current average of read pages is, " << fixed << weeklypage_avg6 << "\n";
        cout << "Your current average of money raised is, " << fixed << setprecision(2) << weeklymoney_avg6 << "$\n";

        cout << "\n";

    // (Day 14)
        cout << "How many pages did you read on your 14th day?  \n";
        cin >> page14;
        cout << "You have read: " << page14 << " pages  \n";    
        cout << "You have raised: "  << fixed << setprecision(2) << raised_money * page14 << "$  \n";
        
    // Skipping 1 line
        cout << "\n";

    //Variable calculations for pages (Week 2)
        week2page = page8 + page9 + page10 + page11 + page12 + page13 + page14;
        week2page_avg = week2page / 7;

    // Variable calculations for raised money (Week 2)
        week2money = week2page * raised_money;
        week2money_avg = week2money / 7;

    // Week 2 result
        cout << "You have read: " << week2page << " pages, this week.  \n";
        cout << "You have earned: " << fixed << setprecision(2) << week2money << "$ This week!  \n";
        cout << "The average amount of pages you read this week is, " << fixed << setprecision(2) << week2page_avg << " pages \n";
        cout << "The average amount of money you raised this week is, " << fixed << setprecision(2) << week2money_avg << "$ \n";

        cout << "\n\n\n";

    // Page Sum Calculation
        pagesum = week1page + week2page;
        raised_moneysum = pagesum * raised_money;

    //Final Output 

        cout << name << " You have succesfully read a total of: " << pagesum << " pages\n";
        cout << "You have also raised a total of: " << setprecision(2) << raised_moneysum << "$  \n";
        cout << "Thank you and goodbye, " << name << "!\n";

        return 0;
    }

