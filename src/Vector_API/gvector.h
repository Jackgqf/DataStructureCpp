#ifndef GVECTOR_H
#define GVECTOR_H

typedef int Rank;
#define DEFAULT_CAPACITY 3

template <typename T> class gvector
{
protected:
    Rank _size;
    int _capacity;
    T* _elem;

    void copyForm(T const* A, Rank lo, Rank hi);//copy array between lo to hi


public:
    //constructor function
    gvector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0);

    //destructor
    ~gvector();

    //only readble interface
    Rank size() const;

    //writable interface
    gvector<T> & operator= (gvector<T> const& );
};

#endif // GVECTOR_H
