#ifndef _TRACKINGDEQUE_H_
#define _TRACKINGDEQUE_H_
#include <iostream>
#include <deque>

using namespace std;

template <typename GENERIC>
class TrackingDeque : public deque <GENERIC>
{
  public:
    TrackingDeque();
    ~TrackingDeque();
    void push_back(const GENERIC&);
    void push_front(const GENERIC&);
    void pop_back();
    void pop_front();
  private:
    int maximum_size;
    int size;
};


#endif /* end of include guard:  */
