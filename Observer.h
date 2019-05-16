//
// Created by Administrator on 2019/5/16.
//

#ifndef OBSERVERCPLUSPLUS_OBSERVER_H
#define OBSERVERCPLUSPLUS_OBSERVER_H

#include <stdio.h>

class Observer {

public:
    Observer();
    virtual ~Observer();
    virtual void update(int code) = 0;
};


class SheetObserver : public Observer{
public:
    SheetObserver();
    ~SheetObserver();
    void update(int code);
};

class ScaleObserver : public Observer{
public:
    ScaleObserver();
    ~ScaleObserver();
    void update(int code);
};

class ChartObserver : public Observer {
public:
    ChartObserver();
    ~ChartObserver();
    void update(int code);
};

#endif //OBSERVERCPLUSPLUS_OBSERVER_H
