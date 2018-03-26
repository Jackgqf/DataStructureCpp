#include "gvector.h"

template <typename T>
gvector<T>::gvector(int c , int s , T v ){
    _elem = new T[_capacity = c];
    for(_size = 0; _size < s; _elem[_size++] = v);
}

template <typename T>
gvector<T>::~gvector(){
    delete []_elem;
}

template <typename T>
void gvector<T>::copyForm(const T *A, Rank lo, Rank hi){
    _elem = new T[_capacity = 2*(hi-lo)];
    _size = 0;
    while(lo<hi)
            _elem[_size++] = A[lo++];
}

template <typename T>
Rank gvector<T>::size() const{
    return _size;
}

template <typename T>
gvector<T>& gvector<T>::operator =(gvector<T> const& V){
        if(_elem)
            delete []_elem;
        copyForm(V._elem,0,V.size());
        return *this;
}
