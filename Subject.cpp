//
// Created by Administrator on 2019/5/16.
//

#include "Subject.h"

void Subject::add(Observer *  op)
{
    items.push_back(op);
}

void Subject::remove(Observer * op)
{
    items.remove(op);
}

void Subject::changeCodeStatu(int code)
{
    codeStatu = code;
}

void Subject::notify()
{
    for(auto iter = items.cbegin(); iter != items.cend(); ++iter)
    {
        (*iter)->update(codeStatu);
    }
}

Subject::Subject() {

}

Subject::~Subject() {

}
