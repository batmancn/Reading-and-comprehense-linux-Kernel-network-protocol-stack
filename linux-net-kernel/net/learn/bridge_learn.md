1. https://wiki.linuxfoundation.org/networking/bridge
2. http://ebtables.netfilter.org/
3. http://ebtables.netfilter.org/misc/ebtables-man.html
4. http://www.aboutyun.com/forum.php?mod=viewthread&tid=16712&highlight=neutron%2B%2B%CF%B5%C1%D0
5. http://ebtables.netfilter.org/br_fw_ia/br_fw_ia.html

FDB stratgy:
refer <4>, codes in /net/bridge/br_fdb.c

IPTABLES/EBTABLES and TABLE, CHAINS:
refer <3> <5>, codes in /net/bridge/netfilter/*
- Match fields: 802.3, mac, ip, ip6, limit, mark_m, stp bpdu, vlan.
- target: arpapply(PREROUTING-nat), dnat(BROUTING-broute, PREROUTING-nat, OUTPUT-nat), mark(every), snat(POSTROUTING-nat)
- chain: INPUT(packet from local), OUTPUT(to local), PREROUTING(packets comes in from net device), BROUTE(whether to local IP stack to route), POSTROUTING.
- table: filter, broute, nat. no mangle!
