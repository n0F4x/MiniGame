#include "../include/_Window.hpp"


_Window::_Window() {
	SetSize(500, 500);
	SetTitle("Labyrinth");
	SetIcon({}); ///TODO

	// key event to close window
	SetExitKey(0);

	SetTargetFPS(60);
	SetState(FLAG_VSYNC_HINT);
}
