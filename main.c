#include<stdio.h>
#include<sys/utsname.h>

int main(int argc, char const *argv[]){
struct utsname syscall;

uname(&syscall);

printf("Nome do sistema operacional: %s\n", syscall.sysname);
printf("Nome com algumas 'implementações definidas de rede': %s\n", syscall.nodename);
printf("Release do sistema operacional %s\n",syscall.release);
printf("Versão do sistema operacional %s\n", syscall.version);
printf("Idetificador de Hardware: %s\n", syscall.machine);
printf("Nome de domínio NIS ou YP: %s\n",syscall.__domainname);

return 0;
}

