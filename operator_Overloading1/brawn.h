#ifndef BRAWN_H
#define BRAWN_H


class brawn
{
    public:
        int num;
        brawn();
        brawn(int);
    //creating a functin overloader
        brawn operator+ (brawn);
};

#endif // BRAWN_H
