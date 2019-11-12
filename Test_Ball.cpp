#include "Test_Ball.h"
#include "Ball.h"

Test_Ball::Test_Ball(){
    _ball = new Ball();
}

Test_Ball::Test_Ball(Ball *ball){
    _ball = ball;
}

Ball* Test_Ball::ball(){
    return _ball;
}

void Test_Ball::ball(Ball *ball){
    _ball = ball;
}
