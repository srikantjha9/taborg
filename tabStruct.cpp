#include "tabStruct.hpp"


org::website::website()
{
    now{std::chrono::system_clock::now()};
    ymd {std::chrono::floor<std::chrono::days>(now)};
}
std::string org::website::getURL()
{
    return url;
}
std::string org::website::getTitle()
{
    return title;
}
std::chrono::year_month_day org::website::getDate()
{
    return ymd;
}
status::codes org::website::setURL(std::string url)
{
    this->url=url;
    return status::codes::SUCCESS;
}
status::codes org::website::setTitle(std::string title)
{
    this->title = title;
    return status::codes::SUCCESS;
}
status::codes org::website::displayWebsite()
{
    std::cout<<"\tTitle of the URL: "<<getURL();
    std::cout<<"\tURL: "<<getURL();
    std::cout<<"\tDate of the URL:"<<getDate();
    return status::codes::SUCCESS
}
std::string org::website::getWebsiteDetails()
{
    return getTitle()+" "+getDate()+" "+getURL();
}
status::codes org::website::compareWebsites(std::string& url)
{
    //only comparing the url
    if(this->getURL() == url)
    return status::codes::FAILURE;
    else
    return status::codes::SUCCESS;
}

org::tab::tab()
{}

uint32_t org::tab::getSNo()
{
    return this->sno;
}
status::codes org::tab::setSNo(uint32_t sno)
{
    this->sno=sno;
    return status::codes::SUCCESS;
}
std::string org::tab::getCategory()
{
    return this->category;
}
status::codes org::tab::setCategory(std::string category)
{
    this->category=category;
    return status::codes::SUCCESS;
}
org::Actions org::tab::getUserAction()
{
    return userAction;
}
status::codes org::tab::setUserAction(org::Actions userAction)
{
    this->userAction=userAction;
    return status::codes::SUCCESS;
}

void org::tab::displayTabDetails()
{
    std::cout<<"\nSerial number: "<<getSNo();
    std::cout<<getWebsite().displayWebsite();
    std::cout<<"\nUser Action on the tab: "<<getUserAction();
    std::cout<<"\nCatergory of the tab: "<<getCategory();
}
status::codes org::tab::compareTab(org::tab& tab)
{
    if(tab.getWebsite().getURL()==this->link.getUrl)
}
