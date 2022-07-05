#include "../include/_State.hpp"


bool _State::should_close() const {
	return _shouldClose;
}

const std::string& _State::get_new_state() const {
	return _nextState;
}

void _State::close() {
	_shouldClose = true;
}

void _State::set_next_state(const std::string_view& name) {
	_nextState = name;
}
