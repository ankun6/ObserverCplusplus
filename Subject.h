//
// Created by Administrator on 2019/5/16.
//

#ifndef OBSERVERCPLUSPLUS_SUBJECT_H
#define OBSERVERCPLUSPLUS_SUBJECT_H

#include <list>
#include "Observer.h"

class Subject {
public:
    Subject();
    virtual ~Subject();
    void add(Observer* op);
    void remove(Observer* op) ;
    void changeCodeStatu(int code);
    void notify() const ;

private:
    std::list<Observer *> items;
    int codeStatu;
};


#endif //OBSERVERCPLUSPLUS_SUBJECT_H
