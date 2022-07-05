#include <string>

#include <raylib-cpp.hpp>


class _State {
public:
	/**
	 * @brief	Calls this with a _StateMachine to check whether it should close.
	 * @return	True when the state requests the _StateMachine to close it
	*/
	bool should_close() const;
	/**
	 * @brief	Call this with a _StateMachine to change its current state.
	 * @return	The name of next state, requested by the current state
	*/
	const std::string& get_new_state() const;

	virtual void update() = 0;
	virtual void draw() = 0;

	virtual ~_State() = default;

protected:
	/**
	 * @brief	Sets the _should_close flag to true.
	*/
	void close();
	/**
	 * @brief	Sets the next state. Does not change the _should_close flag!
	 * @param name	Name of the next state
	*/
	void set_next_state(const std::string_view& name);

private:
	bool _shouldClose;
	std::string _nextState;
};