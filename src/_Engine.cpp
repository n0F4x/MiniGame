#include "../include/_Engine.hpp"


void _Engine::run() {
	// game loop
	while (!_window.ShouldClose() && !_stateMachine.should_close()) {
		// update state of state machine
		_stateMachine.update();

		// update current game state
		_stateMachine->update();


		BeginDrawing();
	 
			// draw current state
			_stateMachine->draw();

		EndDrawing();
	}
}
