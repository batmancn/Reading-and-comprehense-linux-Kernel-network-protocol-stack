/*
 * =====================================================================================
 *
 *       Filename:  tun-tap-demo.c
 *
 *    Description:  This is small demo to tell how tu use tun/tap device driver.
 *
 *        Version:  1.0
 *        Created:  02/01/2016 07:12:20 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  batmancn ,
 *   Organization:
 *
 * =====================================================================================
 */

// tap/tun code is /drivers/net/tun.c

// refer http://www.ibm.com/developerworks/cn/linux/l-tuntap/index.html
// 从驱动程序的角度来说，它与真实网卡的不同表现在tun/tap
// 设备获取的数据不是来自物理链路，而是来自用户区，
// Tun/tap设备驱动通过字符设备文件来实现数据从用户区的获取。
// 发送数据时tun/tap设备也不是发送到物理链路，
// 而是通过字符设备发送至用户区，再由用户区程序通过其他渠道发送。
//
// 所以可以看出来，是从用户空间到用户空间，那么veth pair正好可以用这个。

// https://www.kernel.org/doc/Documentation/networking/tuntap.txt

#include <stdlib.h>
#include <linux/if_tun.h>

int tun_create(char *dev, int flag)
{
    int fd;
    // process fd into tun device
    return fd;
}

int main(int argc, const char *argv[])
{
    // make sure you have enough space.
    unsigned char buf[4096];

    // IFF_TUN means tun device,
    // IFF_NO_PI means do NOT transfer packet header into user space.
    tun = tun_create(tun_name, IFF_TUN | IFF_NO_PI);
    if (!tun) {
        // error quit
    }

    while(1){
        ret = read(tun, buf, sizeof(buf));  // use read system call
        if (!ret) {
            // error quit
        }

        // process buf

        ret = write(tun, buf, ret);
        if (!ret) {
            // error quit
        }
    }

    return 0;
}
