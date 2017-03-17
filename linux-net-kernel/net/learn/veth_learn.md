https://openvz.org/Virtual_Ethernet_device

code is /drivers/net/veth.c, basic is assgin skb's dev to dev->peer, and then this skb belongs to dev->peer.
