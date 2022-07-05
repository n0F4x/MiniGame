#include <raylib-cpp.hpp>


class _State {
public:
	virtual void update() = 0;
	virtual void draw() = 0;

	virtual ~_State() = default;
};