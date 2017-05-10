分层?
-------

application - HTTP
transport - TCP
network - IP
link - ethernet
physical - device


代码模块?
--------------

user mode application layer: SOCKET.
kernel mode:
    system call layer, like NETLINK.
    socket layer.
    transport layer.
    network layer.
    neighbour system.
    netdevice unrelated layer.
    netdevice driver layer.

各个层的关键点:
system call: sys_socketcall().
socket layer: struct socket.
transport layer: socket.sk.skc_prot(tcp_prot), socket.ops(inet_stream_ops).
network layer: 以skb(struct sk_buff)为中心，注意这层包括arp, linux bridge, ovs等.
netdevice unrelated layer: dev_queue_xmit(), netif_rx().
netdevice driver layer: struct netdev, register_netdev(), unregister_netdev(), netdev.hard_start_xmit().
