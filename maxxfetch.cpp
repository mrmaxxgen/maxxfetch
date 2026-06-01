#include <iostream>

using namespace std;

const char *user = R"(
echo user: $USER
)";

const char *hostname = R"(
echo hostname: $HOSTNAME
)";

const char *distro = R"(
echo distro: $(cat /etc/os-release | grep PRETTY_NAME | cut -d'=' -f2)
)";

const char *kernel = R"(
echo kernel: $(uname -r)
)";

const char *uptime = R"(
echo uptime: $(cat /proc/uptime | cut -d' ' -f1)
)";

const char *shell = R"(
echo shell: $SHELL
)";

const char *terminal = R"(
echo terminal: $TERM
)";

const char *cpu = R"(
echo CPU: $(uname -pm)
)";

const char *memory = R"(
echo MEM: $(cat /proc/meminfo | grep Active | cut -d':' -f2) / $(cat /proc/meminfo | grep MemAvailable | cut -d':' -f2)
)";

int main() {
	system(user);
	system(hostname);
	system(distro);
	system(kernel);
	system(uptime);
	system(shell);
	system(terminal);
	system(cpu);
	system(memory);
}
