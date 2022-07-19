#include <stdio.h>
#include <string.h>
#include <dlfcn.h>
#include <sys/socket.h>
typedef int(*SOCKET_HOOK)(int __domain, int __type, int __protocol);
typedef int(*SETSOCKOPT_HOOK) (int __fd, int __level, int __optname,
		       const void *__optval, socklen_t __optlen);

int socket(int __domain, int __type, int __protocol) 
{
    static void *handle_dll = NULL;
    static SOCKET_HOOK old_socket = NULL;
    static SETSOCKOPT_HOOK old_setsockopt = NULL;

    if( !handle_dll )
    {
        handle_dll = dlopen("libc.so.6", RTLD_LAZY);

        old_socket = (SOCKET_HOOK)dlsym(handle_dll, "socket");
        old_setsockopt = (SETSOCKOPT_HOOK)dlsym(handle_dll, "setsockopt");
    }
    int opt = 1;
    int x_fd = old_socket(__domain, __type, __protocol);
    if ( (__type == SOCK_STREAM) ||  (__type == SOCK_DGRAM)) {
        old_setsockopt(x_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));
        old_setsockopt(x_fd, SOL_SOCKET, SO_REUSEPORT, &opt, sizeof(opt));
    }
    return x_fd;
}

// int setsockopt (int __fd, int __level, int __optname,
// 		       const void *__optval, socklen_t __optlen) 
// {
//     static void *handle_setsockopt = NULL;
//     static SETSOCKOPT_HOOK old_setsockopt = NULL;
 
//     if( !handle_setsockopt )
//     {
//         handle_setsockopt = dlopen("libc.so.6", RTLD_LAZY);
//         old_setsockopt = (SETSOCKOPT_HOOK)dlsym(handle_setsockopt, "setsockopt");

//     }

//     if ( (__optname == SO_REUSEADDR) || (__optname == SO_REUSEPORT)) {
//         return 0;
//     }
//     else
//      return old_setsockopt(__fd, __level, __optname, __optval, __optlen);

// }