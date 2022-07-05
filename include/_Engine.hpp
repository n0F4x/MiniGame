#include "_Window.hpp"
#include "_Resources.hpp"
#include "_State.hpp"


class _Engine {
public:
	void run();

private:
	_Window _window;
	_Resources _resources;
	_State _current_state;
};