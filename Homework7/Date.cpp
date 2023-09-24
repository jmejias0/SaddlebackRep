//====================================================================
// Attached: HW_7-1
//
//====================================================================
// File: HW_7-1
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
    // Date.cpp
    #include "Date.h"

    // ======= Default constructor ===================================
    Date::Date()
    {
        int month = 0;
        int day = 0;
        int year = 0;
    }//================================================================

    //====== Overload constructor ====================================
    Date::Date(int dateMonth, int dateDay, int dateYear)
    {
        this->month = dateMonth;
        this->day = dateDay;
        this->year = dateYear;
    }
    //================================================================

    //===== Deconstructor ============================================
    Date::~Date() {}
    //================================================================

    //======= setDate method =========================================
    void Date::setDate(int month, int day, int year)
    {
        this->month = month;
        this->day = day;
        this->year = year;
    }
    //================================================================

    // ====== addDays method =========================================
    void Date::addDays(int addDays)
    {

    }
    //================================================================

    // ====== displayDate method =====================================
    void Date::displayDate()
    {
        time_t now = time(0); 
        tm* ltm = localtime(&now); 

        cout << "Today's date is: \n";
        cout << "MONTH: " << 1 + ltm->tm_mon << endl; 
        cout << "DAY: " << ltm->tm_mday << endl;
        cout << "YEAR: " << 1900 + ltm->tm_year << endl;
    }
    //================================================================