#pragma once 
//or use ifndef define endif

#include <iostream>
#include <string>
#include <chrono>

// #define DEBUG 1
// #ifdef DEBUG
// //code to debug like cout
// #endif
// #undef DEBUG

// #define DEBUG(x) std::cout<<#x<<"\t"<<x<<"\n"


//class vs struct since both can do the same
//use template in advanced mode
//don't unnecessary force complex things or do things in a complex way
//use storage classes wherever required
namespace status
{
    enum class codes
    {
        SUCCESS = 1,
        FAILURE = -1
    };
}

namespace org
{
    enum class Actions
    {
        READ = 1,
        UNREAD = 0
    };
    class website
    {
        std::string url;
        std::string title;
        // const std::chrono::time_point now{std::chrono::system_clock::now()};
        const std::chrono::time_point now;    //I think we can remove this in future but it is okay for now
        // const std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};
        const std::chrono::year_month_day ymd;
        public:
        //why void is not used instead status:codes is used for return? just to add extra acknowledgement
        website();
        std::string getURL();
        std::string getTitle();
        std::chrono::year_month_day getDate();
        status::codes setURL(std::string url);
        status::codes setTitle(std::string title);
        status::codes displayWebsite();
        std::string getWebsiteDetails();
        status::codes compareWebsites(std::string& url);
    };

    class tab
    {
        uint32_t sno;
        org::website link;
        org::Actions userAction;
        std::string category;
        public:
        tab();
        // org::website getWebsite();
        website getWebsite();
        status::codes setWebsite(org::website website);
        org::Actions getUserAction();
        status::codes setUserAction(org::Actions userAction);
        std::string getCategory();
        status::codes setCategory(std::string category);
        uint32_t getSNo();
        status::codes setSNo(uint32_t sno);
        void displayTabDetails();
        status::codes compareTab(org::tab& tab);
    };
}

namespace db
{
    struct tabList
    {
        org::tab tabInstacne;
        db::tabList *next;
        public:
        org::tabList* getNext();
    }

}



// charges: 944
// inspection: 472
// 20 Feb 2025