#include "_Window.hpp"
#include "_Resources.hpp"
#include "_StateMachine.hpp"


class _Engine {
public:
	void run();

private:
	_Window _window;
	_Resources _resources;
	_StateMachine _stateMachine;
};
