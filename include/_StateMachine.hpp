#include "_State.hpp"


class _StateMachine {
public:
    bool should_close();

    void update();

    _State* operator->();

private:
    //map _states;
    _State* _current_state;
};
