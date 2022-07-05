#include <map>

#include "_State.hpp"


class _StateMachine {
public:
    bool should_close() const;

    void update();  /// TODO

    _State* operator->();

private:
    std::map<std::string, _State, std::less<>> _states;
    _State* _currentState;
};
