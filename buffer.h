#ifndef _buffer_h
#define _buffer_h

#include "myvector.h"

class Buffer {

    public:

        Buffer();
        ~Buffer();

        void moveCursorForward();
        void moveCursorBackward();

        void moveCursorToStart();
        void moveCursorToEnd();

        void insertCharacter(char ch);
        void deleteCharacter();

    private:

        MyVector<char> chars;
        int cursor;

};

#include "buffer.cpp"

#endif // _buffer_h
