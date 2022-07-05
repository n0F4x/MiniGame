#include "../include/_Engine.hpp"


void _Engine::run() {
	// game loop
	while (!_window.ShouldClose() && !_state_machine.should_close()) {
		// update state of state machine
		_state_machine.update();

		// update current game state
		_state_machine->update();


		BeginDrawing();
	 
			// draw current state
			_state_machine->draw();

		EndDrawing();
	}
}
