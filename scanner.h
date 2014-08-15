#ifndef _scanner_h
#define _scanner_h

class Scanner {
    public:

        Scanner();
        ~Scanner();

        void setInput(string str);

        string nextToken();
        string hasMoreTokens();

        enum spaceOption { preserveSpaces, ignoreSpaces};

        void setSpaceOption(spaceOption option);
        spaceOption getSpaceOption();
};


#endif
