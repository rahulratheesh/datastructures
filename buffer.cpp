#include "buffer.h"


Buffer::Buffer() {
    cursor = 0;
}

Buffer::~Buffer() {
}

void Buffer::moveCursorForward() {
    if ( cursor < chars.size() )
        cursor++;
}

void Buffer::moveCursorBackward() {
    if (cursor > 0)
        cursor--;
}

void Buffer::moveCursorToStart() {
    cursor = 0;
}

void Buffer::moveCursorToEnd() {
    cursor = chars.size();
}

void Buffer::insertCharacter(char ch) {
    chars.insertAt(cursor, ch);
    cursor++;
}

void Buffer::deleteCharacter() {
    chars.removeAt(cursor);
}
