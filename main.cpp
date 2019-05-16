#include <iostream>
#include "Subject.h"
#include "Observer.h"

using namespace std;

int main()
{
    Subject sub;
    SheetObserver sheet;
    ChartObserver chart;
    ScaleObserver scale;

    sub.add(&sheet);
    sub.add(&chart);
    sub.add(&scale);

    sub.changeCodeStatu(0xff);
    sub.notify();
    cout << "\n";

    sub.remove(&chart);
    sub.changeCodeStatu(327);
    sub.notify();
    return 0;
}
