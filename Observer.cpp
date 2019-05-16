//
// Created by Administrator on 2019/5/16.
//

#include "Observer.h"

Observer::Observer() {

}

Observer::~Observer() {

}

SheetObserver::SheetObserver() {

}

SheetObserver::~SheetObserver() {

}

void SheetObserver::update(int code) {
    printf("SheetObserver %s() : code = %d \r\n", __func__, code);
}

ScaleObserver::ScaleObserver() {

}

ScaleObserver::~ScaleObserver() {

}

void ScaleObserver::update(int code) {
    printf("ScaleObserver  %s() : code = %d \r\n", __func__, code);
}


ChartObserver::ChartObserver() {

}

ChartObserver::~ChartObserver() {

}

void ChartObserver::update(int code) {
    printf("ChartObserver %s() : code = %d \r\n", __func__, code);
}
