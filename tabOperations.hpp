
#pragma once

#include "tabStruct.hpp"

namespace
{
    class operateOnTab
    {
        db::tabList tabBlock;
        operateOnTab* head, tail, current;
        public:
        operateOnTab();
        status::codes addTab();
        status::codes deleteTab();
        status::codes editTab();
        status::codes showTab();
    };
}