#ifndef APPLES_H
#define APPLES_H


class Apples
{
    public:
        Apples();
        void sentinelProgram();
        int printTotal();
        int printElements();

    protected:

    private:
        int number;
        int total = 0;
        int totalElements = 0;
};

#endif // APPLES_H
