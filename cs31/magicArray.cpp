#include <iostream>
using namespace std;

/* A custom class for an extendible array */
class InfiniteArray {
public:
    InfiniteArray();
    InfiniteArray(int size);
    ~InfiniteArray();
    bool put(int item);
    bool set(int ix, int item);
    int size();
    int get(int ix);
    
private:
    void double_capacity();
    
private:
    int *m_array;
    int m_size;
    int m_ix;
};

// Default constructor
InfiniteArray::InfiniteArray() {
    // 2 is the default size
    m_ix = 0;
    m_size = 2;
    m_array = new int[m_size];
}

// custom constructor
InfiniteArray::InfiniteArray(int size) {
    // if error in size, print error default to size 2
    if(size <= 0) {
        cout << "Error: Array allocated with size <= 0, Defaulting to 2" << endl;
        size = 2;
    }
    
    m_ix = 0;
    m_size = size;
    m_array = new int[m_size];
}

// destructor
InfiniteArray::~InfiniteArray() {
    // free allocated array
    delete [] m_array;
}


bool InfiniteArray::put(int item) {
    bool extended = false;
    // if m_ix is same as m_size array is full. double capacity before adding
    if(m_ix == m_size) {
        double_capacity();
        extended = true;
    }
    // add the item at m_ix the increment m_ix
    *(m_array + m_ix) = item;
    m_ix++;
    
    return extended;
}


bool InfiniteArray::set(int ix, int item) {
    // set the value only if it is in valid range.
    // This prevents users from accessing memory out of valid bounds
    if(ix < 0 || ix >= m_ix)
        return false;
    
    *(m_array + ix) = item;
    return true;
}

int InfiniteArray::size() {
    // the index we are at indicates how many valid elements
    // we have
    return m_ix;
}

int InfiniteArray::get(int ix) {
    return *(m_array + ix);
}

void InfiniteArray::double_capacity() {
    // declare a new array of double the size
    int new_size = m_size * 2;
    int *old = m_array;
    
    // allocate space for new array
    m_array = new int[new_size];
    
    // copy elements over from old array,
    for(int i=0; i<m_size; i++) {
        *(m_array + i) = *(old + i);
    }
    
    // free old memory
    delete[] old;
    
    // set new size of the array
    m_size = new_size;
}

int main()
{
    InfiniteArray arr(4);
    
    for(int i=0; i < 10; i++)
        arr.put(i*10);
    
    arr.set(0, 1);
    arr.set(4, 4444);
    arr.set(9, 9000);
    
    // These don't succeed because they are out of range
    arr.set(-10, 123);
    arr.set(100, 123);
    if(!arr.set(10, 10))
        cout << "It over 9000!" << endl;
    
    for(int i=0; i < 10; i++)
        cout << arr.get(i) << endl;
}