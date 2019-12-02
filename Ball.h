#ifndef BALL_H_INCLUDED
#define BALL_H_INCLUDED
#include <string>
using namespace std;

class Ball{
public:
    Ball();
    Ball(double, const char*);
    Ball(double, string&);

    double radius() const;
    const string& name() const;

    void radius(double);
    void name(const char*);
    void name(string&);

    double volumn();

private:
    double _radius; // 半径
    string _name; // 名称
};


#endif // BALL_H_INCLUDED
