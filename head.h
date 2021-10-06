#ifndef _HEAD_H
#define _HEAD_H_

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <libgen.h>
#include <string>
#include <list>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/epoll.h>
#include <signal.h>
#include <pthread.h>
#include <exception>
#include <semaphore.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/uio.h>

#define MAX_FD 65535            // 最大的文件描述符个数
#define MAX_EVENT_NUM 10000     // 监听的最大事件数量

#endif