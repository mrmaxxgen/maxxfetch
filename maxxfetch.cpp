#include <iostream>

using namespace std;

int main() {
	printf("user: \n");
	system("echo $USER");
	printf("hostname: \n");
	system("echo $HOSTNAME");
	printf("distro: \n");
	system("cat /etc/os-release | grep PRETTY_NAME | cut -d'=' -f2");
}
