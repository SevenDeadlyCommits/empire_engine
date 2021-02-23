#include <errors/ErrorStatus.h>
#include <application/Application.h>

int main() {

    // Test running the default application class
    Empire::Application app;
    app.init();
    app.run();
    app.cleanup();

    return 0;
}
