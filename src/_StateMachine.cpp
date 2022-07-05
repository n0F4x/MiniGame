#include "../include/_StateMachine.hpp"


bool _StateMachine::should_close() {
    return false;
}

void _StateMachine::update() {
    /// TODO
}

_State* _StateMachine::operator->() {
    return _current_state;
}
