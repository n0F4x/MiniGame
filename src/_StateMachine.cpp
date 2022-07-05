#include "../include/_StateMachine.hpp"


bool _StateMachine::should_close() const {
    return false;
}

void _StateMachine::update() {
    /// TODO
}

_State* _StateMachine::operator->() {
    return _currentState;
}
