#ifndef _grid_h
#define _grid_h

template <typename ElemType>
class Grid {

    public:

        Grid();
        Grid(int numRows, int numCols);
        ~Grid();

        int numRows();
        int numCols();

        ElemType getAt(int row, int col);
        void setAt(int row, int col, ElemType elem);

        void resize(int numRows, int numCols);
};

#endif
