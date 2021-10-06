#ifndef _HTTP_CONN_H
#define _HTTP_CONN_H

#include "head.h"
#include "locker.h"

class http_conn {
    private:
        int m_sockfd;               // 该http连接的socket
        sockaddr_in m_address;      // 通信的socket地址

    public:
        static int m_epollfd;       // 所有socket上的事件都被注册到同一个epoll对象中
        static int m_user_count;    // 统计用户的数量
        http_conn() {}
        ~http_conn() {}
        void process();                                     // 处理客户端的请求
        void init(int sockfd, const sockaddr_in& addr);     // 初始化新接受的连接
        void close_conn();                                  // 关闭连接
        bool read();                                        // 非阻塞的读
        bool write();                                       // 非阻塞的写
};

#endif