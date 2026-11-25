#ifndef START_STOP_ELAPSED_TIMER_H
#define START_STOP_ELAPSED_TIMER_H

#include <QElapsedTimer>

class StartStopElapsedTimer {
    QElapsedTimer* timer;
    qint64 ms;

public:
    StartStopElapsedTimer();
    ~StartStopElapsedTimer();

    void clear();
    void start();
    void stop();
    qint64 elapsed();
    void restore(qint64 elapsed_ms);
};

#endif // START_STOP_ELAPSED_TIMER_H
