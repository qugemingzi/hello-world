#ifndef TEST_BALL_H_INCLUDED
#define TEST_BALL_H_INCLUDED
class Ball;

class Test_Ball{
public:
    Test_Ball();
    Test_Ball(Ball*);

    Ball* ball();
    void ball(Ball*);
private:
    Ball *_ball; // Ãû³Æ
};


#endif // TEST_BALL_H_INCLUDED
