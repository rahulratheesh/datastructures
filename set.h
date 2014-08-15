#ifndef _set_h
#define _set_h

template <typename ElemType>
class Set {

    public:

        Set(int (cmpFn)(ElemType, ElemType) = operatorCmp);
        ~Set();

        int size();
        bool isEmpty();

        void add(ElemType elem);
        void remove(ElemType elem);
        void contains(ElemType elem);

        bool equals(Set &otherSet);
        bool isSubsetOf(Set &otherSet);
        void unionWith(Set &otherSet);
        void intersect(Set &otherSet);
        void subtract(Set &otherSet);

        Iterator iterator();
};

#endif // _set_h
