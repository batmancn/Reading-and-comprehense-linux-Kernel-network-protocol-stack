�ֲ�?
-------

application - HTTP
transport - TCP
network - IP
link - ethernet
physical - device


����ģ��?
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

������Ĺؼ���:
system call: sys_socketcall().
socket layer: struct socket.
transport layer: socket.sk.skc_prot(tcp_prot), socket.ops(inet_stream_ops).
network layer: ��skb(struct sk_buff)Ϊ���ģ�ע��������arp, linux bridge, ovs��.
netdevice unrelated layer: dev_queue_xmit(), netif_rx().
netdevice driver layer: struct netdev, register_netdev(), unregister_netdev(), netdev.hard_start_xmit().
