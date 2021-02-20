#include <errors/error_status.h>
#include "empire.h"

int main() {
    empire::empire_engine engine;

    empire::ERROR_STATUS status = engine.initialise();

    if (status != empire::ERROR_STATUS::NONE)
        return (int) status;

    status = engine.launch();

    status = engine.shutdown();

    return (int) status;
}
