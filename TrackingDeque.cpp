#include <iostream>
#include <deque>
#include "TrackingDeque.h"

using namespace std;

/// Constructor

template <typename GENERIC>
TrackingDeque<GENERIC>::TrackingDeque()
{
  maximum_size = 0;
  size = 0;
}

/// Destructor

template <typename GENERIC>
TrackingDeque<GENERIC>::~TrackingDeque()
{
  cout << "----> "<< maximum_size<<" <----" <<endl;
}

//// PUSH_BACK

template <typename GENERIC>
void TrackingDeque<GENERIC>::push_back(const GENERIC& e)
{

  deque<GENERIC>::push_back(e);
  size++;
  // cout << "size :"<<size<<endl;
  maximum_size++;
  // cout << "MAX-size :"<<maximum_size<<endl;

}

//// Push_front

template <typename GENERIC>
void TrackingDeque<GENERIC>::push_front(const GENERIC& e)
{
  deque<GENERIC>::push_front(e);
  size++;
  // cout << "size :"<<size<<endl;
  maximum_size++;
  // cout << "MAX-size :"<<maximum_size<<endl;

}

//  Pop_BACK

template <typename GENERIC>
void TrackingDeque<GENERIC>::pop_back()
{
  deque<GENERIC>::pop_back();
  size--;
  // cout << "size :"<<size<<endl;
}

// Pop_front

template <typename GENERIC>
void TrackingDeque<GENERIC>::pop_front()
{
  deque<GENERIC>::pop_front();
  size--;
  // cout << "size :"<<size<<endl;
}


//// main ////

int main(int argc, char const *argv[]) {


  TrackingDeque<char> mybuffer;

    mybuffer.push_front('A');

    mybuffer.push_back('B');

    cout << "Front of deque is: " << mybuffer.front() << endl;

    mybuffer.pop_front();

    cout << "Front of deque is: " << mybuffer.front() << endl;

    mybuffer.pop_front();


  return 0;
}
